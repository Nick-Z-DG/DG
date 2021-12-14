<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class DebuggerForm
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
        Me.groupPlane = New System.Windows.Forms.GroupBox
        Me.GroupBoxNormal = New System.Windows.Forms.GroupBox
        Me.editNormalZ = New System.Windows.Forms.TextBox
        Me.Label4 = New System.Windows.Forms.Label
        Me.editNormalY = New System.Windows.Forms.TextBox
        Me.Label5 = New System.Windows.Forms.Label
        Me.editNormalX = New System.Windows.Forms.TextBox
        Me.Label6 = New System.Windows.Forms.Label
        Me.groupLocation = New System.Windows.Forms.GroupBox
        Me.editZ = New System.Windows.Forms.TextBox
        Me.Label3 = New System.Windows.Forms.Label
        Me.editY = New System.Windows.Forms.TextBox
        Me.Label2 = New System.Windows.Forms.Label
        Me.editX = New System.Windows.Forms.TextBox
        Me.Label1 = New System.Windows.Forms.Label
        Me.buttonCalculate = New System.Windows.Forms.Button
        Me.buttonClose = New System.Windows.Forms.Button
        Me.groupPlane.SuspendLayout()
        Me.GroupBoxNormal.SuspendLayout()
        Me.groupLocation.SuspendLayout()
        Me.SuspendLayout()
        '
        'groupPlane
        '
        Me.groupPlane.Controls.Add(Me.GroupBoxNormal)
        Me.groupPlane.Controls.Add(Me.groupLocation)
        Me.groupPlane.Location = New System.Drawing.Point(22, 7)
        Me.groupPlane.Name = "groupPlane"
        Me.groupPlane.Size = New System.Drawing.Size(277, 187)
        Me.groupPlane.TabIndex = 0
        Me.groupPlane.TabStop = False
        Me.groupPlane.Text = "Cutting Plane"
        '
        'GroupBoxNormal
        '
        Me.GroupBoxNormal.Controls.Add(Me.editNormalZ)
        Me.GroupBoxNormal.Controls.Add(Me.Label4)
        Me.GroupBoxNormal.Controls.Add(Me.editNormalY)
        Me.GroupBoxNormal.Controls.Add(Me.Label5)
        Me.GroupBoxNormal.Controls.Add(Me.editNormalX)
        Me.GroupBoxNormal.Controls.Add(Me.Label6)
        Me.GroupBoxNormal.Location = New System.Drawing.Point(145, 32)
        Me.GroupBoxNormal.Name = "GroupBoxNormal"
        Me.GroupBoxNormal.Size = New System.Drawing.Size(115, 141)
        Me.GroupBoxNormal.TabIndex = 1
        Me.GroupBoxNormal.TabStop = False
        Me.GroupBoxNormal.Text = "Normal"
        '
        'editNormalZ
        '
        Me.editNormalZ.Location = New System.Drawing.Point(37, 99)
        Me.editNormalZ.Name = "editNormalZ"
        Me.editNormalZ.Size = New System.Drawing.Size(58, 20)
        Me.editNormalZ.TabIndex = 5
        Me.editNormalZ.Text = "1.0"
        Me.editNormalZ.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label4
        '
        Me.Label4.AutoSize = True
        Me.Label4.Location = New System.Drawing.Point(14, 103)
        Me.Label4.Name = "Label4"
        Me.Label4.Size = New System.Drawing.Size(17, 13)
        Me.Label4.TabIndex = 4
        Me.Label4.Text = "Z:"
        '
        'editNormalY
        '
        Me.editNormalY.Location = New System.Drawing.Point(37, 60)
        Me.editNormalY.Name = "editNormalY"
        Me.editNormalY.Size = New System.Drawing.Size(58, 20)
        Me.editNormalY.TabIndex = 3
        Me.editNormalY.Text = "0.0"
        Me.editNormalY.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label5
        '
        Me.Label5.AutoSize = True
        Me.Label5.Location = New System.Drawing.Point(14, 64)
        Me.Label5.Name = "Label5"
        Me.Label5.Size = New System.Drawing.Size(17, 13)
        Me.Label5.TabIndex = 2
        Me.Label5.Text = "Y:"
        '
        'editNormalX
        '
        Me.editNormalX.Location = New System.Drawing.Point(37, 24)
        Me.editNormalX.Name = "editNormalX"
        Me.editNormalX.Size = New System.Drawing.Size(58, 20)
        Me.editNormalX.TabIndex = 1
        Me.editNormalX.Text = "0.0"
        Me.editNormalX.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label6
        '
        Me.Label6.AutoSize = True
        Me.Label6.Location = New System.Drawing.Point(14, 28)
        Me.Label6.Name = "Label6"
        Me.Label6.Size = New System.Drawing.Size(17, 13)
        Me.Label6.TabIndex = 0
        Me.Label6.Text = "X:"
        '
        'groupLocation
        '
        Me.groupLocation.Controls.Add(Me.editZ)
        Me.groupLocation.Controls.Add(Me.Label3)
        Me.groupLocation.Controls.Add(Me.editY)
        Me.groupLocation.Controls.Add(Me.Label2)
        Me.groupLocation.Controls.Add(Me.editX)
        Me.groupLocation.Controls.Add(Me.Label1)
        Me.groupLocation.Location = New System.Drawing.Point(15, 32)
        Me.groupLocation.Name = "groupLocation"
        Me.groupLocation.Size = New System.Drawing.Size(115, 141)
        Me.groupLocation.TabIndex = 0
        Me.groupLocation.TabStop = False
        Me.groupLocation.Text = "Location"
        '
        'editZ
        '
        Me.editZ.Location = New System.Drawing.Point(37, 99)
        Me.editZ.Name = "editZ"
        Me.editZ.Size = New System.Drawing.Size(58, 20)
        Me.editZ.TabIndex = 5
        Me.editZ.Text = "1.0"
        Me.editZ.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label3
        '
        Me.Label3.AutoSize = True
        Me.Label3.Location = New System.Drawing.Point(14, 103)
        Me.Label3.Name = "Label3"
        Me.Label3.Size = New System.Drawing.Size(17, 13)
        Me.Label3.TabIndex = 4
        Me.Label3.Text = "Z:"
        '
        'editY
        '
        Me.editY.Location = New System.Drawing.Point(37, 60)
        Me.editY.Name = "editY"
        Me.editY.Size = New System.Drawing.Size(58, 20)
        Me.editY.TabIndex = 3
        Me.editY.Text = "0.0"
        Me.editY.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Location = New System.Drawing.Point(14, 64)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(17, 13)
        Me.Label2.TabIndex = 2
        Me.Label2.Text = "Y:"
        '
        'editX
        '
        Me.editX.Location = New System.Drawing.Point(37, 24)
        Me.editX.Name = "editX"
        Me.editX.Size = New System.Drawing.Size(58, 20)
        Me.editX.TabIndex = 1
        Me.editX.Text = "0.0"
        Me.editX.TextAlign = System.Windows.Forms.HorizontalAlignment.Right
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Location = New System.Drawing.Point(14, 28)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(17, 13)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "X:"
        '
        'buttonCalculate
        '
        Me.buttonCalculate.Location = New System.Drawing.Point(44, 214)
        Me.buttonCalculate.Name = "buttonCalculate"
        Me.buttonCalculate.Size = New System.Drawing.Size(104, 26)
        Me.buttonCalculate.TabIndex = 1
        Me.buttonCalculate.Text = "Calculate"
        Me.buttonCalculate.UseVisualStyleBackColor = True
        '
        'buttonClose
        '
        Me.buttonClose.Location = New System.Drawing.Point(184, 214)
        Me.buttonClose.Name = "buttonClose"
        Me.buttonClose.Size = New System.Drawing.Size(104, 26)
        Me.buttonClose.TabIndex = 2
        Me.buttonClose.Text = "Close"
        Me.buttonClose.UseVisualStyleBackColor = True
        '
        'DebuggerForm
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(325, 250)
        Me.Controls.Add(Me.buttonClose)
        Me.Controls.Add(Me.buttonCalculate)
        Me.Controls.Add(Me.groupPlane)
        Me.Name = "DebuggerForm"
        Me.Text = "3DBugger"
        Me.groupPlane.ResumeLayout(False)
        Me.GroupBoxNormal.ResumeLayout(False)
        Me.GroupBoxNormal.PerformLayout()
        Me.groupLocation.ResumeLayout(False)
        Me.groupLocation.PerformLayout()
        Me.ResumeLayout(False)

    End Sub
    Friend WithEvents groupPlane As System.Windows.Forms.GroupBox
    Friend WithEvents groupLocation As System.Windows.Forms.GroupBox
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents GroupBoxNormal As System.Windows.Forms.GroupBox
    Friend WithEvents editNormalZ As System.Windows.Forms.TextBox
    Friend WithEvents Label4 As System.Windows.Forms.Label
    Friend WithEvents editNormalY As System.Windows.Forms.TextBox
    Friend WithEvents Label5 As System.Windows.Forms.Label
    Friend WithEvents editNormalX As System.Windows.Forms.TextBox
    Friend WithEvents Label6 As System.Windows.Forms.Label
    Friend WithEvents editZ As System.Windows.Forms.TextBox
    Friend WithEvents Label3 As System.Windows.Forms.Label
    Friend WithEvents editY As System.Windows.Forms.TextBox
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents editX As System.Windows.Forms.TextBox
    Friend WithEvents buttonCalculate As System.Windows.Forms.Button
    Friend WithEvents buttonClose As System.Windows.Forms.Button

End Class
