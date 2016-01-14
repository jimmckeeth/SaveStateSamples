// CodeGear C++Builder
// Copyright (c) 1995, 2015 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SaveStateHelper.pas' rev: 30.00 (Windows)

#ifndef SavestatehelperHPP
#define SavestatehelperHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FMX.Forms.hpp>

//-- user supplied -----------------------------------------------------------

namespace Savestatehelper
{
//-- forward type declarations -----------------------------------------------
typedef void *TSaveStateHelper;

//-- type declarations -------------------------------------------------------
//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall LoadFormStateHelper(Fmx::Forms::TCustomForm* Self);
extern DELPHI_PACKAGE void __fastcall SaveFormStateHelper(Fmx::Forms::TCustomForm* Self);
}	/* namespace Savestatehelper */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SAVESTATEHELPER)
using namespace Savestatehelper;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SavestatehelperHPP
