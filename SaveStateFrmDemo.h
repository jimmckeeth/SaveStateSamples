//---------------------------------------------------------------------------

#ifndef SaveStateFrmDemoH
#define SaveStateFrmDemoH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Memo.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <System.IOUtils.hpp>
//---------------------------------------------------------------------------
class TForm17 : public TForm
{
__published:	// IDE-managed Components
	TMemo *Memo1;
	TEdit *Edit3;
	TEdit *Edit2;
	TEdit *Edit1;
	TLabel *Label1;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormSaveState(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm17(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm17 *Form17;
//---------------------------------------------------------------------------
#endif
