//---------------------------------------------------------------------------
#ifndef txtreader_uH
#define txtreader_uH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Dialogs.hpp>
#include <ExtCtrls.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TFontDialog *FontDialog;
    TColorDialog *ColorDialog;
    TTimer *Timer1;
    TPopupMenu *pmPopup;
    TMenuItem *FileOpen;
    TMenuItem *FontSize1;
    TMenuItem *FontSize2;
    TMenuItem *Arial1;
    TMenuItem *CourierNew1;
    TMenuItem *TimesNewRoman1;
    TMenuItem *SelectFont1;
    TMenuItem *BorderStyle1;
    TMenuItem *AutoScroll1;
    TMenuItem *AutoScrollFaster1;
    TMenuItem *AutoScrollSlower1;
    TMenuItem *Rotation1;
    TMenuItem *Color1;
    TOpenDialog *OpenDialog;
    TMenuItem *SmartFill;
    TFindDialog *FindDialog;
    TMenuItem *Find;
    TTimer *Timer2;
    TMenuItem *Maximize;
    TMenuItem *Restore;
    TMenuItem *Minimize;
    TMenuItem *Exit;
    TMenuItem *About1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall FormPaint(TObject *Sender);
    void __fastcall FormMouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall FormKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Timer1Timer(TObject *Sender);
    void __fastcall Arial1Click(TObject *Sender);
    void __fastcall CourierNew1Click(TObject *Sender);
    void __fastcall TimesNewRoman1Click(TObject *Sender);
    void __fastcall Rotation1Click(TObject *Sender);
    void __fastcall FontSize1Click(TObject *Sender);
    void __fastcall FontSize2Click(TObject *Sender);
    void __fastcall SelectFont1Click(TObject *Sender);
    void __fastcall AutoScroll1Click(TObject *Sender);
    void __fastcall AutoScrollSlower1Click(TObject *Sender);
    void __fastcall AutoScrollFaster1Click(TObject *Sender);
    void __fastcall Color1Click(TObject *Sender);
    void __fastcall BorderStyle1Click(TObject *Sender);
    void __fastcall FileOpenClick(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall SmartFillClick(TObject *Sender);

    
    void __fastcall FindClick(TObject *Sender);
    void __fastcall FindDialogFind(TObject *Sender);
    void __fastcall FindDialogShow(TObject *Sender);
    void __fastcall FormMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    
    
    
    void __fastcall FormMouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall Timer2Timer(TObject *Sender);
    void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
    void __fastcall MaximizeClick(TObject *Sender);
    void __fastcall RestoreClick(TObject *Sender);
    void __fastcall MinimizeClick(TObject *Sender);
    void __fastcall ExitClick(TObject *Sender);
    
    void __fastcall About1Click(TObject *Sender);
        void __fastcall FormActivate(TObject *Sender);
protected:
void __fastcall WMDropFiles(TMessage &Message);
void __fastcall WMScrollWheel(TMessage &Message);
BEGIN_MESSAGE_MAP
 MESSAGE_HANDLER(WM_DROPFILES, TMessage, WMDropFiles)
 MESSAGE_HANDLER(0x20A, TMessage, WMScrollWheel)
END_MESSAGE_MAP(TControl)

private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
