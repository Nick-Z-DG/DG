namespace _DBugger
{
    partial class DebuggerForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.groupPlane = new System.Windows.Forms.GroupBox();
            this.groupNormal = new System.Windows.Forms.GroupBox();
            this.editNormalZ = new System.Windows.Forms.TextBox();
            this.label4 = new System.Windows.Forms.Label();
            this.editNormalY = new System.Windows.Forms.TextBox();
            this.label5 = new System.Windows.Forms.Label();
            this.editNormalX = new System.Windows.Forms.TextBox();
            this.label6 = new System.Windows.Forms.Label();
            this.groupLocation = new System.Windows.Forms.GroupBox();
            this.editZ = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.editY = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.editX = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.buttCalculate = new System.Windows.Forms.Button();
            this.buttonClose = new System.Windows.Forms.Button();
            this.groupPlane.SuspendLayout();
            this.groupNormal.SuspendLayout();
            this.groupLocation.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupPlane
            // 
            this.groupPlane.Controls.Add(this.groupNormal);
            this.groupPlane.Controls.Add(this.groupLocation);
            this.groupPlane.Location = new System.Drawing.Point(17, 10);
            this.groupPlane.Name = "groupPlane";
            this.groupPlane.Size = new System.Drawing.Size(331, 190);
            this.groupPlane.TabIndex = 0;
            this.groupPlane.TabStop = false;
            this.groupPlane.Text = "Cutting Plane";
            // 
            // groupNormal
            // 
            this.groupNormal.Controls.Add(this.editNormalZ);
            this.groupNormal.Controls.Add(this.label4);
            this.groupNormal.Controls.Add(this.editNormalY);
            this.groupNormal.Controls.Add(this.label5);
            this.groupNormal.Controls.Add(this.editNormalX);
            this.groupNormal.Controls.Add(this.label6);
            this.groupNormal.Location = new System.Drawing.Point(175, 32);
            this.groupNormal.Name = "groupNormal";
            this.groupNormal.Size = new System.Drawing.Size(138, 138);
            this.groupNormal.TabIndex = 1;
            this.groupNormal.TabStop = false;
            this.groupNormal.Text = "Normal";
            // 
            // editNormalZ
            // 
            this.editNormalZ.Location = new System.Drawing.Point(43, 103);
            this.editNormalZ.Name = "editNormalZ";
            this.editNormalZ.Size = new System.Drawing.Size(76, 20);
            this.editNormalZ.TabIndex = 5;
            this.editNormalZ.Text = "1";
            this.editNormalZ.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label4
            // 
            this.label4.AutoSize = true;
            this.label4.Location = new System.Drawing.Point(16, 107);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(17, 13);
            this.label4.TabIndex = 4;
            this.label4.Text = "Z:";
            // 
            // editNormalY
            // 
            this.editNormalY.Location = new System.Drawing.Point(42, 66);
            this.editNormalY.Name = "editNormalY";
            this.editNormalY.Size = new System.Drawing.Size(76, 20);
            this.editNormalY.TabIndex = 3;
            this.editNormalY.Text = "0";
            this.editNormalY.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label5
            // 
            this.label5.AutoSize = true;
            this.label5.Location = new System.Drawing.Point(15, 70);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(17, 13);
            this.label5.TabIndex = 2;
            this.label5.Text = "Y:";
            // 
            // editNormalX
            // 
            this.editNormalX.Location = new System.Drawing.Point(43, 29);
            this.editNormalX.Name = "editNormalX";
            this.editNormalX.Size = new System.Drawing.Size(76, 20);
            this.editNormalX.TabIndex = 1;
            this.editNormalX.Text = "0";
            this.editNormalX.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label6
            // 
            this.label6.AutoSize = true;
            this.label6.Location = new System.Drawing.Point(16, 33);
            this.label6.Name = "label6";
            this.label6.Size = new System.Drawing.Size(17, 13);
            this.label6.TabIndex = 0;
            this.label6.Text = "X:";
            // 
            // groupLocation
            // 
            this.groupLocation.Controls.Add(this.editZ);
            this.groupLocation.Controls.Add(this.label3);
            this.groupLocation.Controls.Add(this.editY);
            this.groupLocation.Controls.Add(this.label2);
            this.groupLocation.Controls.Add(this.editX);
            this.groupLocation.Controls.Add(this.label1);
            this.groupLocation.Location = new System.Drawing.Point(15, 29);
            this.groupLocation.Name = "groupLocation";
            this.groupLocation.Size = new System.Drawing.Size(138, 138);
            this.groupLocation.TabIndex = 0;
            this.groupLocation.TabStop = false;
            this.groupLocation.Text = "Location";
            // 
            // editZ
            // 
            this.editZ.Location = new System.Drawing.Point(43, 103);
            this.editZ.Name = "editZ";
            this.editZ.Size = new System.Drawing.Size(76, 20);
            this.editZ.TabIndex = 5;
            this.editZ.Text = "1";
            this.editZ.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Location = new System.Drawing.Point(16, 107);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(17, 13);
            this.label3.TabIndex = 4;
            this.label3.Text = "Z:";
            // 
            // editY
            // 
            this.editY.Location = new System.Drawing.Point(42, 66);
            this.editY.Name = "editY";
            this.editY.Size = new System.Drawing.Size(76, 20);
            this.editY.TabIndex = 3;
            this.editY.Text = "0";
            this.editY.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(15, 70);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(17, 13);
            this.label2.TabIndex = 2;
            this.label2.Text = "Y:";
            // 
            // editX
            // 
            this.editX.Location = new System.Drawing.Point(43, 29);
            this.editX.Name = "editX";
            this.editX.Size = new System.Drawing.Size(76, 20);
            this.editX.TabIndex = 1;
            this.editX.Text = "0";
            this.editX.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(16, 33);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(17, 13);
            this.label1.TabIndex = 0;
            this.label1.Text = "X:";
            // 
            // buttCalculate
            // 
            this.buttCalculate.Location = new System.Drawing.Point(83, 213);
            this.buttCalculate.Name = "buttCalculate";
            this.buttCalculate.Size = new System.Drawing.Size(78, 29);
            this.buttCalculate.TabIndex = 1;
            this.buttCalculate.Text = "&Calculate";
            this.buttCalculate.UseVisualStyleBackColor = true;
            this.buttCalculate.Click += new System.EventHandler(this.OnCalculate);
            // 
            // buttonClose
            // 
            this.buttonClose.Location = new System.Drawing.Point(195, 213);
            this.buttonClose.Name = "buttonClose";
            this.buttonClose.Size = new System.Drawing.Size(78, 29);
            this.buttonClose.TabIndex = 2;
            this.buttonClose.Text = "&Close";
            this.buttonClose.UseVisualStyleBackColor = true;
            this.buttonClose.Click += new System.EventHandler(this.OnClose);
            // 
            // DebuggerForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(366, 249);
            this.Controls.Add(this.buttonClose);
            this.Controls.Add(this.buttCalculate);
            this.Controls.Add(this.groupPlane);
            this.Name = "DebuggerForm";
            this.Text = "3DBugger C# Sample";
            this.Load += new System.EventHandler(this.OnFormLoad);
            this.groupPlane.ResumeLayout(false);
            this.groupNormal.ResumeLayout(false);
            this.groupNormal.PerformLayout();
            this.groupLocation.ResumeLayout(false);
            this.groupLocation.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupPlane;
        private System.Windows.Forms.GroupBox groupLocation;
        private System.Windows.Forms.TextBox editZ;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox editY;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox editX;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.GroupBox groupNormal;
        private System.Windows.Forms.TextBox editNormalZ;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.TextBox editNormalY;
        private System.Windows.Forms.Label label5;
        private System.Windows.Forms.TextBox editNormalX;
        private System.Windows.Forms.Label label6;
        private System.Windows.Forms.Button buttCalculate;
        private System.Windows.Forms.Button buttonClose;
    }
}

