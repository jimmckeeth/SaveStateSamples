//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "SaveStateHelperCpp.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormCreate(TObject *Sender)
{
  LoadFormStateHelper(this);
}
//---------------------------------------------------------------------------
void __fastcall TForm7::FormSaveState(TObject *Sender)
{
  SaveFormStateHelper(this);
}
//---------------------------------------------------------------------------
