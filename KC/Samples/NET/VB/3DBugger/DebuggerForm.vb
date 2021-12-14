Imports KernCADnet
Imports System.Globalization

Public Class DebuggerForm

    Dim m_iDIObjGenerator As IDIObjGenerator

    Dim m_i3Dpt() As I3Dpt      ' Temporary variables for intermediate calculations

    Dim m_plane As Plane    ' Purely geometric object. Keeps position and location and performs calcualtions

    Dim m_nVertices As Integer  ' Vertex count in mesh of the object

    Dim m_vert() As DIPoint         ' Vertex coordinates array of m_nVertices size

    Dim m_IntersCount As Integer    ' How many points are valid in m_intersection

    Dim m_intersection() As DIPoint ' For simplicity. We know that the object is a thetrahedral. 
    ' Intersection with a plane can not have more than 4 points

    ' Copy of numbers stored inside m_plane for GUI data excange with edit boxes
    ' Location of the plane
    Dim m_xPlane As Double
    Dim m_yPlane As Double
    Dim m_zPlane As Double

    Dim m_dirXPlane As Double
    Dim m_dirYPlane As Double
    Dim m_dirZPlane As Double



#If KC_X64 Then 'This constant is defined in the project properties (Advanced Compile Options) for x64 configuration
    Dim m_i3DBugger As I3DBugger64
#Else
    Dim m_i3DBugger As I3DBugger
#End If

    Dim m_iDraw As IDraw    ' For drawing or rather dumping into debug stream

    Public Sub New()
        InitializeComponent()

        m_nVertices = 4
        ReDim m_i3Dpt(3)
        ReDim m_vert(3)
        ReDim m_intersection(3)
        For i As Integer = 0 To 3
            ReDim m_vert(i).x(2)
            ReDim m_intersection(i).x(2)
        Next
        m_plane = New Plane()

        m_xPlane = 0
        m_yPlane = 0
        m_zPlane = 1

        m_dirXPlane = 0
        m_dirYPlane = 0
        m_dirZPlane = 1
    End Sub


    Private Sub OnFormLoad(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Init()
    End Sub

    Sub Init()

        GetVertices()

        CreateGenerator()

        CreateTempPoints()

        m_i3DBugger = m_iDIObjGenerator
        m_iDraw = m_i3DBugger
    End Sub

    Sub CreateGenerator()

        Dim generator As New DIObjGeneratorClass

        m_iDIObjGenerator = generator ' Query
    End Sub

    ' Get corrdinates
    Sub GetVertices()

        ' For simplicity use known values from the DBugger.glm model. See also DumpModel()
        ' See Morph sample for a way of accessing actual coordinates
        m_vert(0).x(0) = 0 : m_vert(0).x(1) = 0 : m_vert(0).x(2) = 0
        m_vert(1).x(0) = 1 : m_vert(1).x(1) = 0 : m_vert(1).x(2) = 0
        m_vert(2).x(0) = 0 : m_vert(2).x(1) = 2 : m_vert(2).x(2) = 0
        m_vert(3).x(0) = 0 : m_vert(3).x(1) = 0 : m_vert(3).x(2) = 3
    End Sub

    Sub CreateTempPoints()

        ' Construct three independent (of the rendered model) points for calculations
        For i As Integer = 0 To 3
            m_i3Dpt(i) = m_iDIObjGenerator.Create(EObjectType.eObjType3DPoint)
        Next
    End Sub

    ' end must be either 0 or 1
    Sub SetSegmentEnd(ByVal e As Integer, ByVal pt As DIPoint)

        m_i3Dpt(e).Set(pt.x(0), pt.x(1), pt.x(2))
    End Sub

    Sub UpdatePlane()

        m_plane.m_location.x(0) = m_xPlane
        m_plane.m_location.x(1) = m_yPlane
        m_plane.m_location.x(2) = m_zPlane

        m_plane.m_normal.v(0) = m_dirXPlane
        m_plane.m_normal.v(1) = m_dirYPlane
        m_plane.m_normal.v(2) = m_dirZPlane
    End Sub

    ' Calculate points of the intersection loop m_intersection
    '
    Sub Calculate()

        m_IntersCount = 0           ' Reset

        UpdatePlane()

        m_i3DBugger.BeginSession()      ' Clear the Debugger window

        ' Display the thetrahedral in debugger to see relative locations of other intermediate objects
        DumpModel()

        m_plane.Dump(m_i3DBugger)

        ' Loop through all segments in the mesh of the object.
        ' For simplicity (true for the std.glm model) assume that there is a segment lining each vertex to each
        '
        For i As Integer = 1 To m_nVertices - 1
            m_i3DBugger.BeginDump() ' Remove transient objects (segment) from the scene to avoid clogging up

            SetSegmentEnd(0, m_vert(i))             ' Copy coordinates into m_i3Dpt(0) for calculations

            For j As Integer = 0 To i - 1                  ' Skip zero length and reversed segments

                SetSegmentEnd(1, m_vert(j))         ' Copy coordinates into m_i3Dpt(1) for calculations

                ' If the segments has an intersection with the plane add the point to intersection array
                AddSegmentIntersection()
            Next
        Next

        If m_IntersCount > 3 Then CheckIntersectionOrder() ' Make sure points in CCW order in intersection plane to make the intersection a valid quad

        ' Display result
        DumpIntersection()
        ' Depending on location and orientation of the plane 
        ' The intersection will appear as meshed surface: triangle or
        ' a rectangle (divided in two simplexes in wire frame view) 
        ' intersection can also be a point or segment or empty (no intersection)
    End Sub

    ' Calculate intersection (if exists) of segment betweenthe points with the plane
    ' Add the intersection point to the intersection loop
    '
    Sub AddSegmentIntersection()

        Dim Segment As New Segment(m_iDIObjGenerator)    ' The object generator creation is slowish because it involves COM
        ' For performance reuse the one created in this dialog
        Segment.SetEnds(m_i3Dpt(0), m_i3Dpt(1))

        Segment.Dump()

        Dim intersectionPt As DIPoint = Util.CreatePoint()

        If Not Segment.IntersectPlane(m_plane, intersectionPt) Then Return

        AddIntersection(intersectionPt)
    End Sub

    Sub AddIntersection(ByRef pt As DIPoint)

        If FindIntersectionPoint(pt) >= 0 Then Return ' The point has been alreay added. Probably because the plane passes trough a vertex

        Util.CopyPoint(m_intersection(m_IntersCount), pt)
        m_IntersCount = m_IntersCount + 1

        DumpPoint(pt)

    End Sub



    ' Normaly an objects should dump itself, but point is too simple object so we do not have a class for it
    Sub DumpPoint(ByVal pt As DIPoint)

        ' Set name of the object to be able to identify in the dump
        Dim k As Integer = m_IntersCount - 1
        Dim strName As String = "Inters point " + k.ToString()
        Util.SetCurrentName(strName, m_iDraw)

        ' Draw the current intersection as large red point
        m_iDraw.PointSize(5)
        m_iDraw.Color(1, 0, 0, 0)
        m_iDraw.Begin(EDrawPrimitive.ePoints)
        m_iDraw.Vertex(pt.x(0), pt.x(1), pt.x(2))
        m_iDraw.end()
        m_i3DBugger.Dump()    ' Flush stream to display all dumped objects in debugger
    End Sub

    ' Returns -1 if not found
    Function FindIntersectionPoint(ByVal pt As DIPoint) As Integer

        For i As Integer = 0 To m_IntersCount - 1

            If Util.IsSame(m_intersection(i), pt) Then Return i
        Next

        Return -1
    End Function


    Sub DumpModel()

        Dim iModel As IModel = LoadModel("Models\\Samples\\DBugger.mdg") 'When path is relative it is relative to KernelCAD installation folder

        ' Instead of (int)iModel the hash can be any other number identifying the object or 0
        ' Debugger uses it to decide whether it is a new object or an update of a previously dumped one
        m_i3DBugger.DumpObject(iModel, 0, True, False)
    End Sub

    ' Load new model from strPath .glm file
    '
    Function LoadModel(ByVal strPath As String) As IModel

        Dim iModel As IModel = m_iDIObjGenerator.Create(EObjectType.eObjTypeModelGenerator)

        Dim iModelEx As IModelEx = iModel
        iModelEx.Load(strPath)
        Return iModel
    End Function


    Sub DumpIntersection()

        If m_IntersCount < 1 Then Return

        Util.SetCurrentName("Intersection face", m_iDraw)

        ' Dump a triangle representing the intersection. We are using the fact the section of thetrahedra (our model) 
        ' with a plane is a triangle in general case
        m_iDraw.Color(1, 0, 1, 0)

        If (m_IntersCount = 4) Then
            m_iDraw.Begin(EDrawPrimitive.eQuads)
        ElseIf (m_IntersCount = 3) Then
            m_iDraw.Begin(EDrawPrimitive.eTriangles)
        ElseIf (m_IntersCount = 2) Then
            m_iDraw.Begin(EDrawPrimitive.eLines)
        ElseIf (m_IntersCount = 1) Then
            m_iDraw.Begin(EDrawPrimitive.ePoints)
        End If

        For i As Integer = 0 To m_IntersCount - 1
            m_iDraw.Vertex(m_intersection(i).x(0), m_intersection(i).x(1), m_intersection(i).x(2))
        Next

        m_iDraw.end()
        m_i3DBugger.Dump()    ' Flush stream 
    End Sub


    ' Make sure intersection points are in correct order: Counter Clock Wise 
    ' if looking from end of normal of the plane. Otherwise they do not form a valid quad for rendering
    ' This method does some math
    '
    Sub CheckIntersectionOrder()

        If m_IntersCount < 4 Then Return

        Dim i As Integer
        ' Check that orientation of vectors vector01 (point 0 to point 1 ), vector03 and normal of the plane is positive
        ' and repeat it for all points. If orientation has chnanged the sequence is wrong
        Dim Orientation As Boolean = GetOrientation(0)

        For i = 1 To 2
            If GetOrientation(i) <> Orientation Then Exit For
        Next

        If i = 3 Then Return 'everything if fine

        ' Swap the first and the second points
        Dim temp As DIPoint = Util.CreatePoint()
        Util.CopyPoint(temp, m_intersection(0))
        Util.CopyPoint(m_intersection(0), m_intersection(1))
        Util.CopyPoint(m_intersection(1), temp)
    End Sub

    Function GetOrientation(ByVal i As Integer) As Boolean

        Dim vector03 As I3Dpt = m_i3Dpt(0) ' Vector with ends point 0 and point 3

        Dim iPrev As Integer = i - 1
        If iPrev < 0 Then iPrev = 3 ' Previous cyclic

        Util.CopyPointTo(m_intersection(iPrev), vector03)

        Util.CopyPointTo(m_intersection(i), m_i3Dpt(1))     ' m_i3Dpt(1) keeps m_intersection(0) now

        vector03.Subtr(m_i3Dpt(1))      ' Created the vector

        Dim vector01 As I3Dpt = m_i3Dpt(2)   ' Vector with ends point 0 and point 1

        Dim iNext As Integer = i + 1
        If iNext > 3 Then iNext = 0 ' Next cyclic

        Util.CopyPointTo(m_intersection(iNext), vector01)

        vector01.Subtr(m_i3Dpt(1))

        Dim vectorCrossProd As I3Dpt = m_i3Dpt(3)

        vectorCrossProd.CrossProduct(vector03, vector01)

        Dim vectorPlaneNormal As I3Dpt = m_i3Dpt(1)      ' Reuse the interface

        Util.CopyVectorTo(m_plane.m_normal, vectorPlaneNormal)

        Dim prod As Double = vectorCrossProd.Product(vectorPlaneNormal)

        Return prod >= 0
    End Function

       

    Sub UpdateData()

        m_xPlane = Double.Parse(editX.Text, CultureInfo.InvariantCulture)
        m_yPlane = Double.Parse(editY.Text, CultureInfo.InvariantCulture)
        m_zPlane = Double.Parse(editZ.Text, CultureInfo.InvariantCulture)
        m_dirXPlane = Double.Parse(editNormalX.Text, CultureInfo.InvariantCulture)
        m_dirYPlane = Double.Parse(editNormalY.Text, CultureInfo.InvariantCulture)
        m_dirZPlane = Double.Parse(editNormalZ.Text, CultureInfo.InvariantCulture)
    End Sub

    Private Sub OnClose(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles buttonClose.Click
        Close()
    End Sub

    Private Sub OnCalculate(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles buttonCalculate.Click
        UpdateData()

        If m_dirXPlane = 0 And m_dirYPlane = 0 And m_dirZPlane = 0 Then
            m_dirXPlane = 0
            m_dirYPlane = 0
            m_dirZPlane = 1
            MessageBox.Show("Normal vector must not be zero")
            Return
        End If

        Calculate()
    End Sub
End Class
