//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
USEFORM("txtreader_u.cpp", Form1);
USEFORM("about_u.cpp", AboutBox);
//---------------------------------------------------------------------------
String StrCmdLine;

//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR lpCmdLine, int)
{
    try
    {
        StrCmdLine=lpCmdLine;
        Application->Initialize();
        Application->CreateForm(__classid(TForm1), &Form1);
                 Application->CreateForm(__classid(TAboutBox), &AboutBox);
                 Application->Run();
    }
    catch (Exception &exception)
    {
        Application->ShowException(&exception);
    }
    return 0;
}
//---------------------------------------------------------------------------
