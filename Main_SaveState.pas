unit Main_SaveState;

interface

uses
  System.SysUtils, System.Types, System.UITypes, System.Classes, System.Variants,
  FMX.Types, FMX.Controls, FMX.Forms, FMX.Graphics, FMX.Dialogs, FMX.Edit,
  FMX.Controls.Presentation, FMX.StdCtrls, FMX.ScrollBox, FMX.Memo;

type
  TForm27 = class(TForm)
    Label1: TLabel;
    Edit1: TEdit;
    Edit2: TEdit;
    Edit3: TEdit;
    Memo1: TMemo;
    Button1: TButton;
    procedure FormCreate(Sender: TObject);
    procedure FormSaveState(Sender: TObject);
    procedure Button1Click(Sender: TObject);
  private
    { Private declarations }

  public
    { Public declarations }
  end;

var
  Form27: TForm27;

implementation

{$R *.fmx}

uses
  FMX.Platform,
  System.IOUtils;

procedure TForm27.FormCreate(Sender: TObject);
var
  R: TBinaryReader;
begin
  // Default is transient, change to make permanent
  //SaveState.StoragePath := TPath.GetHomePath;
  if SaveState.Stream.Size > 0 then
  begin
    Label1.Text := 'Read from SaveState';
    R := TBinaryReader.Create(SaveState.Stream);
    try
      Edit1.Text := R.ReadString;
      Memo1.Text := R.ReadString;
      Edit2.Text := R.ReadString;
      Edit3.Text := R.ReadString;
    finally
      R.Free;
    end;
  end
  else
    Label1.Text := 'No SaveState';
end;

procedure TForm27.FormSaveState(Sender: TObject);
var
  W: TBinaryWriter;
begin
  SaveState.Stream.Clear;
  W := TBinaryWriter.Create(SaveState.Stream);
  try
    W.Write(Edit1.Text);
    W.Write(Memo1.Text);
    W.Write(Edit2.Text);
    W.Write(Edit3.Text);
  finally
    W.Free;
  end;
end;

procedure TForm27.Button1Click(Sender: TObject);
var
  I: Integer;
begin
  Edit1.Text := 'Edit1 ' + Random(1000).ToString;
  Edit2.Text := 'Edit2 ' + Random(1000).ToString;
  Edit3.Text := 'Edit3 ' + Random(1000).ToString;
  Memo1.Text := 'Memo1 ' + Random(1000).ToString;
  for I := 0 to Random(30) do
   Memo1.Lines.Add('Line ' + Random(1000).ToString);
end;

initialization

  Randomize;

end.
