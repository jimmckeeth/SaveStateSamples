unit SaveStateFRM;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes,
  System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.StdCtrls,
  FMX.Controls.Presentation, FMX.Edit, FMX.Layouts, FMX.Memo;

type
  TForm1 = class(TForm)
    Edit1: TEdit;
    Edit2: TEdit;
    GroupBox1: TGroupBox;
    RadioButton1: TRadioButton;
    RadioButton2: TRadioButton;
    RadioButton3: TRadioButton;
    RadioButton4: TRadioButton;
    Label1: TLabel;
    Label2: TLabel;
    procedure FormSaveState(Sender: TObject);
    procedure FormCreate(Sender: TObject);
  private
    { Private declarations }
  public
    { Public declarations }
  end;

var
  Form1: TForm1;

implementation

{$R *.fmx}

uses IOUtils, SaveStateHelper;

procedure TForm1.FormCreate(Sender: TObject);
var
  R: TBinaryReader;
begin
  SaveState.StoragePath := TPath.GetDocumentsPath;

  //SaveState.Name := 'Form';
  LoadFormState;

//  SaveState.Name := 'Extra';
//  if SaveState.Stream.Size > 0 then
//  begin
//    ShowMessage('Read from SaveState');
//    R := TBinaryReader.Create(SaveState.Stream);
//    try
//      ShowMessage(R.ReadString);
//    finally
//      R.Free;
//    end;
//  end;

end;

procedure TForm1.FormSaveState(Sender: TObject);
var
  W: TBinaryWriter;
begin
  //SaveState.Name := 'Form';
  SaveFormState;

//  SaveState.Name := 'Extra';
//  SaveState.Stream.Clear;
//  W := TBinaryWriter.Create(SaveState.Stream);
//  try
//    W.Write('Success');
//  finally
//    W.Free;
//  end;
end;

end.
