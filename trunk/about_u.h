//----------------------------------------------------------------------------
#ifndef about_uH
#define about_uH
//----------------------------------------------------------------------------
#include <System.hpp>
#include <Windows.hpp>
#include <SysUtils.hpp>
#include <Classes.hpp>
#include <Graphics.hpp>
#include <Forms.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Buttons.hpp>
#include <ExtCtrls.hpp>
//----------------------------------------------------------------------------
class TAboutBox : public TForm
{
__published:
	TPanel *Panel1;
	TImage *ProgramIcon;
    TLabel *lbProductName;
    TLabel *lbVersion;
	TLabel *Copyright;
	TLabel *Comments;
	TButton *OKButton;
    TLabel *Label1;
        TLabel *Label2;
    void __fastcall FormActivate(TObject *Sender);
        
private:
public:
	virtual __fastcall TAboutBox(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TAboutBox *AboutBox;
//----------------------------------------------------------------------------
#endif
