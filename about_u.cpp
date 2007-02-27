//---------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "about_u.h"
#include "txtreader_u.h"
//---------------------------------------------------------------------
#pragma resource "*.dfm"
TAboutBox *AboutBox;
//---------------------------------------------------------------------
__fastcall TAboutBox::TAboutBox(TComponent* AOwner)
	: TForm(AOwner)
{
}
//---------------------------------------------------------------------
void __fastcall TAboutBox::FormActivate(TObject *Sender)
{
Top=Form1->Top+(Form1->Height-Height)/2;
Left=Form1->Left+(Form1->Width-Width)/2;
}
//---------------------------------------------------------------------------


