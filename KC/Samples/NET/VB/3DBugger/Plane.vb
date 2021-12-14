Imports KernCADnet

Public Class Plane
    Public m_location As DIPoint

    Public m_normal As DIVect

    Public Sub New()
        m_location = Util.CreatePoint()
        m_normal = Util.CreateVector()

        For i As Integer = 0 To 2
            m_location.x(i) = 0
            m_normal.v(i) = 0
        Next i

        m_normal.v(2) = 1
    End Sub

    Public Sub Dump(ByVal i3DBugger As I3DBugger)
        'This can also be done similar to Segment::Dump() replacing Begin(ePoints); with Begin(eLineLoop)
        'And supplying four vertices. We will demonstrate usage if IDrawUtil instead
        Dim iDraw As IDraw = i3DBugger
        Dim iDrawUtil As IDrawUtil = i3DBugger

        'Save current rendering (dumping) frame
        iDraw.PushMatrix()

        ' Position rendering (dumping) frame at m_location
        ' Reset the frame: make it identical to the global frame
        iDraw.LoadIdentity()
        ' Shift into m_location
        iDraw.Translate(m_location.x(0), m_location.x(1), m_location.x(2))

        ' At this point origin is at the correct location. Direct z axis of rendering frame along m_normal
        ' This is what iDrawUtil.Disk() below expects
        Dim iFrame2 As IFrame2 = iDraw

        iFrame2.SetupAxes(2, m_normal, 0)

        ' Set name of the object to be able to identify in the dump
        Dim hash As Integer = Me.GetHashCode()
        Dim strName As String = "Plane " + hash.ToString()
        Util.SetCurrentName(strName, iDraw)

        iDrawUtil.Disk(0, 3)

        i3DBugger.Dump()

        iDraw.PopMatrix()       ' Restore
    End Sub
End Class
