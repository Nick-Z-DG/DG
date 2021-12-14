Imports KernCADnet

Public Class Patchwork

    Dim m_iDraw As IDraw    ' Interface for custom drawing local annotations: Nearest point, distances and normals

#If KC_X64 Then 'This constant is defined in the project properties (Advanced Compile Options) for x64 configuration
    Dim m_iSurface As ISurface64
    Dim m_iIterator(2) As IIterator64
    Dim m_iList(2) As IList64         'Vertex, Edge and Patch lists for the whole surface
    Dim m_iListVertCurEdge As IList64         ' Vertices of the current edge, including internal ones
#Else
    Dim m_iSurface As ISurface
    Dim m_iIterator(2) As IIterator
    Dim m_iList(2) As IList         'Vertex, Edge and Patch lists for the whole surface
    Dim m_iListVertCurEdge As IList         ' Vertices of the current edge, including internal ones
#End If

    Dim m_pos(2) As Long  'm_pos[0] - position of the current Vertex, m_pos[1] -	position of the current edge, m_pos[2] - Simplex
    Dim m_nCount(2) As Long         ' Number of elements of each kind totatl in the surface
    Dim m_iCurElem(2) As Object   'Actual types 0 - IVertex, 1 - IKCLine 2 - IPatch
    Dim m_iArrEdgeComponents As IArray2 ' Linked edge components or the current patch. Most often single component
    '                                   Edge of surface of a cylinder has two isolated linked components which are geometricaly 3D circles
    Dim m_iStrip As IStrip          ' The current component
    Dim m_iArrEdges As IArray2              ' Edges of the current patch
    Dim m_iArrVertices As IArray2           ' Vertices of the current patch
    Dim m_nCurrentEdge As Long              ' In m_iArrEdges
    Dim m_endsCurEdge(2) As DIPoint         ' Coordinates of ends of the current edge
    Dim m_nCurrentVertex As Long            'In m_iArrVertices
    Dim m_curVertex As DIPoint              'Coordinates of the current vertex
    Dim m_bCurVertexValid As Boolean        ' m_curVertex calculated
    Dim m_iGraphicItemPatch As IGraphicItem 'For drawing the current patch
    Dim m_iModel As IModel                  'IModel of the currently loaded model
    Dim m_iSection As ISection              'ISection o fth ecurrent object
    Dim m_iGraphicItemEdge As IGraphicItem
    Dim m_iFrameEx As IFrameEx              'Used to convert coordinates of surface vertices to global coordinates

    Dim m_nElementType As Short     ' 0 - Vertex, 1 - Edge 2 - Patch
    Dim m_nComponents As Integer    ' Count of linked edge components in the current patch
    Dim m_nCurComponent As Integer  ' The current edge component in the current patch
    Dim m_nEdges As Integer            ' Number of edges in the current patch
    Dim m_nPatchVertexCount As Integer  ' Number of vertices in the patch = 0 (closed edge) or m_nEdges
    Dim m_bBrowseAll As Boolean     ' If False means browse vertices or edges of the current patch instead
    Dim m_bClosed As Boolean        ' The current edge is a loop
    Dim m_bParametricEdges As Boolean 'Edges are supposed to be drawn using m_iGraphicItemEdge instead of strip of vertices

    Private Sub Constr()
        m_nElementType = 2
        m_nCurrentEdge = -1     'A patche may not have edges at all
        m_nCurrentVertex = -1   'Inside a patch number of vertices coinsides with number of edges
        m_bBrowseAll = True

        m_curVertex = New DIPoint
        ReDim m_curVertex.x(2)
        For i As Integer = 0 To 1
            m_endsCurEdge(i) = New DIPoint
            ReDim m_endsCurEdge(i).x(2)
        Next
    End Sub

    Private Sub OnFormLoad(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Constr()
        InitModelInfo()
        AxKernCADnet1.RequestClientDraw(True)
    End Sub

    Private Sub InitModelInfo()

        m_iModel = AxKernCADnet1.GetModel()

        m_iDraw = m_iModel

        UpdateObjectInfo()

    End Sub

    Private Sub UpdateObjectInfo()

        If Not m_iSection Is Nothing Then
            m_iSection.SetVisible(False)        ' Hide old object
        End If

        m_iSection = m_iModel.GetSection(upDownCurObject.Value)

        m_bParametricEdges = False
        Dim strType As String = m_iSection.GetSectionType()
        txtObjectType.Text = strType
        If strType = "SORSection" Then m_bParametricEdges = True

        m_iSection.SetVisible(True)

        m_iSurface = m_iSection

        m_iList(0) = m_iSurface.GetVertices()
        m_iList(1) = m_iSurface.GetEdges()
        m_iList(2) = m_iSurface.GetPatches()

        For i As Integer = 0 To 2

            m_iIterator(i) = m_iList(i).GetIterator()

            m_nCount(i) = m_iIterator(i).GetCount()

            m_pos(i) = m_iIterator(i).GetHeadPosition()
        Next i

        m_iFrameEx = m_iSection

        UpdatePatchInfo()

        UpdatePage()

    End Sub

    Function GetGraphicItem(iInterface As Object) As IGraphicItem

        Dim iView As IView = AxKernCADnet1.GetView()
        Dim iObject As IObject_KC = iInterface
        Dim iGrItem As IGraphicItem = iView.GetGraphicItem(iObject)
        Return iGrItem
    End Function

    Private Sub UpdatePatchInfo()

        Dim p As IntPtr

        p = m_iList(2).GetAt(m_pos(2))

        m_iCurElem(2) = System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(p)

        'm_iGraphicItemPatch = m_iCurElem(2)
        m_iGraphicItemPatch = GetGraphicItem(m_iCurElem(2))

        Dim iPatch As IPatch
        iPatch = m_iCurElem(2)  'The actual type

        m_iArrEdgeComponents = iPatch.GetEdgeComponents()

        m_nComponents = m_iArrEdgeComponents.GetCount()

        If m_nComponents > 0 Then
            If (m_nCurComponent < 0) Then
                m_nCurComponent = 0
            ElseIf (m_nCurComponent >= m_nComponents) Then
                m_nCurComponent = m_nComponents - 1
            End If
        Else
            m_nCurComponent = -1
        End If

        UpdateEdgesInfo()

        UpdateCurrentVertexInfo()
    End Sub

    Private Sub UpdateEdgesInfo()

        m_iStrip = m_iArrEdgeComponents.GetAt(0)

        m_nEdges = m_iStrip.GetJointCount()

        m_nPatchVertexCount = m_nEdges

        If m_nEdges = 0 Then
            ' Check for case a single closed element (like circle)
            Dim bClosed As Boolean
            bClosed = m_iStrip.IsClosed()
            If bClosed Then
                m_nEdges = 1                'Empty strips are NOT closed. So this is a closed element
            End If
            m_nCurrentVertex = -1
        Else
            m_nCurrentVertex = m_nCurrentEdge
        End If

        m_nCurrentEdge = 0
        If m_nEdges = 0 Then m_nCurrentEdge = -1

        If m_nCount(m_nElementType) = 0 Then
            'Case there ar eno elements of the selected type. Find any other
            For m_nElementType As Integer = 0 To 2 Step 1
                If (m_nCount(m_nElementType) > 0) Then Exit For
            Next m_nElementType

            If m_nElementType = 3 Then
                m_nElementType = 2      'Did not find. Does not really matter. Just to keep in range
            End If
        End If

        UpdateCurrentEdgeInfo()

        UpdateControls()
    End Sub

    Private Sub UpdateCurrentVertexInfo()

        m_bCurVertexValid = False
        Dim p As IntPtr
        Dim iVertex As IVertex

        If m_bBrowseAll Then
            ' Case browsing all edges in the surface independently of the current patch
            If m_pos(0) = 0 Then Exit Sub

            p = m_iList(0).GetAt(m_pos(0))
            iVertex = System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(p)
        Else
            ' Case browsing inside the current patch
            If m_iStrip Is Nothing Then Exit Sub
            If m_nCurrentVertex < 0 Then Exit Sub

            Dim iElem As IElement
            iElem = m_iStrip.GetElement(m_nCurrentVertex, False)
            iVertex = iElem             'Query
        End If

        GetPoint(iVertex, m_curVertex)
        m_bCurVertexValid = True
    End Sub

    ' Enable/Disable controls
    Private Sub UpdatePage()

        If upDownCurObject.Value = 1 Then
            txtObjectType.Text = "3DS"
        Else
            txtObjectType.Text = "Mesh Section"
        End If

        Dim bEnablePrevious, bEnableNext As Boolean

        If m_bBrowseAll Or m_nElementType = 2 Then  ' patches
            If m_nElementType = 3 Then ' Components
                bEnablePrevious = m_nCurComponent > 0
            Else
                Dim posnHead As Long
                posnHead = m_iIterator(m_nElementType).GetHeadPosition()

                bEnablePrevious = m_pos(m_nElementType) <> posnHead
            End If
        Else
            If m_nElementType = 1 Then              ' Edges?
                bEnablePrevious = m_nCurrentEdge > 0
            ElseIf m_nElementType = 3 Then              ' components?
                bEnablePrevious = m_nCurComponent > 0
            Else
                bEnablePrevious = m_nCurrentVertex > 0
            End If
        End If

        buttonPrev.Enabled = bEnablePrevious

        If m_bBrowseAll Or m_nElementType = 2 Then          ' patches
            If m_nElementType = 3 Then ' Components
                bEnableNext = m_nCurComponent < m_nComponents - 1
            Else
                Dim posnTail As Long
                posnTail = m_iIterator(m_nElementType).GetTailPosition()

                bEnableNext = m_pos(m_nElementType) <> posnTail
            End If
        Else
            If m_nElementType = 1 Then              ' Edges?
                bEnableNext = m_nCurrentEdge < m_nEdges - 1
            ElseIf m_nElementType = 3 Then             ' components?
                bEnableNext = m_nCurComponent < m_nComponents - 1
            Else
                bEnableNext = m_nCurrentVertex < m_nEdges - 1
            End If
        End If

        buttonNext.Enabled = bEnableNext

        radiButtVertex.Enabled = m_nCount(0) > 0

        Dim bEnableBrowseGroup As Boolean = m_nElementType <> 2

        groupBrowse.Enabled = bEnableBrowseGroup And m_nElementType <> 3       'Component list is available only per patch

        'labelCurEdge.Enabled = bEnableBrowseGroup
        'textPatchCurEdge.Enabled = bEnableBrowseGroup
        'labelPatchCurVertex.Enabled = bEnableBrowseGroup
        'textPatchCurVertex.Enabled = bEnableBrowseGroup

        If bEnableBrowseGroup Then
            If m_nElementType = 0 Then
                groupBrowse.Text = "Browse Vertices"
            ElseIf m_nElementType = 1 Then
                groupBrowse.Text = "Browse Edges"
            End If
        End If

        UpdateControls()
    End Sub

    Private Sub UpdateCurrentEdgeInfo()

        Dim iKCLine As IKCLine

        If m_bBrowseAll Then

            ' Case browsing all edges in the surface independently of the current patch
            Dim p As IntPtr
            p = m_iList(1).GetAt(m_pos(1))

            iKCLine = System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(p)
        Else
            ' Case browsing inside the current patch
            If m_iStrip Is Nothing Then Exit Sub

            If m_nCurrentEdge < 0 Then Exit Sub

            Dim iElem As IElement
            iElem = m_iStrip.GetElement(m_nCurrentEdge, True)
            iKCLine = iElem
        End If

        m_bClosed = iKCLine.IsClosed()

        If m_bParametricEdges Then
            'm_iGraphicItemEdge = iKCLine
            m_iGraphicItemEdge = GetGraphicItem(iKCLine)
        Else
            Dim iVertex As IVertex

            For i As Integer = 0 To 1
                iVertex = iKCLine.GetEnd(i)
                GetPoint(iVertex, m_endsCurEdge(i))
            Next i

            If Not m_bBrowseAll Then
                UpdateCurrentVertexInfo()
            End If

            'Get all vertices of the current edge to draw it. Ends only is not enough for curved lines
            m_iListVertCurEdge = iKCLine
        End If

    End Sub

    Private Sub GetPoint(ByRef iVertex As IVertex, ByRef pt As DIPoint)

        iVertex.GetVertexCoord(pt.x(0), pt.x(1), pt.x(2))

        'Internal geometry of an object is always expressed relative to the local frame of the object
        m_iFrameEx.ToGlobal(pt)
    End Sub

    ' Display stored numbers on the form
    Private Sub UpdateControls()
        textPatches.Text = m_nCount(2)
        textEdges.Text = m_nCount(1)
        textVertices.Text = m_nCount(0)
        textPatchEdges.Text = m_nEdges
        textPatchCurEdge.Text = m_nCurrentEdge
        textPatchVertices.Text = m_nPatchVertexCount
        textPatchCurVertex.Text = m_nCurrentVertex
        txtComponents.Text = m_nComponents
        textCurComp.Text = m_nCurComponent
    End Sub

    Private Sub OnClientDraw(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles AxKernCADnet1.ClientDraw
        m_iDraw.PushAttrib()    'Save the current color, point size  and line width (along with other attributes)

        If Not m_iGraphicItemPatch Is Nothing Then

            m_iDraw.Color(1.0, 1.0, 0.0, 1.0)   ' Yellow

            m_iGraphicItemPatch.Draw()
        End If

        'Draw the current edge
        If m_bBrowseAll Or m_nCurrentEdge >= 0 Then      'Some patches do not have any edges
            m_iDraw.Color(1.0, 0.0, 0.0, 1.0)   ' Set red  the current color (RGB and transparency)

            m_iDraw.LineWidth(3.0)

            If (m_bParametricEdges) Then
                m_iGraphicItemEdge.Draw()
            Else
                Dim p As IntPtr

                If Not m_iListVertCurEdge Is Nothing Then

                    m_iDraw.Begin(EDrawPrimitive.eLineStrip)

#If KC_X64 Then 'This constant is defined in the project properties (Advanced Compile Options) for x64 configuration
                    Dim iIterator As IIterator64
                    Dim pos As Long
#Else
                    Dim iIterator As IIterator
                    Dim pos As Integer
#End If
                    iIterator = m_iListVertCurEdge.GetIterator

                    pos = iIterator.GetHeadPosition()

                    Dim iVertex As IVertex
                    Dim x, y, z As Double
                    Do While (pos <> 0)
                        p = m_iListVertCurEdge.GetAt(pos)
                        iVertex = System.Runtime.InteropServices.Marshal.GetObjectForIUnknown(p)

                        iVertex.GetVertexCoord(x, y, z)

                        m_iDraw.Vertex(x, y, z)

                        iIterator.GetNext(pos)
                    Loop

                Else

                    m_iDraw.Begin(EDrawPrimitive.eLines)

                    m_iDraw.Vertex(m_endsCurEdge(0).x(0), m_endsCurEdge(0).x(1), m_endsCurEdge(0).x(2))
                    m_iDraw.Vertex(m_endsCurEdge(1).x(0), m_endsCurEdge(1).x(1), m_endsCurEdge(1).x(2))
                End If

                m_iDraw.end()
            End If
        End If

        ' The current vertex
        If m_bCurVertexValid Then
            m_iDraw.PointSize(8)

            m_iDraw.Color(0.0, 0.0, 1.0, 1.0)   ' Blue

            m_iDraw.Begin(EDrawPrimitive.ePoints)
            m_iDraw.Vertex(m_curVertex.x(0), m_curVertex.x(1), m_curVertex.x(2))
            m_iDraw.end()
        End If
    End Sub

    Private Sub OnElemTypeVertex(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radiButtVertex.Click
        m_nElementType = 0
        UpdatePage()
    End Sub

    Private Sub OnElemTypeEdge(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radiButtEdge.Click
        m_nElementType = 1
        UpdatePage()
    End Sub

    Private Sub OnElemTypePatch(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radiButtPatch.Click
        m_nElementType = 2
        UpdatePage()
    End Sub

    Private Sub OnBrowseAll(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radioButtBrowseAll.Click
        m_bBrowseAll = True
        UpdatePage()
    End Sub

    Private Sub OnBrowsePatch(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles radioButtBrowsePatch.Click
        m_bBrowseAll = False
        UpdateEdgesInfo()
        AxKernCADnet1.UpdateView()
        UpdatePage()
    End Sub

    Private Sub OnPrevious(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles buttonPrev.Click
        OnNext(False)
    End Sub

    Private Sub OnNext(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles buttonNext.Click
        OnNext(True)
    End Sub

    Private Sub OnNext(ByVal bNext As Boolean)

        If m_bBrowseAll Or m_nElementType = 2 Then    ' Browse all or patches?

            If bNext Then
                m_iIterator(m_nElementType).GetNext(m_pos(m_nElementType))
            Else
                m_iIterator(m_nElementType).GetPrev(m_pos(m_nElementType))
            End If
        End If

        If m_nElementType = 0 Then

            If Not m_bBrowseAll Then                        'Browse the patch?

                If bNext Then
                    m_nCurrentVertex = m_nCurrentVertex + 1
                Else
                    m_nCurrentVertex = m_nCurrentVertex - 1
                End If
            End If
            UpdateCurrentVertexInfo()

        ElseIf m_nElementType = 1 Then
            If bNext Then
                m_nCurrentEdge = m_nCurrentEdge + 1
            Else
                m_nCurrentEdge = m_nCurrentEdge - 1
            End If

            UpdateCurrentEdgeInfo()
        ElseIf (m_nElementType = 2) Then
            UpdatePatchInfo()
        End If

        AxKernCADnet1.UpdateView()
        UpdatePage()
    End Sub

    Private Sub OnFileOpen(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles menuItemFileOpen.Click
        Dim strModelPath As String

        strModelPath = AxKernCADnet1.ModelPath

        Dim dlg As OpenFileDialog

        dlg = New OpenFileDialog

        dlg.InitialDirectory = strModelPath
        dlg.Filter = "Model Files (*.mdg, *.glm)|*.mdg;*.glm"
        dlg.FilterIndex = 2
        dlg.RestoreDirectory = False

        If dlg.ShowDialog <> DialogResult.OK Then
            Return
        End If

        strModelPath = dlg.FileName

        AxKernCADnet1.ModelPath = strModelPath

        InitModelInfo()
    End Sub

    Private Sub OnFileExit(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles menuItemExit.Click
        Close()
    End Sub

    Private Sub OnCurObjectUpDownValueChanged(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles upDownCurObject.ValueChanged

        UpdateObjectInfo()

        AxKernCADnet1.UpdateView()
    End Sub

    Private Sub OnElemTypeComponent(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles rbComponent.Click
        m_nElementType = 3
        If m_bBrowseAll Then
            m_bBrowseAll = False
            radioButtBrowsePatch.Checked = True
            'Component list is available only per patch
        End If
        UpdatePage()
    End Sub
End Class
