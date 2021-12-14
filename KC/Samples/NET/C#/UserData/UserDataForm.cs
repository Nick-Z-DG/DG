using System;
using System.Drawing;
using System.Collections;
using System.ComponentModel;
using System.Windows.Forms;
using System.Data;

using DGKC;

namespace UserData
{
	/// <summary>
	/// Summary description for Form1.
	/// </summary>
	public class UserDataForm : System.Windows.Forms.Form
	{
		private IModel_DG		_iModel;
		private IEntity_DG	_iSection;
		private IArray		_iArrObjects;	// Flat array of all objects in the model
		private IUserData	_iUserData;		// To access the integer stored in the current object
		// In this application the integer will serve as a key to look up information relevant
		// to the object in Data Table of the model.
									
		private IData		_iTableData;			// For reading info from the data table

		private int			_selectedObject;
		private int			_dataSelectedObj;	// User data of the currently selected object 

		private System.Windows.Forms.CheckBox checkBoxWireFrame;
		private System.Windows.Forms.GroupBox groupSelectedObject;
		private System.Windows.Forms.Label label4;
		private System.Windows.Forms.TextBox textBoxUserData;
		private System.Windows.Forms.CheckBox checkBoxVisible;
		private System.Windows.Forms.Label label2;
		private System.Windows.Forms.ListBox listBoxObjects;
		private System.Windows.Forms.Label label1;
		private System.Windows.Forms.TextBox editWeight;
		private DGKC.DGKC m_dgkc;
		private System.Windows.Forms.Label label3;
		private System.Windows.Forms.TextBox editDescription;
		private System.Windows.Forms.Button buttonEnter;
		private System.Windows.Forms.MainMenu mainMenu1;
		private System.Windows.Forms.MenuItem menuFile;
		private System.Windows.Forms.MenuItem mnuFileOpen;
		private System.Windows.Forms.MenuItem mnuFileSave;
		private System.Windows.Forms.MenuItem mnuFileSaveAs;
        private System.Windows.Forms.MenuItem menuItem1;
        private IContainer components;

		public UserDataForm()
		{
			//
			// Required for Windows Form Designer support
			//
			InitializeComponent();

			//
			// TODO: Add any constructor code after InitializeComponent call
			//
		}

		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		protected override void Dispose( bool disposing )
		{
			if( disposing )
			{
				if (components != null) 
				{
					components.Dispose();
				}
			}
			base.Dispose( disposing );
		}

		#region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		private void InitializeComponent()
		{
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(UserDataForm));
            this.checkBoxWireFrame = new System.Windows.Forms.CheckBox();
            this.groupSelectedObject = new System.Windows.Forms.GroupBox();
            this.buttonEnter = new System.Windows.Forms.Button();
            this.editDescription = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.editWeight = new System.Windows.Forms.TextBox();
            this.label1 = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.textBoxUserData = new System.Windows.Forms.TextBox();
            this.checkBoxVisible = new System.Windows.Forms.CheckBox();
            this.label2 = new System.Windows.Forms.Label();
            this.listBoxObjects = new System.Windows.Forms.ListBox();
            this.m_dgkc = new DGKC.DGKC();
            this.mainMenu1 = new System.Windows.Forms.MainMenu(this.components);
            this.menuFile = new System.Windows.Forms.MenuItem();
            this.mnuFileOpen = new System.Windows.Forms.MenuItem();
            this.mnuFileSave = new System.Windows.Forms.MenuItem();
            this.mnuFileSaveAs = new System.Windows.Forms.MenuItem();
            this.menuItem1 = new System.Windows.Forms.MenuItem();
            this.groupSelectedObject.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_dgkc)).BeginInit();
            this.SuspendLayout();
            // 
            // checkBoxWireFrame
            // 
            this.checkBoxWireFrame.Location = new System.Drawing.Point(576, 16);
            this.checkBoxWireFrame.Name = "checkBoxWireFrame";
            this.checkBoxWireFrame.Size = new System.Drawing.Size(88, 16);
            this.checkBoxWireFrame.TabIndex = 4;
            this.checkBoxWireFrame.Text = "Wire Frame";
            this.checkBoxWireFrame.CheckedChanged += new System.EventHandler(this.OnCheckWireFrame);
            // 
            // groupSelectedObject
            // 
            this.groupSelectedObject.Controls.Add(this.buttonEnter);
            this.groupSelectedObject.Controls.Add(this.editDescription);
            this.groupSelectedObject.Controls.Add(this.label3);
            this.groupSelectedObject.Controls.Add(this.editWeight);
            this.groupSelectedObject.Controls.Add(this.label1);
            this.groupSelectedObject.Controls.Add(this.label4);
            this.groupSelectedObject.Controls.Add(this.textBoxUserData);
            this.groupSelectedObject.Controls.Add(this.checkBoxVisible);
            this.groupSelectedObject.Location = new System.Drawing.Point(568, 152);
            this.groupSelectedObject.Name = "groupSelectedObject";
            this.groupSelectedObject.Size = new System.Drawing.Size(144, 344);
            this.groupSelectedObject.TabIndex = 15;
            this.groupSelectedObject.TabStop = false;
            this.groupSelectedObject.Text = "Selected Object";
            // 
            // buttonEnter
            // 
            this.buttonEnter.Location = new System.Drawing.Point(32, 312);
            this.buttonEnter.Name = "buttonEnter";
            this.buttonEnter.Size = new System.Drawing.Size(72, 24);
            this.buttonEnter.TabIndex = 9;
            this.buttonEnter.Text = "Enter";
            this.buttonEnter.Click += new System.EventHandler(this.OnEnter);
            // 
            // editDescription
            // 
            this.editDescription.Location = new System.Drawing.Point(8, 144);
            this.editDescription.Multiline = true;
            this.editDescription.Name = "editDescription";
            this.editDescription.Size = new System.Drawing.Size(128, 72);
            this.editDescription.TabIndex = 8;
            this.editDescription.Text = "No description";
            // 
            // label3
            // 
            this.label3.Location = new System.Drawing.Point(16, 120);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(88, 16);
            this.label3.TabIndex = 7;
            this.label3.Text = "Description:";
            // 
            // editWeight
            // 
            this.editWeight.Location = new System.Drawing.Point(16, 256);
            this.editWeight.Name = "editWeight";
            this.editWeight.Size = new System.Drawing.Size(88, 20);
            this.editWeight.TabIndex = 6;
            this.editWeight.Text = "3.5";
            this.editWeight.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // label1
            // 
            this.label1.Location = new System.Drawing.Point(16, 232);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(64, 16);
            this.label1.TabIndex = 5;
            this.label1.Text = "Weight:";
            // 
            // label4
            // 
            this.label4.Location = new System.Drawing.Point(8, 56);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(112, 16);
            this.label4.TabIndex = 4;
            this.label4.Text = "User Data:";
            // 
            // textBoxUserData
            // 
            this.textBoxUserData.Location = new System.Drawing.Point(8, 72);
            this.textBoxUserData.Name = "textBoxUserData";
            this.textBoxUserData.ReadOnly = true;
            this.textBoxUserData.Size = new System.Drawing.Size(104, 20);
            this.textBoxUserData.TabIndex = 3;
            this.textBoxUserData.Text = "9876543";
            this.textBoxUserData.TextAlign = System.Windows.Forms.HorizontalAlignment.Right;
            // 
            // checkBoxVisible
            // 
            this.checkBoxVisible.Location = new System.Drawing.Point(8, 24);
            this.checkBoxVisible.Name = "checkBoxVisible";
            this.checkBoxVisible.Size = new System.Drawing.Size(72, 16);
            this.checkBoxVisible.TabIndex = 2;
            this.checkBoxVisible.Text = "Visible";
            // 
            // label2
            // 
            this.label2.Location = new System.Drawing.Point(584, 48);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(88, 16);
            this.label2.TabIndex = 14;
            this.label2.Text = "All Objects:";
            // 
            // listBoxObjects
            // 
            this.listBoxObjects.Location = new System.Drawing.Point(568, 64);
            this.listBoxObjects.Name = "listBoxObjects";
            this.listBoxObjects.Size = new System.Drawing.Size(128, 82);
            this.listBoxObjects.TabIndex = 13;
            this.listBoxObjects.SelectedIndexChanged += new System.EventHandler(this.OnSelectedObjChanged);
            // 
            // m_dgkc
            // 
            this.m_dgkc.Enabled = true;
            this.m_dgkc.Location = new System.Drawing.Point(8, 24);
            this.m_dgkc.Name = "m_dgkc";
            this.m_dgkc.OcxState = ((System.Windows.Forms.AxHost.State)(resources.GetObject("m_dgkc.OcxState")));
            this.m_dgkc.Size = new System.Drawing.Size(536, 528);
            this.m_dgkc.TabIndex = 16;
            // 
            // mainMenu1
            // 
            this.mainMenu1.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
            this.menuFile});
            // 
            // menuFile
            // 
            this.menuFile.Index = 0;
            this.menuFile.MenuItems.AddRange(new System.Windows.Forms.MenuItem[] {
            this.mnuFileOpen,
            this.mnuFileSave,
            this.mnuFileSaveAs,
            this.menuItem1});
            this.menuFile.Text = "&File";
            // 
            // mnuFileOpen
            // 
            this.mnuFileOpen.Index = 0;
            this.mnuFileOpen.Text = "&Open";
            this.mnuFileOpen.Click += new System.EventHandler(this.OnFIleOpen);
            // 
            // mnuFileSave
            // 
            this.mnuFileSave.Index = 1;
            this.mnuFileSave.Text = "&Save";
            this.mnuFileSave.Click += new System.EventHandler(this.OnFileSave);
            // 
            // mnuFileSaveAs
            // 
            this.mnuFileSaveAs.Index = 2;
            this.mnuFileSaveAs.Text = "Save &As";
            this.mnuFileSaveAs.Click += new System.EventHandler(this.OnFileSaveAs);
            // 
            // menuItem1
            // 
            this.menuItem1.Index = 3;
            this.menuItem1.Text = "E&xit";
            this.menuItem1.Click += new System.EventHandler(this.OnFileExit);
            // 
            // UserDataForm
            // 
            this.AutoScaleBaseSize = new System.Drawing.Size(5, 13);
            this.ClientSize = new System.Drawing.Size(720, 621);
            this.Controls.Add(this.m_dgkc);
            this.Controls.Add(this.groupSelectedObject);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.listBoxObjects);
            this.Controls.Add(this.checkBoxWireFrame);
            this.Menu = this.mainMenu1;
            this.Name = "UserDataForm";
            this.Text = "User Data Sample";
            this.Load += new System.EventHandler(this.OnFormLoad);
            this.groupSelectedObject.ResumeLayout(false);
            this.groupSelectedObject.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.m_dgkc)).EndInit();
            this.ResumeLayout(false);

		}
		#endregion

		/// <summary>
		/// The main entry point for the application.
		/// </summary>
		[STAThread]
		static void Main() 
		{
			Application.Run(new UserDataForm());
		}

		private void OnFormLoad(object sender, System.EventArgs e)
		{
			UpdateModelInfo();
		}

		private void UpdateModelInfo()
		{
			_iModel = m_dgkc.GetModel();

			// List all objects in the model ignoring parent/child relations
			IPropertyArray iPropArray = (IPropertyArray)_iModel;

			_iArrObjects = (IArray)iPropArray.GetProperty("FlatObjectArray");

			IDataSource iDataSource = (IDataSource)_iModel;

			IDataTable iTable;

			if( iDataSource.GetTable("", out iTable) )// The only table currently
			{

				_iTableData = (IData)iTable;
			}
			else
			{
				CreateTable(iDataSource);
			}

			UpdateObjectList();

			UpdateObjectInfo();
		}

		private void CreateTable(IDataSource iDataSource)
		{
			iDataSource.CreateTable("");

			IDataTable iTable;
			
			iDataSource.GetTable("", out iTable);// The only table currently

			int fields = iTable.GetFieldCount();

			iTable.InsertField(0,  EDataType.eDataTypeLong);

			iTable.InsertField(1,  EDataType.eDataTypeString);

			iTable.InsertField(2,  EDataType.eDataTypeDouble);

			_iTableData = (IData)iTable;

			CreateRecords(iTable);
		}

		private void CreateRecords(IDataTable iTable)
		{
			IRecordSet iRecSet = (IRecordSet)iTable;

			int count = _iArrObjects.GetCount();

			// Create empty records one per object
			for( int i=0; i<count; i++)
				iRecSet.InsertRecordAt(0);

			IDataMods iMods = (IDataMods)_iTableData;

			for( int i=0; i<count; i++)
			{
				// Set both user data in the object
				// and field 0 in the record to i to link to each other
				IEntity_DG iSect = (IEntity_DG)_iArrObjects.GetAt(i);

				IUserData iUserData = (IUserData)iSect;

				iUserData.SetData(i);

				iMods.SetLongAt(i, 0, i); //i-th record, 0-th field value set to i 
			}
		}

		private void UpdateObjectList()
		{
//			listBoxObjects.Items.Clear();

			ArrayList listData = new ArrayList();

			int nObjectCount = _iArrObjects.GetCount();

			for(int i=0; i<nObjectCount; i++)
			{
				IEntity_DG iSect = (IEntity_DG)_iArrObjects.GetAt(i);

				listData.Add( new ObjListItem( iSect ) );
			}
/*
			for(int i=0; i<nObjectCount; i++)
			{
				IEntity_DG iSect = (IEntity_DG)_iArrObjects.GetAt(i);

				String objectName = iSect.GetName();

				if( objectName.Length == 0 )
					objectName = "Unnamed object";

				listBoxObjects.Items.Add(objectName);
			}
*/
			if( listBoxObjects.Items.Count > 0 )
				listBoxObjects.SetSelected(0, true);

			listBoxObjects.DataSource = listData;
		}

		private void UpdateObjectInfo()
		{
			bool objectSelected = listBoxObjects.SelectedIndices.Count != 0;

			if( !objectSelected )
			{
				_selectedObject = -1;
				return;
			}

			_selectedObject = listBoxObjects.SelectedIndex;

			ObjListItem item = (ObjListItem)listBoxObjects.SelectedItem;

			_iSection = item.Section;

			checkBoxVisible.Checked = _iSection.GetVisibleFlag();

			_iUserData = (IUserData)_iSection;

			_dataSelectedObj = _iUserData.GetData();

			textBoxUserData.Text = _dataSelectedObj.ToString();

			DisplayDataBaseObjectInfo();
		}

		// Look up a record by its first fields
		// and display the record on the form
		//
		private void DisplayDataBaseObjectInfo()
		{
			int nRecord = FindCurObject();

			if( nRecord == -1 )
				return;	// Not found

			editDescription.Text = _iTableData.GetStringAt(nRecord, 1);

			double weight = _iTableData.GetDoubleAt(nRecord, 2);

			editWeight.Text = weight.ToString("F2");
		}

		// Find record in the data table for the currently selected object
		//
		private int FindCurObject()
		{
			int n = _iTableData.GetRecordCount();
			int curKey = -1;
			int nRecord = -1;

			for( int i=0; i<n; i++)
			{
				curKey = _iTableData.GetLongAt(i, 0);

				if( curKey == _dataSelectedObj )
				{
					nRecord = i;
					return i;
				}
			}

			return -1;
		}

		private void OnEnter(object sender, System.EventArgs e)
		{
			int nRecord = FindCurObject();

			if( nRecord == -1 )
				return;	// Not found

			IDataMods iMods = (IDataMods)_iTableData;

			iMods.SetStringAt(nRecord, 1, editDescription.Text);

			double weight = Double.Parse(editWeight.Text);

			iMods.SetDoubleAt(nRecord, 2, weight);
		}

		private void OnSelectedObjChanged(object sender, System.EventArgs e)
		{
			UpdateObjectInfo();		
		}

		private void OnFIleOpen(object sender, System.EventArgs e)
		{
			string strModelPath = m_dgkc.ModelPath;

			OpenFileDialog dlg = new OpenFileDialog();

			dlg.InitialDirectory = strModelPath;
			dlg.Filter = "Model Files (*.mdg)|*.mdg";
			dlg.FilterIndex = 2;
			dlg.RestoreDirectory = false;

			if(dlg.ShowDialog() != DialogResult.OK)
				return;

			strModelPath = dlg.FileName;

			m_dgkc.ModelPath = strModelPath;

			UpdateModelInfo();
		}

		private void OnFileSave(object sender, System.EventArgs e)
		{
			m_dgkc.Save();
		}

		private void OnFileSaveAs(object sender, System.EventArgs e)
		{
			string strModelPath = m_dgkc.ModelPath;
	
			SaveFileDialog dlg = new SaveFileDialog();
 
			dlg.InitialDirectory = strModelPath;
			dlg.Filter = "Model Files (*.mdg)|*.mdg";
			dlg.FilterIndex = 2 ;
			dlg.RestoreDirectory = false;
 
			if( dlg.ShowDialog() != DialogResult.OK)
				return;

			strModelPath = dlg.FileName;

			m_dgkc.SaveAs(strModelPath);
		}

		private void OnFileExit(object sender, System.EventArgs e)
		{
			Close();
		}

		private void OnCheckWireFrame(object sender, System.EventArgs e)
		{
			m_dgkc.RenderSolid = !checkBoxWireFrame.Checked;
		}
	}
}
