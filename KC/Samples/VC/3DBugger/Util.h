#pragma once

// Utility class. Maniulation of simple types

class Util
{
public:
	Util(void);
	~Util(void);

	static void SetCurrentName(CString& strName, IDraw* iDraw);
	static void CopyPointTo(DIPoint* pt, I3Dpt* iPt);
	static bool IsSame(DIPoint* pt0, DIPoint* pt1);
	static void CopyPoint(DIPoint* pt0, DIPoint* pt1);
	static void CopyPoint(DIPoint* pt, I3Dpt* iPt);
	static void CopyVector(DIVect* v, I3Dpt* iPt);
	static void CopyVectorTo(DIVect* v, I3Dpt* iPt);
	static void CopyVector(DIVect* v0, DIVect* v1);
};
