// InterfExtern.h
#pragma once
//#include <Rpc.h>

#ifndef HAVE_CONFIG_H		
// Include only when building DG
// OCC does not have declaration of GUID and it does not really need it (include #include <Rpc.h> if one day need it for OCC)
// {A19AB3C0-A28C-4C1B-94E2-42D0D088456C}
static const GUID IID_IExternView_KC = { 0xa19ab3c0, 0xa28c, 0x4c1b, { 0x94, 0xe2, 0x42, 0xd0, 0xd0, 0x88, 0x45, 0x6c } };
#endif

class IExternView_KC //: public IUnknown
{
public:
	virtual void Draw(void* p0, void* p1)=0;
	virtual void Notify(unsigned int message, void* pData)=0;
};
