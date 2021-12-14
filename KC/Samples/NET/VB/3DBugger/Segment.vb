Imports KernCADnet

Public Class Segment
    Public m_iDIObjGenerator As IDIObjGenerator

    Public m_iLine As ILine
    Public m_iLineGeom As ILineGeom

    Public m_dir As I3Dpt

    Public m_length As Double

    Public Sub New(ByVal iDIObjGenerator As IDIObjGenerator)
        m_iDIObjGenerator = iDIObjGenerator
        m_length = 0
    End Sub

    Public Sub Setup()
        Dim obj As Object = m_iDIObjGenerator.Create2(EObjectType.eObjTypeLine)

        m_iLine = obj

        m_iLineGeom = m_iLine

        obj = m_iDIObjGenerator.Create(EObjectType.eObjType3DPoint)

        m_dir = obj
    End Sub

    Public Sub SetEnds(ByVal iPt0 As I3Dpt, ByVal iPt1 As I3Dpt)

        If m_iLine Is Nothing Then Setup()

        m_length = iPt0.Dist(iPt1)

        Dim pt0 As DIPoint = Util.CreatePoint()
        Util.CopyPoint(pt0, iPt0)

        m_iLine.SetOrigin(pt0)

        m_dir.Copy(iPt1)

        m_dir.Subtr(iPt0)

        m_dir.Normalize()

        Dim v As DIVect = Util.CreateVector()
        Util.CopyVector(v, m_dir)

        m_iLine.SetDirection(v)
    End Sub

    ' Returns false if no intersection with the segment. intersectionPt - out resul
    '
    Public Function IntersectPlane(ByRef plane As Plane, ByRef intersectionPt As DIPoint) As Boolean

        Dim position As Double

        Dim res = m_iLineGeom.IntersectPlane(plane.m_location, plane.m_normal, position)

        If res <> 1 Then Return False

        If position < 0 Or position > m_length Then Return False ' The intersection is outside of the segment

        m_iLine.GetPoint(position, intersectionPt)
        Return True
    End Function

    ' Save an object representing this segment into the dump stream
    Public Sub Dump()

        Dim i3DBugger As I3DBugger = m_iDIObjGenerator
        Dim iDraw As IDraw = i3DBugger

        Dim iKCContext As IKCContext = iDraw

        Dim iKCStack As IKCStack = iKCContext

        ' Save current settings, before modifying context
        IKCStack.Push(0)        ' Parameter does not matter in this case

        IKCContext.SetBoolParam(0, True)    ' 0-"Transient" state variable 
        '- Make the next object dumped via iDraw.End() a transient object
        ' We wnat segment dump to be transient because it is interesting only  on the current 
        ' intersection loop. If transient is set it will be removed from the scene on the next loop
        ' by BeginDump() in DBuggerDlg::Calculate()

        ' Set name of the object to be able to identify in the dump
        Dim hash As Integer = Me.GetHashCode()
        Dim strName As String = "Segment " + hash.ToString

        IKCContext.SetStringParam(0, strName)           ' Object name is the only string parameter currently

        Dim pt0 As DIPoint = Util.CreatePoint()
        Dim pt1 As DIPoint = Util.CreatePoint()

        m_iLine.GetPoint(0, pt0)
        m_iLine.GetPoint(m_length, pt1)

        IDraw.Color(0, 0.5, 0, 0)           'Dark green
        IDraw.Begin(EDrawPrimitive.eLineStrip)
        iDraw.Vertex(pt0.x(0), pt0.x(1), pt0.x(2))
        iDraw.Vertex(pt1.x(0), pt1.x(1), pt1.x(2))
        IDraw.end()
        I3DBugger.Dump()    ' Flush stream to display all dumped objects in debugger

        IKCStack.Pop(0) ' Restore transient state variable
    End Sub
End Class
