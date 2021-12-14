using System;
using DGKC;

namespace UserData
{
	/// <summary>
	/// One entry in the hits list box. Keeps IEntity_DG reference of the object
	/// </summary>
	public class ObjListItem
	{
		private string m_strObjectName;
		private IEntity_DG m_iSection;
    
		public  ObjListItem(IEntity_DG iSection)
		{
			m_iSection = iSection;

			this.m_strObjectName = m_iSection.GetName();

			if( this.m_strObjectName.Length == 0 )
				this.m_strObjectName = "Unnamed object";
		}

		public string ObjectName
		{
			get
			{
				return m_strObjectName;
			}
		}

		public IEntity_DG Section
		{
			get
			{
				return m_iSection;
			}
		}

		public override string ToString()
		{
			return this.m_strObjectName;
		}
	}
}
