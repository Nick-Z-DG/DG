<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Patchwork
    Inherits System.Windows.Forms.Form

    'Form overrides dispose to clean up the component list.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Required by the Windows Form Designer
    Private components As System.ComponentModel.IContainer

    'NOTE: The following procedure is required by the Windows Form Designer
    'It can be modified using the Windows Form Designer.  
    'Do not modify it using the code editor.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Dim resources As System.ComponentModel.ComponentResourceManager = New System.ComponentModel.ComponentResourceManager(GetType(Patchwork))
        Me.GroupBox5 = New System.Windows.Forms.GroupBox()
        Me.txtComponents = New System.Windows.Forms.Label()
        Me.textCurComp = New System.Windows.Forms.Label()
        Me.Label9 = New System.Windows.Forms.Label()
        Me.Label10 = New System.Windows.Forms.Label()
        Me.textPatchCurVertex = New System.Windows.Forms.Label()
        Me.labelPatchCurVertex = New System.Windows.Forms.Label()
        Me.textPatchVertices = New System.Windows.Forms.Label()
        Me.Label8 = New System.Windows.Forms.Label()
        Me.textPatchEdges = New System.Windows.Forms.Label()
        Me.textPatchCurEdge = New System.Windows.Forms.Label()
        Me.labelCurEdge = New System.Windows.Forms.Label()
        Me.Label4 = New System.Windows.Forms.Label()
        Me.GroupBox2 = New System.Windows.Forms.GroupBox()
        Me.buttonNext = New System.Windows.Forms.Button()
        Me.buttonPrev = New System.Windows.Forms.Button()
        Me.groupBrowse = New System.Windows.Forms.GroupBox()
        Me.radioButtBrowsePatch = New System.Windows.Forms.RadioButton()
        Me.radioButtBrowseAll = New System.Windows.Forms.RadioButton()
        Me.GroupBox3 = New System.Windows.Forms.GroupBox()
        Me.rbComponent = New System.Windows.Forms.RadioButton()
        Me.radiButtPatch = New System.Windows.Forms.RadioButton()
        Me.radiButtEdge = New System.Windows.Forms.RadioButton()
        Me.radiButtVertex = New System.Windows.Forms.RadioButton()
        Me.GroupBox1 = New System.Windows.Forms.GroupBox()
        Me.textVertices = New System.Windows.Forms.Label()
        Me.textEdges = New System.Windows.Forms.Label()
        Me.textPatches = New System.Windows.Forms.Label()
        Me.Label3 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.AxKernCADnet1 = New AxKernCADnet.AxKernCADnet()
        Me.mainMenu = New System.Windows.Forms.MenuStrip()
        Me.FileToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.menuItemFileOpen = New System.Windows.Forms.ToolStripMenuItem()
        Me.menuItemExit = New System.Windows.Forms.ToolStripMenuItem()
        Me.groupCurObject = New System.Windows.Forms.GroupBox()
        Me.txtObjectType = New System.Windows.Forms.Label()
        Me.Label5 = New System.Windows.Forms.Label()
        Me.upDownCurObject = New System.Windows.Forms.NumericUpDown()
        Me.GroupBox5.SuspendLayout()
        Me.GroupBox2.SuspendLayout()
        Me.groupBrowse.SuspendLayout()
        Me.GroupBox3.SuspendLayout()
        Me.GroupBox1.SuspendLayout()
        CType(Me.AxKernCADnet1, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.mainMenu.SuspendLayout()
        Me.groupCurObject.SuspendLayout()
        CType(Me.upDownCurObject, System.ComponentModel.ISupportInitialize).BeginInit()
        Me.SuspendLayout()
        '
        'GroupBox5
        '
        Me.GroupBox5.Controls.Add(Me.txtComponents)
        Me.GroupBox5.Controls.Add(Me.textCurComp)
        Me.GroupBox5.Controls.Add(Me.Label9)
        Me.GroupBox5.Controls.Add(Me.Label10)
        Me.GroupBox5.Controls.Add(Me.textPatchCurVertex)
        Me.GroupBox5.Controls.Add(Me.labelPatchCurVertex)
        Me.GroupBox5.Controls.Add(Me.textPatchVertices)
        Me.GroupBox5.Controls.Add(Me.Label8)
        Me.GroupBox5.Controls.Add(Me.textPatchEdges)
        Me.GroupBox5.Controls.Add(Me.textPatchCurEdge)
        Me.GroupBox5.Controls.Add(Me.labelCurEdge)
        Me.GroupBox5.Controls.Add(Me.Label4)
        Me.GroupBox5.Location = New System.Drawing.Point(640, 481)
        Me.GroupBox5.Name = "GroupBox5"
        Me.GroupBox5.Size = New System.Drawing.Size(155, 150)
        Me.GroupBox5.TabIndex = 5
        Me.GroupBox5.TabStop = False
        Me.GroupBox5.Text = "Current Patch"
        '
        'txtComponents
        '
        Me.txtComponents.AutoSize = True
        Me.txtComponents.Location = New System.Drawing.Point(119, 20)
        Me.txtComponents.Name = "txtComponents"
        Me.txtComponents.Size = New System.Drawing.Size(13, 13)
        Me.txtComponents.TabIndex = 11
        Me.txtComponents.Text = "4"
        '
        'textCurComp
        '
        Me.textCurComp.AutoSize = True
        Me.textCurComp.Location = New System.Drawing.Point(119, 39)
        Me.textCurComp.Name = "textCurComp"
        Me.textCurComp.Size = New System.Drawing.Size(13, 13)
        Me.textCurComp.TabIndex = 10
        Me.textCurComp.Text = "0"
        '
        'Label9
        '
        Me.Label9.AutoSize = True
        Me.Label9.Location = New System.Drawing.Point(15, 39)
        Me.Label9.Name = "Label9"
        Me.Label9.Size = New System.Drawing.Size(101, 13)
        Me.Label9.TabIndex = 9
        Me.Label9.Text = "Current Component:"
        '
        'Label10
        '
        Me.Label10.AutoSize = True
        Me.Label10.Location = New System.Drawing.Point(15, 20)
        Me.Label10.Name = "Label10"
        Me.Label10.Size = New System.Drawing.Size(97, 13)
        Me.Label10.TabIndex = 8
        Me.Label10.Text = "Edge Components:"
        '
        'textPatchCurVertex
        '
        Me.textPatchCurVertex.AutoSize = True
        Me.textPatchCurVertex.Location = New System.Drawing.Point(119, 126)
        Me.textPatchCurVertex.Name = "textPatchCurVertex"
        Me.textPatchCurVertex.Size = New System.Drawing.Size(13, 13)
        Me.textPatchCurVertex.TabIndex = 7
        Me.textPatchCurVertex.Text = "0"
        '
        'labelPatchCurVertex
        '
        Me.labelPatchCurVertex.AutoSize = True
        Me.labelPatchCurVertex.Location = New System.Drawing.Point(16, 126)
        Me.labelPatchCurVertex.Name = "labelPatchCurVertex"
        Me.labelPatchCurVertex.Size = New System.Drawing.Size(77, 13)
        Me.labelPatchCurVertex.TabIndex = 6
        Me.labelPatchCurVertex.Text = "Current Vertex:"
        '
        'textPatchVertices
        '
        Me.textPatchVertices.AutoSize = True
        Me.textPatchVertices.Location = New System.Drawing.Point(119, 109)
        Me.textPatchVertices.Name = "textPatchVertices"
        Me.textPatchVertices.Size = New System.Drawing.Size(13, 13)
        Me.textPatchVertices.TabIndex = 5
        Me.textPatchVertices.Text = "4"
        '
        'Label8
        '
        Me.Label8.AutoSize = True
        Me.Label8.Location = New System.Drawing.Point(16, 109)
        Me.Label8.Name = "Label8"
        Me.Label8.Size = New System.Drawing.Size(48, 13)
        Me.Label8.TabIndex = 4
        Me.Label8.Text = "Vertices:"
        '
        'textPatchEdges
        '
        Me.textPatchEdges.AutoSize = True
        Me.textPatchEdges.Location = New System.Drawing.Point(119, 66)
        Me.textPatchEdges.Name = "textPatchEdges"
        Me.textPatchEdges.Size = New System.Drawing.Size(13, 13)
        Me.textPatchEdges.TabIndex = 3
        Me.textPatchEdges.Text = "4"
        '
        'textPatchCurEdge
        '
        Me.textPatchCurEdge.AutoSize = True
        Me.textPatchCurEdge.Location = New System.Drawing.Point(119, 84)
        Me.textPatchCurEdge.Name = "textPatchCurEdge"
        Me.textPatchCurEdge.Size = New System.Drawing.Size(13, 13)
        Me.textPatchCurEdge.TabIndex = 2
        Me.textPatchCurEdge.Text = "0"
        '
        'labelCurEdge
        '
        Me.labelCurEdge.AutoSize = True
        Me.labelCurEdge.Location = New System.Drawing.Point(16, 84)
        Me.labelCurEdge.Name = "labelCurEdge"
        Me.labelCurEdge.Size = New System.Drawing.Size(72, 13)
        Me.labelCurEdge.TabIndex = 1
        Me.labelCurEdge.Text = "Current Edge:"
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(16, 66)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(40, 13)
        Me.Label4.TabIndex = 0
        Me.Label4.Text = "Edges:"
        '
        'GroupBox2
        '
        Me.GroupBox2.Controls.Add(Me.buttonNext)
        Me.GroupBox2.Controls.Add(Me.buttonPrev)
        Me.GroupBox2.Controls.Add(Me.groupBrowse)
        Me.GroupBox2.Controls.Add(Me.GroupBox3)
        Me.GroupBox2.Location = New System.Drawing.Point(637, 215)
        Me.GroupBox2.Name = "GroupBox2"
        Me.GroupBox2.Size = New System.Drawing.Size(155, 253)
        Me.GroupBox2.TabIndex = 4
        Me.GroupBox2.TabStop = False
        Me.GroupBox2.Text = "Current Element"
        '
        'buttonNext
        '
        Me.buttonNext.Location = New System.Drawing.Point(85, 225)
        Me.buttonNext.Name = "buttonNext"
        Me.buttonNext.Size = New System.Drawing.Size(59, 22)
        Me.buttonNext.TabIndex = 3
        Me.buttonNext.Text = "Next"
        Me.buttonNext.UseVisualStyleBackColor = True
        '
        'buttonPrev
        '
        Me.buttonPrev.Location = New System.Drawing.Point(20, 225)
        Me.buttonPrev.Name = "buttonPrev"
        Me.buttonPrev.Size = New System.Drawing.Size(59, 22)
        Me.buttonPrev.TabIndex = 2
        Me.buttonPrev.Text = "Previous"
        Me.buttonPrev.UseVisualStyleBackColor = True
        '
        'groupBrowse
        '
        Me.groupBrowse.Controls.Add(Me.radioButtBrowsePatch)
        Me.groupBrowse.Controls.Add(Me.radioButtBrowseAll)
        Me.groupBrowse.Location = New System.Drawing.Point(17, 148)
        Me.groupBrowse.Name = "groupBrowse"
        Me.groupBrowse.Size = New System.Drawing.Size(125, 64)
        Me.groupBrowse.TabIndex = 1
        Me.groupBrowse.TabStop = False
        Me.groupBrowse.Text = "Browse Vertices"
        '
        'radioButtBrowsePatch
        '
        Me.radioButtBrowsePatch.AutoSize = True
        Me.radioButtBrowsePatch.Location = New System.Drawing.Point(18, 41)
        Me.radioButtBrowsePatch.Name = "radioButtBrowsePatch"
        Me.radioButtBrowsePatch.Size = New System.Drawing.Size(90, 17)
        Me.radioButtBrowsePatch.TabIndex = 2
        Me.radioButtBrowsePatch.TabStop = True
        Me.radioButtBrowsePatch.Text = "Current Patch"
        Me.radioButtBrowsePatch.UseVisualStyleBackColor = True
        '
        'radioButtBrowseAll
        '
        Me.radioButtBrowseAll.AutoSize = True
        Me.radioButtBrowseAll.Checked = True
        Me.radioButtBrowseAll.Location = New System.Drawing.Point(18, 19)
        Me.radioButtBrowseAll.Name = "radioButtBrowseAll"
        Me.radioButtBrowseAll.Size = New System.Drawing.Size(36, 17)
        Me.radioButtBrowseAll.TabIndex = 1
        Me.radioButtBrowseAll.TabStop = True
        Me.radioButtBrowseAll.Text = "All"
        Me.radioButtBrowseAll.UseVisualStyleBackColor = True
        '
        'GroupBox3
        '
        Me.GroupBox3.Controls.Add(Me.rbComponent)
        Me.GroupBox3.Controls.Add(Me.radiButtPatch)
        Me.GroupBox3.Controls.Add(Me.radiButtEdge)
        Me.GroupBox3.Controls.Add(Me.radiButtVertex)
        Me.GroupBox3.Location = New System.Drawing.Point(17, 22)
        Me.GroupBox3.Name = "GroupBox3"
        Me.GroupBox3.Size = New System.Drawing.Size(127, 114)
        Me.GroupBox3.TabIndex = 0
        Me.GroupBox3.TabStop = False
        Me.GroupBox3.Text = "Type"
        '
        'rbComponent
        '
        Me.rbComponent.AutoSize = True
        Me.rbComponent.Location = New System.Drawing.Point(18, 87)
        Me.rbComponent.Name = "rbComponent"
        Me.rbComponent.Size = New System.Drawing.Size(107, 17)
        Me.rbComponent.TabIndex = 3
        Me.rbComponent.TabStop = True
        Me.rbComponent.Text = "Edge Component"
        Me.rbComponent.UseVisualStyleBackColor = True
        '
        'radiButtPatch
        '
        Me.radiButtPatch.AutoSize = True
        Me.radiButtPatch.Checked = True
        Me.radiButtPatch.Location = New System.Drawing.Point(18, 64)
        Me.radiButtPatch.Name = "radiButtPatch"
        Me.radiButtPatch.Size = New System.Drawing.Size(53, 17)
        Me.radiButtPatch.TabIndex = 2
        Me.radiButtPatch.TabStop = True
        Me.radiButtPatch.Text = "Patch"
        Me.radiButtPatch.UseVisualStyleBackColor = True
        '
        'radiButtEdge
        '
        Me.radiButtEdge.AutoSize = True
        Me.radiButtEdge.Location = New System.Drawing.Point(18, 41)
        Me.radiButtEdge.Name = "radiButtEdge"
        Me.radiButtEdge.Size = New System.Drawing.Size(50, 17)
        Me.radiButtEdge.TabIndex = 1
        Me.radiButtEdge.TabStop = True
        Me.radiButtEdge.Text = "Edge"
        Me.radiButtEdge.UseVisualStyleBackColor = True
        '
        'radiButtVertex
        '
        Me.radiButtVertex.AutoSize = True
        Me.radiButtVertex.Location = New System.Drawing.Point(18, 18)
        Me.radiButtVertex.Name = "radiButtVertex"
        Me.radiButtVertex.Size = New System.Drawing.Size(55, 17)
        Me.radiButtVertex.TabIndex = 0
        Me.radiButtVertex.TabStop = True
        Me.radiButtVertex.Text = "Vertex"
        Me.radiButtVertex.UseVisualStyleBackColor = True
        '
        'GroupBox1
        '
        Me.GroupBox1.Controls.Add(Me.textVertices)
        Me.GroupBox1.Controls.Add(Me.textEdges)
        Me.GroupBox1.Controls.Add(Me.textPatches)
        Me.GroupBox1.Controls.Add(Me.Label3)
        Me.GroupBox1.Controls.Add(Me.Label2)
        Me.GroupBox1.Controls.Add(Me.Label1)
        Me.GroupBox1.Location = New System.Drawing.Point(637, 113)
        Me.GroupBox1.Name = "GroupBox1"
        Me.GroupBox1.Size = New System.Drawing.Size(156, 89)
        Me.GroupBox1.TabIndex = 3
        Me.GroupBox1.TabStop = False
        Me.GroupBox1.Text = "Surface"
        '
        'textVertices
        '
        Me.textVertices.AutoSize = True
        Me.textVertices.Location = New System.Drawing.Point(95, 65)
        Me.textVertices.Name = "textVertices"
        Me.textVertices.Size = New System.Drawing.Size(13, 13)
        Me.textVertices.TabIndex = 5
        Me.textVertices.Text = "0"
        '
        'textEdges
        '
        Me.textEdges.AutoSize = True
        Me.textEdges.Location = New System.Drawing.Point(95, 43)
        Me.textEdges.Name = "textEdges"
        Me.textEdges.Size = New System.Drawing.Size(13, 13)
        Me.textEdges.TabIndex = 4
        Me.textEdges.Text = "0"
        '
        'textPatches
        '
        Me.textPatches.AutoSize = True
        Me.textPatches.Location = New System.Drawing.Point(95, 23)
        Me.textPatches.Name = "textPatches"
        Me.textPatches.Size = New System.Drawing.Size(13, 13)
        Me.textPatches.TabIndex = 3
        Me.textPatches.Text = "0"
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(34, 65)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(48, 13)
        Me.Label3.TabIndex = 2
        Me.Label3.Text = "Vertices:"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(34, 43)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(40, 13)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "Edges:"
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(35, 23)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(49, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Patches:"
        '
        'AxKernCADnet1
        '
        Me.AxKernCADnet1.Enabled = True
        Me.AxKernCADnet1.Location = New System.Drawing.Point(5, 28)
        Me.AxKernCADnet1.Name = "AxKernCADnet1"
        Me.AxKernCADnet1.OcxState = CType(resources.GetObject("AxKernCADnet1.OcxState"), System.Windows.Forms.AxHost.State)
        Me.AxKernCADnet1.Size = New System.Drawing.Size(619, 601)
        Me.AxKernCADnet1.TabIndex = 6
        '
        'mainMenu
        '
        Me.mainMenu.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.FileToolStripMenuItem})
        Me.mainMenu.Location = New System.Drawing.Point(0, 0)
        Me.mainMenu.Name = "mainMenu"
        Me.mainMenu.Size = New System.Drawing.Size(807, 24)
        Me.mainMenu.TabIndex = 7
        Me.mainMenu.Text = "MenuStrip1"
        '
        'FileToolStripMenuItem
        '
        Me.FileToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.menuItemFileOpen, Me.menuItemExit})
        Me.FileToolStripMenuItem.Name = "FileToolStripMenuItem"
        Me.FileToolStripMenuItem.Size = New System.Drawing.Size(37, 20)
        Me.FileToolStripMenuItem.Text = "&File"
        '
        'menuItemFileOpen
        '
        Me.menuItemFileOpen.Name = "menuItemFileOpen"
        Me.menuItemFileOpen.Size = New System.Drawing.Size(103, 22)
        Me.menuItemFileOpen.Text = "&Open"
        '
        'menuItemExit
        '
        Me.menuItemExit.Name = "menuItemExit"
        Me.menuItemExit.Size = New System.Drawing.Size(103, 22)
        Me.menuItemExit.Text = "&Exit"
        '
        'groupCurObject
        '
        Me.groupCurObject.Controls.Add(Me.txtObjectType)
        Me.groupCurObject.Controls.Add(Me.Label5)
        Me.groupCurObject.Controls.Add(Me.upDownCurObject)
        Me.groupCurObject.Location = New System.Drawing.Point(644, 31)
        Me.groupCurObject.Name = "groupCurObject"
        Me.groupCurObject.Size = New System.Drawing.Size(146, 70)
        Me.groupCurObject.TabIndex = 8
        Me.groupCurObject.TabStop = False
        Me.groupCurObject.Text = "Current Object"
        '
        'txtObjectType
        '
        Me.txtObjectType.AutoSize = True
        Me.txtObjectType.Location = New System.Drawing.Point(55, 50)
        Me.txtObjectType.Name = "txtObjectType"
        Me.txtObjectType.Size = New System.Drawing.Size(72, 13)
        Me.txtObjectType.TabIndex = 2
        Me.txtObjectType.Text = "Mesh Section"
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(10, 49)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(34, 13)
        Me.Label5.TabIndex = 1
        Me.Label5.Text = "Type:"
        '
        'upDownCurObject
        '
        Me.upDownCurObject.Location = New System.Drawing.Point(50, 19)
        Me.upDownCurObject.Maximum = New Decimal(New Integer() {3, 0, 0, 0})
        Me.upDownCurObject.Name = "upDownCurObject"
        Me.upDownCurObject.Size = New System.Drawing.Size(51, 20)
        Me.upDownCurObject.TabIndex = 0
        '
        'Patchwork
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(807, 638)
        Me.Controls.Add(Me.groupCurObject)
        Me.Controls.Add(Me.AxKernCADnet1)
        Me.Controls.Add(Me.GroupBox5)
        Me.Controls.Add(Me.GroupBox2)
        Me.Controls.Add(Me.GroupBox1)
        Me.Controls.Add(Me.mainMenu)
        Me.Icon = CType(resources.GetObject("$this.Icon"), System.Drawing.Icon)
        Me.MainMenuStrip = Me.mainMenu
        Me.Name = "Patchwork"
        Me.Text = "Patchwork"
        Me.GroupBox5.ResumeLayout(False)
        Me.GroupBox5.PerformLayout()
        Me.GroupBox2.ResumeLayout(False)
        Me.groupBrowse.ResumeLayout(False)
        Me.groupBrowse.PerformLayout()
        Me.GroupBox3.ResumeLayout(False)
        Me.GroupBox3.PerformLayout()
        Me.GroupBox1.ResumeLayout(False)
        Me.GroupBox1.PerformLayout()
        CType(Me.AxKernCADnet1, System.ComponentModel.ISupportInitialize).EndInit()
        Me.mainMenu.ResumeLayout(False)
        Me.mainMenu.PerformLayout()
        Me.groupCurObject.ResumeLayout(False)
        Me.groupCurObject.PerformLayout()
        CType(Me.upDownCurObject, System.ComponentModel.ISupportInitialize).EndInit()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents GroupBox5 As System.Windows.Forms.GroupBox
    Friend WithEvents textPatchCurVertex As System.Windows.Forms.Label
    Friend WithEvents labelPatchCurVertex As System.Windows.Forms.Label
    Friend WithEvents textPatchVertices As System.Windows.Forms.Label
    Friend WithEvents Label8 As System.Windows.Forms.Label
    Friend WithEvents textPatchEdges As System.Windows.Forms.Label
    Friend WithEvents textPatchCurEdge As System.Windows.Forms.Label
    Friend WithEvents labelCurEdge As System.Windows.Forms.Label
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents GroupBox2 As System.Windows.Forms.GroupBox
    Friend WithEvents buttonNext As System.Windows.Forms.Button
    Friend WithEvents buttonPrev As System.Windows.Forms.Button
    Friend WithEvents groupBrowse As System.Windows.Forms.GroupBox
    Friend WithEvents radioButtBrowsePatch As System.Windows.Forms.RadioButton
    Friend WithEvents radioButtBrowseAll As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox3 As System.Windows.Forms.GroupBox
    Friend WithEvents radiButtPatch As System.Windows.Forms.RadioButton
    Friend WithEvents radiButtEdge As System.Windows.Forms.RadioButton
    Friend WithEvents radiButtVertex As System.Windows.Forms.RadioButton
    Friend WithEvents GroupBox1 As System.Windows.Forms.GroupBox
    Friend WithEvents textVertices As System.Windows.Forms.Label
    Friend WithEvents textEdges As System.Windows.Forms.Label
    Friend WithEvents textPatches As System.Windows.Forms.Label
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents AxKernCADnet1 As AxKernCADnet.AxKernCADnet
    Friend WithEvents mainMenu As System.Windows.Forms.MenuStrip
    Friend WithEvents FileToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents menuItemFileOpen As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents menuItemExit As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents groupCurObject As System.Windows.Forms.GroupBox
    Friend WithEvents upDownCurObject As System.Windows.Forms.NumericUpDown
    Friend WithEvents txtObjectType As System.Windows.Forms.Label
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents rbComponent As System.Windows.Forms.RadioButton
    Friend WithEvents txtComponents As System.Windows.Forms.Label
    Friend WithEvents textCurComp As System.Windows.Forms.Label
    Friend WithEvents Label9 As System.Windows.Forms.Label
    Friend WithEvents Label10 As System.Windows.Forms.Label

End Class
