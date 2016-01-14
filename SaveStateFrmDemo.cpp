// ---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "SaveStateFrmDemo.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TForm17 *Form17;

// ---------------------------------------------------------------------------
__fastcall TForm17::TForm17(TComponent* Owner) : TForm(Owner) {
}

// ---------------------------------------------------------------------------
void __fastcall TForm17::FormCreate(TObject *Sender) {
	// Use StoragePath to change form transient location, blank is default
	// SaveState->StoragePath = System::Ioutils::TPath::GetDocumentsPath();
	//
	// Use Name to use different storage file, blank is default
	// SaveState->Name = "SaveStateAlternative.tmp";

	TBinaryReader *R;
	// Check stream size to see if there is an existing saved state
	//   for the current StoragePath and Name combination
	if (SaveState->Stream->Size > 0) {
		Label1->Text = "State restored";
		R = new TBinaryReader(SaveState->Stream, TEncoding::UTF8, false);
		try {
			// Order read must match order written
			Edit1->Text = R->ReadString();
			Edit2->Text = R->ReadString();
			Edit3->Text = R->ReadString();
			Memo1->Text = R->ReadString();
		}
		__finally {
			R->Free();
		}
	}
	else {
		// No state found
		Label1->Text = "Clean state";
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm17::FormSaveState(TObject *Sender) {
	TBinaryWriter *W;

	// Always clear the last state before writing
	SaveState->Stream->Clear();

	// Only write if there is data to write
	if ((Edit1->Text.Length() > 0) || (Edit2->Text.Length() > 0) ||
		(Edit3->Text.Length() > 0) || (Memo1->Text.Length() > 0)) {
		W = new TBinaryWriter(SaveState->Stream);
		try {
			// Order read must match order written
			W->Write(Edit1->Text);
			W->Write(Edit2->Text);
			W->Write(Edit3->Text);
			W->Write(Memo1->Text);
		}
		__finally {
			W->Free();
		}
	}
}
// ---------------------------------------------------------------------------

void __fastcall TForm17::Button1Click(TObject *Sender) {
	Edit1->Text = "";
	Edit2->Text = "";
	Edit3->Text = "";
	Memo1->Text = "";
}
// ---------------------------------------------------------------------------
