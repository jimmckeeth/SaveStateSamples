program SaveStateDemo;

uses
  System.StartUpCopy,
  FMX.Forms,
  Main_SaveState in 'Main_SaveState.pas' {Form27};

{$R *.res}

begin
  Application.Initialize;
  Application.CreateForm(TForm27, Form27);
  Application.Run;
end.
