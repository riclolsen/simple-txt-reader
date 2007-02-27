//---------------------------------------------------------------------------
//  TXT_READER_U.CPP - A SIMPLE BUT UNUSUAL TEXT FILE VIEWER
//  V. 1.0
//  C++ Builder unit
//
//  Copyright (C) 2003  Ricardo Lastra Olsen
//  GPL
//---------------------------------------------------------------------------

/*-----------------------------------------------------------------------------
		    GNU GENERAL PUBLIC LICENSE
		       Version 2, June 1991

 Copyright (C) 1989, 1991 Free Software Foundation, Inc.
                       59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.

			    Preamble

  The licenses for most software are designed to take away your
freedom to share and change it.  By contrast, the GNU General Public
License is intended to guarantee your freedom to share and change free
software--to make sure the software is free for all its users.  This
General Public License applies to most of the Free Software
Foundation's software and to any other program whose authors commit to
using it.  (Some other Free Software Foundation software is covered by
the GNU Library General Public License instead.)  You can apply it to
your programs, too.

  When we speak of free software, we are referring to freedom, not
price.  Our General Public Licenses are designed to make sure that you
have the freedom to distribute copies of free software (and charge for
this service if you wish), that you receive source code or can get it
if you want it, that you can change the software or use pieces of it
in new free programs; and that you know you can do these things.

  To protect your rights, we need to make restrictions that forbid
anyone to deny you these rights or to ask you to surrender the rights.
These restrictions translate to certain responsibilities for you if you
distribute copies of the software, or if you modify it.

  For example, if you distribute copies of such a program, whether
gratis or for a fee, you must give the recipients all the rights that
you have.  You must make sure that they, too, receive or can get the
source code.  And you must show them these terms so they know their
rights.

  We protect your rights with two steps: (1) copyright the software, and
(2) offer you this license which gives you legal permission to copy,
distribute and/or modify the software.

  Also, for each author's protection and ours, we want to make certain
that everyone understands that there is no warranty for this free
software.  If the software is modified by someone else and passed on, we
want its recipients to know that what they have is not the original, so
that any problems introduced by others will not reflect on the original
authors' reputations.

  Finally, any free program is threatened constantly by software
patents.  We wish to avoid the danger that redistributors of a free
program will individually obtain patent licenses, in effect making the
program proprietary.  To prevent this, we have made it clear that any
patent must be licensed for everyone's free use or not licensed at all.

  The precise terms and conditions for copying, distribution and
modification follow.

		    GNU GENERAL PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. This License applies to any program or other work which contains
a notice placed by the copyright holder saying it may be distributed
under the terms of this General Public License.  The "Program", below,
refers to any such program or work, and a "work based on the Program"
means either the Program or any derivative work under copyright law:
that is to say, a work containing the Program or a portion of it,
either verbatim or with modifications and/or translated into another
language.  (Hereinafter, translation is included without limitation in
the term "modification".)  Each licensee is addressed as "you".

Activities other than copying, distribution and modification are not
covered by this License; they are outside its scope.  The act of
running the Program is not restricted, and the output from the Program
is covered only if its contents constitute a work based on the
Program (independent of having been made by running the Program).
Whether that is true depends on what the Program does.

  1. You may copy and distribute verbatim copies of the Program's
source code as you receive it, in any medium, provided that you
conspicuously and appropriately publish on each copy an appropriate
copyright notice and disclaimer of warranty; keep intact all the
notices that refer to this License and to the absence of any warranty;
and give any other recipients of the Program a copy of this License
along with the Program.

You may charge a fee for the physical act of transferring a copy, and
you may at your option offer warranty protection in exchange for a fee.

  2. You may modify your copy or copies of the Program or any portion
of it, thus forming a work based on the Program, and copy and
distribute such modifications or work under the terms of Section 1
above, provided that you also meet all of these conditions:

    a) You must cause the modified files to carry prominent notices
    stating that you changed the files and the date of any change.

    b) You must cause any work that you distribute or publish, that in
    whole or in part contains or is derived from the Program or any
    part thereof, to be licensed as a whole at no charge to all third
    parties under the terms of this License.

    c) If the modified program normally reads commands interactively
    when run, you must cause it, when started running for such
    interactive use in the most ordinary way, to print or display an
    announcement including an appropriate copyright notice and a
    notice that there is no warranty (or else, saying that you provide
    a warranty) and that users may redistribute the program under
    these conditions, and telling the user how to view a copy of this
    License.  (Exception: if the Program itself is interactive but
    does not normally print such an announcement, your work based on
    the Program is not required to print an announcement.)

These requirements apply to the modified work as a whole.  If
identifiable sections of that work are not derived from the Program,
and can be reasonably considered independent and separate works in
themselves, then this License, and its terms, do not apply to those
sections when you distribute them as separate works.  But when you
distribute the same sections as part of a whole which is a work based
on the Program, the distribution of the whole must be on the terms of
this License, whose permissions for other licensees extend to the
entire whole, and thus to each and every part regardless of who wrote it.

Thus, it is not the intent of this section to claim rights or contest
your rights to work written entirely by you; rather, the intent is to
exercise the right to control the distribution of derivative or
collective works based on the Program.

In addition, mere aggregation of another work not based on the Program
with the Program (or with a work based on the Program) on a volume of
a storage or distribution medium does not bring the other work under
the scope of this License.

  3. You may copy and distribute the Program (or a work based on it,
under Section 2) in object code or executable form under the terms of
Sections 1 and 2 above provided that you also do one of the following:

    a) Accompany it with the complete corresponding machine-readable
    source code, which must be distributed under the terms of Sections
    1 and 2 above on a medium customarily used for software interchange; or,

    b) Accompany it with a written offer, valid for at least three
    years, to give any third party, for a charge no more than your
    cost of physically performing source distribution, a complete
    machine-readable copy of the corresponding source code, to be
    distributed under the terms of Sections 1 and 2 above on a medium
    customarily used for software interchange; or,

    c) Accompany it with the information you received as to the offer
    to distribute corresponding source code.  (This alternative is
    allowed only for noncommercial distribution and only if you
    received the program in object code or executable form with such
    an offer, in accord with Subsection b above.)

The source code for a work means the preferred form of the work for
making modifications to it.  For an executable work, complete source
code means all the source code for all modules it contains, plus any
associated interface definition files, plus the scripts used to
control compilation and installation of the executable.  However, as a
special exception, the source code distributed need not include
anything that is normally distributed (in either source or binary
form) with the major components (compiler, kernel, and so on) of the
operating system on which the executable runs, unless that component
itself accompanies the executable.

If distribution of executable or object code is made by offering
access to copy from a designated place, then offering equivalent
access to copy the source code from the same place counts as
distribution of the source code, even though third parties are not
compelled to copy the source along with the object code.

  4. You may not copy, modify, sublicense, or distribute the Program
except as expressly provided under this License.  Any attempt
otherwise to copy, modify, sublicense or distribute the Program is
void, and will automatically terminate your rights under this License.
However, parties who have received copies, or rights, from you under
this License will not have their licenses terminated so long as such
parties remain in full compliance.

  5. You are not required to accept this License, since you have not
signed it.  However, nothing else grants you permission to modify or
distribute the Program or its derivative works.  These actions are
prohibited by law if you do not accept this License.  Therefore, by
modifying or distributing the Program (or any work based on the
Program), you indicate your acceptance of this License to do so, and
all its terms and conditions for copying, distributing or modifying
the Program or works based on it.

  6. Each time you redistribute the Program (or any work based on the
Program), the recipient automatically receives a license from the
original licensor to copy, distribute or modify the Program subject to
these terms and conditions.  You may not impose any further
restrictions on the recipients' exercise of the rights granted herein.
You are not responsible for enforcing compliance by third parties to
this License.

  7. If, as a consequence of a court judgment or allegation of patent
infringement or for any other reason (not limited to patent issues),
conditions are imposed on you (whether by court order, agreement or
otherwise) that contradict the conditions of this License, they do not
excuse you from the conditions of this License.  If you cannot
distribute so as to satisfy simultaneously your obligations under this
License and any other pertinent obligations, then as a consequence you
may not distribute the Program at all.  For example, if a patent
license would not permit royalty-free redistribution of the Program by
all those who receive copies directly or indirectly through you, then
the only way you could satisfy both it and this License would be to
refrain entirely from distribution of the Program.

If any portion of this section is held invalid or unenforceable under
any particular circumstance, the balance of the section is intended to
apply and the section as a whole is intended to apply in other
circumstances.

It is not the purpose of this section to induce you to infringe any
patents or other property right claims or to contest validity of any
such claims; this section has the sole purpose of protecting the
integrity of the free software distribution system, which is
implemented by public license practices.  Many people have made
generous contributions to the wide range of software distributed
through that system in reliance on consistent application of that
system; it is up to the author/donor to decide if he or she is willing
to distribute software through any other system and a licensee cannot
impose that choice.

This section is intended to make thoroughly clear what is believed to
be a consequence of the rest of this License.

  8. If the distribution and/or use of the Program is restricted in
certain countries either by patents or by copyrighted interfaces, the
original copyright holder who places the Program under this License
may add an explicit geographical distribution limitation excluding
those countries, so that distribution is permitted only in or among
countries not thus excluded.  In such case, this License incorporates
the limitation as if written in the body of this License.

  9. The Free Software Foundation may publish revised and/or new versions
of the General Public License from time to time.  Such new versions will
be similar in spirit to the present version, but may differ in detail to
address new problems or concerns.

Each version is given a distinguishing version number.  If the Program
specifies a version number of this License which applies to it and "any
later version", you have the option of following the terms and conditions
either of that version or of any later version published by the Free
Software Foundation.  If the Program does not specify a version number of
this License, you may choose any version ever published by the Free Software
Foundation.

  10. If you wish to incorporate parts of the Program into other free
programs whose distribution conditions are different, write to the author
to ask for permission.  For software which is copyrighted by the Free
Software Foundation, write to the Free Software Foundation; we sometimes
make exceptions for this.  Our decision will be guided by the two goals
of preserving the free status of all derivatives of our free software and
of promoting the sharing and reuse of software generally.

			    NO WARRANTY

  11. BECAUSE THE PROGRAM IS LICENSED FREE OF CHARGE, THERE IS NO WARRANTY
FOR THE PROGRAM, TO THE EXTENT PERMITTED BY APPLICABLE LAW.  EXCEPT WHEN
OTHERWISE STATED IN WRITING THE COPYRIGHT HOLDERS AND/OR OTHER PARTIES
PROVIDE THE PROGRAM "AS IS" WITHOUT WARRANTY OF ANY KIND, EITHER EXPRESSED
OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE ENTIRE RISK AS
TO THE QUALITY AND PERFORMANCE OF THE PROGRAM IS WITH YOU.  SHOULD THE
PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF ALL NECESSARY SERVICING,
REPAIR OR CORRECTION.

  12. IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING
WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MAY MODIFY AND/OR
REDISTRIBUTE THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES,
INCLUDING ANY GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING
OUT OF THE USE OR INABILITY TO USE THE PROGRAM (INCLUDING BUT NOT LIMITED
TO LOSS OF DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY
YOU OR THIRD PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER
PROGRAMS), EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE
POSSIBILITY OF SUCH DAMAGES.

		     END OF TERMS AND CONDITIONS

	    How to Apply These Terms to Your New Programs

  If you develop a new program, and you want it to be of the greatest
possible use to the public, the best way to achieve this is to make it
free software which everyone can redistribute and change under these terms.

  To do so, attach the following notices to the program.  It is safest
to attach them to the start of each source file to most effectively
convey the exclusion of warranty; and each file should have at least
the "copyright" line and a pointer to where the full notice is found.

    <one line to give the program's name and a brief idea of what it does.>
    Copyright (C) 19yy  <name of author>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA


Also add information on how to contact you by electronic and paper mail.

If the program is interactive, make it output a short notice like this
when it starts in an interactive mode:

    Gnomovision version 69, Copyright (C) 19yy name of author
    Gnomovision comes with ABSOLUTELY NO WARRANTY; for details type `show w'.
    This is free software, and you are welcome to redistribute it
    under certain conditions; type `show c' for details.

The hypothetical commands `show w' and `show c' should show the appropriate
parts of the General Public License.  Of course, the commands you use may
be called something other than `show w' and `show c'; they could even be
mouse-clicks or menu items--whatever suits your program.

You should also get your employer (if you work as a programmer) or your
school, if any, to sign a "copyright disclaimer" for the program, if
necessary.  Here is a sample; alter the names:

  Yoyodyne, Inc., hereby disclaims all copyright interest in the program
  `Gnomovision' (which makes passes at compilers) written by James Hacker.

  <signature of Ty Coon>, 1 April 1989
  Ty Coon, President of Vice

This General Public License does not permit incorporating your program into
proprietary programs.  If your program is a subroutine library, you may
consider it more useful to permit linking proprietary applications with the
library.  If this is what you want to do, use the GNU Library General
Public License instead of this License.

-----------------------------------------------------------------------------
*/

#include <windows.h>
#include <vcl.h>
#include <registry.hpp>
#include <vector>
#include "stdlib.h"
#include "stdio.h"
#include "txtreader_u.h"
#include "about_u.h"
#pragma hdrstop
using namespace std;
//---------------------------------------------------------------------------

void ExecKey(WORD Key);
void LoadConfig(void);
void SaveConfig(void);
void OS_Process(void);
void LoadText(String File);
void FormatText(void);
void DrawTxt(void);
//---------------------------------------------------------------------------

#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
extern String StrCmdLine;
vector <int> LinesVector;
String FileName;

TStringList *pText;       // pointer to the text
TStringList *pTextFmt;    // pointer to the formated text
TStringList *pTextWOFmt;  // pointer to the unformated text

int IniLine=0;
int EndLine=0;
int IniPixel=0;
int MouseY;
bool IniDrag=false;
TRect RectForm;

// Registry Key for program configuration
String RegKey="Software\\Freeware\\TxtReader";

#define ROT_0     0
#define ROT_90  900
int RotationAngle=ROT_0;
int Offset=2;

Graphics::TBitmap *DraftBitmap;
//---------------------------------------------------------------------------

__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
Form1->Color=clBtnFace;
ColorDialog->Color=Form1->Color;
FontDialog->Font->Name="Arial";
Form1->Top=1; Form1->Left=1;
LoadConfig();

if(WindowState==wsNormal)
  {
  RectForm.Top=Form1->Top;
  RectForm.Left=Form1->Left;
  RectForm.Bottom=Form1->Top+Form1->Height;
  RectForm.Right=Form1->Left+Form1->Width;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
DraftBitmap = new Graphics::TBitmap;

pTextWOFmt=new (TStringList);
pTextFmt=new (TStringList);
pText=pTextWOFmt;

// process command line arguments (file name)
if (StrCmdLine!="")
  {
  OpenDialog->FileName=StrCmdLine;
  LoadText(StrCmdLine);
  }
else
  {
  if (OpenDialog->FileName=="")
    OpenDialog->FileName="readme.txt";
  LoadText(OpenDialog->FileName);;
  }

// don't do Smart Fill by default
SmartFill->Checked=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormPaint(TObject *Sender)
{
DrawTxt(); // Repaint Form using DrawFmt or DrawWOFmt
}

//---------------------------------------------------------------------------
void __fastcall TForm1::FormMouseDown(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
   if (Button==mbRight)
     { // Right Button: menu popup
     TPoint pt;
     pt.x=X; pt.y=Y;
     pt=Form1->ClientToScreen(pt);
     pmPopup->Popup(pt.x, pt.y);
     }

   if (Button==mbLeft)
     { // Left button: drag screen
     if (RotationAngle==ROT_90)
       Y=X;
     MouseY=Y;
     IniDrag=true;
     }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

if (Shift.Contains(ssAlt))
  return;

switch (Key)
   {
   case VK_F3: // Find
     FindDialog->Execute();
     break;
   case 'O':   // File Open
     if (OpenDialog->Execute())
       {
       LoadText(OpenDialog->FileName);
       if (SmartFill->Checked)
         FormatText();
       }
     break;
   case 'A':  // Arial Font
     FontDialog->Font->Name="Arial";
     if (SmartFill->Checked)
       FormatText();
     break;
   case 'U':  // Courier Font
     FontDialog->Font->Name="Courier New";
     if (SmartFill->Checked)
       FormatText();
     break;
   case 'T':  // Times Font
     FontDialog->Font->Name="Times New Roman";
     if (SmartFill->Checked)
       FormatText();
     break;
   case VK_F4: // Cycle Border Style
   case 'B':
     switch (Form1->BorderStyle)
       {
       case bsSizeable:
         Form1->BorderStyle=bsSizeToolWin;
         break;
       case bsSizeToolWin:
         Form1->BorderStyle=bsNone;
         break;
       case bsNone:
         Form1->BorderStyle=bsSizeable;
         break;
       }
     if (SmartFill->Checked)
       FormatText();
     break;
   case VK_HOME: // Go to the beginning of the text
     IniLine=0;
     IniPixel=0;
     break;
   case VK_END:  // Go to the end of the text
     IniLine=pText->Count-1;
     IniPixel=0;
     break;
   case VK_F10:  // auto scroll ON/OFF
     Timer1->Enabled=!Timer1->Enabled;
     AutoScroll1->Checked=Timer1->Enabled;
     break;
   case VK_F8:   // Faster auto scroll
   case VK_ADD:
   case 'W':
     if(Timer1->Interval>10)
     Timer1->Interval=Timer1->Interval/2;
     break;
   case VK_F7:   // Slower auto scroll
   case VK_SUBTRACT:
   case 'Q':
     Timer1->Interval=Timer1->Interval*2;
     break;
   case VK_SPACE: // 1 line forward
   case VK_DOWN:
     if (IniLine<pText->Count)
       IniLine++;
     break;
   case VK_UP:    // 1 line backwards
     if (IniLine>0)
       IniLine--;
     break;
   case VK_RETURN: // 1 page forward
   case VK_NEXT:
     if (Rotation1->Checked)
       IniLine+=Form1->ClientWidth/(abs(FontDialog->Font->Height)+2);
     else
       IniLine+=Form1->ClientHeight/(abs(FontDialog->Font->Height)+2);
     if (IniLine>=pText->Count)
       IniLine=pText->Count;
     break;
   case VK_PRIOR: // 1 page backwards
     if (Rotation1->Checked)
       IniLine-=Form1->ClientWidth/(abs(FontDialog->Font->Height)+2);
     else
       IniLine-=Form1->ClientHeight/(abs(FontDialog->Font->Height)+2);
     if (IniLine<0)
       IniLine=0;
     break;
   case VK_DELETE: // 1 pixel forward
     IniPixel++;
     if (IniPixel-1>abs(FontDialog->Font->Height))
       {
       if (IniLine<pText->Count)
         IniLine++;
       IniPixel=0;
       }
     break;
   case VK_INSERT: // 1 pixel backwards
     if ( IniPixel==0
          &&
          IniLine==0
         )
       break;
     IniPixel--;
     if (IniPixel<0)
       {
       if (IniLine>0)
         IniLine--;
       IniPixel=abs(FontDialog->Font->Height)+1;
       }
     break;
   case VK_F6:   // increase font size
   case VK_MULTIPLY:
   case 'X':
     if (FontDialog->Font->Size<56)
       FontDialog->Font->Size++;
     if (SmartFill->Checked)
       FormatText();
     break;
   case VK_F5:   // decrease font size
   case VK_DIVIDE:
   case 'Z':
     if (FontDialog->Font->Size>4)
       FontDialog->Font->Size--;
     if (SmartFill->Checked)
       FormatText();
     break;
   case 'F': // Font Dialog
     FontDialog->Execute();
     if (SmartFill->Checked)
       FormatText();
     break;
   case 'L': // Color Dialog
     ColorDialog->Execute();
     Form1->Color=ColorDialog->Color;
     break;
   case VK_RIGHT:  // Offset right, 1 pixel
     Offset++;
     break;
   case VK_LEFT:   // Offset left, 1 pixel
     Offset--;
     break;
   case 'R':       // Toggle rotation ON/OFF
     if (Rotation1->Checked)
       {
       RotationAngle=ROT_0;
       Rotation1->Checked=false;
       }
     else
       {
       RotationAngle=ROT_90;
       Rotation1->Checked=true;
       }
     if (SmartFill->Checked)
       FormatText();
     break;
   case '9':       // Rotation ON
     RotationAngle=ROT_90;
     Rotation1->Checked=true;
     if (SmartFill->Checked)
       FormatText();
     break;
   case '0':       // Rotation OFF
     Rotation1->Checked=false;
     RotationAngle=ROT_0;
     if (SmartFill->Checked)
       FormatText();
     break;
   case VK_F2:      // Smart Fill ON/OFF
   case 'S':
     SmartFill->Checked=!SmartFill->Checked;
     if (SmartFill->Checked)
       {
       FormatText();
       pText=pTextFmt;
       }
     else
       pText=pTextWOFmt;
     break;
   default:
     return;
   }

DrawTxt(); // repaint form
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
ExecKey(VK_DELETE);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Arial1Click(TObject *Sender)
{
ExecKey('A');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CourierNew1Click(TObject *Sender)
{
ExecKey('U');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::TimesNewRoman1Click(TObject *Sender)
{
ExecKey('T');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rotation1Click(TObject *Sender)
{
if (Rotation1->Checked)
  ExecKey('0');
else
  ExecKey('9');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FontSize1Click(TObject *Sender)
{
ExecKey(VK_MULTIPLY);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FontSize2Click(TObject *Sender)
{
ExecKey(VK_DIVIDE);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SelectFont1Click(TObject *Sender)
{
ExecKey('F');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AutoScroll1Click(TObject *Sender)
{
ExecKey(VK_F10);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AutoScrollSlower1Click(TObject *Sender)
{
ExecKey(VK_SUBTRACT);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::AutoScrollFaster1Click(TObject *Sender)
{
ExecKey(VK_ADD);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Color1Click(TObject *Sender)
{
ExecKey('L');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BorderStyle1Click(TObject *Sender)
{
ExecKey('B');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FileOpenClick(TObject *Sender)
{
ExecKey('O');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SmartFillClick(TObject *Sender)
{
ExecKey('S');
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FindClick(TObject *Sender)
{
ExecKey(VK_F3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormResize(TObject *Sender)
{
Timer2->Enabled=false;
Timer2->Enabled=true;
if (WindowState==wsNormal)
  { // record screen position
  RectForm.Top=Form1->Top;
  RectForm.Left=Form1->Left;
  RectForm.Bottom=Form1->Top+Form1->Height;
  RectForm.Right=Form1->Left+Form1->Width;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WMScrollWheel(TMessage &Message)
{
if (Message.WParam<0)
  ExecKey(VK_DOWN);
else
  ExecKey(VK_UP);
}
//---------------------------------------------------------------------------

// Process dropped files
void __fastcall TForm1::WMDropFiles(TMessage &Message)
{
char buf[500];
DragQueryFile((HDROP)Message.WParam, 0, buf, sizeof(buf));
DragFinish((HDROP)Message.WParam);
OpenDialog->FileName=buf;
LoadText(OpenDialog->FileName);
DrawTxt();
}
//---------------------------------------------------------------------------

// Find Strings
void __fastcall TForm1::FindDialogFind(TObject *Sender)
{
String S, Sub;

if ( FindDialog->Options.Contains(frDown) )
for (int i=IniLine+1; i<pText->Count; i++)
  {
  if ( FindDialog->Options.Contains(frMatchCase) )
    {
    S=pText->Strings[i];
    Sub=FindDialog->FindText;
    }
  else
    {
    S=pText->Strings[i].UpperCase();
    Sub=FindDialog->FindText.UpperCase();
    }

  if ( S.Pos(Sub) )
    { // found
    FindDialog->Tag=i;
    IniLine=i;
    DrawTxt();
    break;
    }
  }
else
for (int i=IniLine-1; i>=0; i--)
  {
  if ( FindDialog->Options.Contains(frMatchCase) )
    {
    S=pText->Strings[i];
    Sub=FindDialog->FindText;
    }
  else
    {
    S=pText->Strings[i].UpperCase();
    Sub=FindDialog->FindText.UpperCase();
    }

  if ( S.Pos(Sub) )
    { // found
    FindDialog->Tag=i;
    IniLine=i;
    DrawTxt();
    break;
    }
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FindDialogShow(TObject *Sender)
{
FindDialog->Tag=0;
}
//---------------------------------------------------------------------------

// Process mouse dragged screen
void __fastcall TForm1::FormMouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
if (RotationAngle==ROT_90)
  Y=X;

if (WindowState==wsNormal)
  {
  RectForm.Top=Form1->Top;
  RectForm.Left=Form1->Left;
  RectForm.Bottom=Form1->Top+Form1->Height;
  RectForm.Right=Form1->Left+Form1->Width;
  }

if (IniDrag)
  {
  IniLine+= (MouseY-Y)/FontDialog->Font->Size;
  if ( abs(MouseY-Y) > FontDialog->Font->Size )
    MouseY=Y;

  if (IniLine<0)
    IniLine=0;
  if (IniLine>pText->Count)
    IniLine=pText->Count;
  DrawTxt();
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormMouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
  if (Button==mbLeft)
    IniDrag=false; // stops dragging screen
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer2Timer(TObject *Sender)
{
Timer2->Enabled=false;
if (SmartFill->Checked)
  FormatText();
DrawTxt();
}
//---------------------------------------------------------------------------

// Read program configuration from the registry
void LoadConfig(void)
{
try
  {
  TRegistry *reg = new (TRegistry);

  if (reg->OpenKey(RegKey, false))
    {
	Form1->Top=reg->ReadInteger("Top");
	Form1->Left=reg->ReadInteger("Left");
	Form1->Height=reg->ReadInteger("Bottom")-Form1->Top;
	Form1->Width=reg->ReadInteger("Right")-Form1->Left;
    Form1->FontDialog->Font->Name=reg->ReadString("FontName");
    Form1->FontDialog->Font->Size=reg->ReadInteger("FontSize");
    Form1->FontDialog->Font->Color=(Graphics::TColor)reg->ReadInteger("FontColor");
    Form1->ColorDialog->Color=(Graphics::TColor)reg->ReadInteger("FormColor");
    RotationAngle=reg->ReadInteger("Rotation");
    if (RotationAngle==ROT_90)
      Form1->Rotation1->Checked=true;
    int state=reg->ReadInteger("WindowState");
    if (state==(int)wsMinimized)
       state=wsNormal;
    Form1->WindowState=(Forms::TWindowState)state;
    Form1->BorderStyle=(Forms::TFormBorderStyle)reg->ReadInteger("BorderStyle");
    Form1->OpenDialog->FileName=reg->ReadString("TextName");
	}
  }
catch (Exception &e)
  {
  }
}
//---------------------------------------------------------------------------

// Save program configuration in the registry
void SaveConfig(void)
{
try
  {
  TRegistry *reg = new (TRegistry);

  if (reg->OpenKey(RegKey, true))
	{
    if (Form1->WindowState==wsNormal)
      {
      RectForm.Top=Form1->Top;
      RectForm.Left=Form1->Left;
      RectForm.Bottom=Form1->Top+Form1->Height;
      RectForm.Right=Form1->Left+Form1->Width;
      }

    reg->WriteInteger("Top", RectForm.Top);
    reg->WriteInteger("Left", RectForm.Left);
    reg->WriteInteger("Bottom", RectForm.Bottom);
    reg->WriteInteger("Right", RectForm.Right);
    reg->WriteString("FontName", Form1->FontDialog->Font->Name);
    reg->WriteInteger("FontSize", Form1->FontDialog->Font->Size);
    reg->WriteInteger("FontColor", Form1->FontDialog->Font->Color);
    reg->WriteInteger("FormColor", Form1->ColorDialog->Color);
    reg->WriteInteger("Rotation", RotationAngle);
    reg->WriteInteger("BorderStyle", (int)Form1->BorderStyle);
    reg->WriteString("TextName", Form1->OpenDialog->FileName);
    reg->WriteInteger("WindowState", (int)Form1->WindowState);
    }
  }
catch (Exception &e)
  {
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
SaveConfig();
Action=caFree;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MaximizeClick(TObject *Sender)
{
WindowState=wsMaximized;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RestoreClick(TObject *Sender)
{
WindowState=wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MinimizeClick(TObject *Sender)
{
WindowState=wsMinimized;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ExitClick(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

// process pending messages, if any
void OS_Process(void)
{
MSG msg;

      while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
      {
         TranslateMessage(&msg);
         DispatchMessage(&msg);
      }
}
//---------------------------------------------------------------------------

void ExecKey(WORD Key)
{
TShiftState Shift;
Form1->FormKeyDown(NULL, Key, Shift);
}
//---------------------------------------------------------------------------

// Redraw form
void DrawTxt(void)
{
int x=0, y=0;
HFONT hfnt;

DraftBitmap->Width=Form1->ClientWidth;
DraftBitmap->Height=Form1->ClientHeight;
TRect r;
r.Left=0;
r.Top=0;
r.Right=Form1->ClientWidth;
r.Bottom=Form1->ClientHeight;
DraftBitmap->Canvas->Brush->Color=Form1->ColorDialog->Color;
DraftBitmap->Canvas->FillRect(r);

// Allocate memory for a LOGFONT structure.
PLOGFONT plf = (PLOGFONT) LocalAlloc(LPTR, sizeof(LOGFONT));

// Specify a font typeface name and weight.
lstrcpy(plf->lfFaceName,  Form1->FontDialog->Font->Name.c_str());
plf->lfWeight = FW_NORMAL;
//plf->lfPitchAndFamily = FIXED_PITCH;
DraftBitmap->Canvas->Font->Height = plf->lfHeight = Form1->FontDialog->Font->Height;

// plf->lfOrientation = plf->lfEscapement =900;
plf->lfOrientation = plf->lfEscapement = RotationAngle;
hfnt = CreateFontIndirect(plf);
DraftBitmap->Canvas->Font->Handle=hfnt;

SetTextColor(DraftBitmap->Canvas->Handle, Form1->FontDialog->Font->Color);
SetBkMode(DraftBitmap->Canvas->Handle, TRANSPARENT);

switch (RotationAngle)
  {
  case ROT_0:
    for ( int s=IniLine;
          y<Form1->ClientHeight+abs(plf->lfHeight)+2;
          y+=abs(plf->lfHeight)+2, EndLine=s++ )
      if (s<pText->Count)
        DraftBitmap->Canvas->TextOut(x+Offset, y-IniPixel, pText->Strings[s]);
    break;

  case ROT_90:
    for ( int s=IniLine, y=Form1->ClientHeight;
          x<Form1->ClientWidth+abs(plf->lfHeight)+2;
          x+=abs(plf->lfHeight)+2, EndLine=s++ )
      if (s<pText->Count)
        DraftBitmap->Canvas->TextOut(x-IniPixel, y-Offset, pText->Strings[s]);
    break;
  }

// Reset the background mode to its default.
LocalFree((LOCALHANDLE) plf);
Form1->Canvas->CopyMode=cmSrcCopy;
Form1->Canvas->CopyRect(r, DraftBitmap->Canvas, r);

String Title;
char buf[500];
sprintf(buf, "Txt Reader - Line %d of %d - %s",
        IniLine,
        pText->Count,
        FileName.c_str());
Title=buf;
if (Title!=Form1->Caption)
  Form1->Caption=Title;
}
//---------------------------------------------------------------------------

// read text file
void LoadText(String File)
{
FILE *fp;
char buf[1000];
String s;

File=FileName=AnsiDequotedStr(File, '\"');

pTextWOFmt->Clear();

fp=fopen(File.c_str(), "rt");
if (fp)
  {
  while (!feof(fp))
    {
    if (fgets(buf, sizeof(buf), fp) != NULL)
      {
      buf[strlen(buf)-1]=0;
      s=buf;
      s.TrimRight();

      int tabpos;
      for (;;)
        {
        tabpos=s.LastDelimiter("\t");
        if (tabpos<1)
          break;
        s.Delete(tabpos, 1);
        s.Insert("  ", tabpos);
        };

      pTextWOFmt->Add(s);
      }
    }

  fclose(fp);
  IniLine=0;
  }
else
  FileName="";  
}
//---------------------------------------------------------------------------

// do smart fill formatting
void FormatText(void)
{
static int leave;
int width;

leave=false;

pTextFmt->Clear();
LinesVector.clear();

DraftBitmap->Canvas->Font->Height = Form1->FontDialog->Font->Height;

switch (RotationAngle)
  {
  case ROT_0:
    {
    String str, rest;
    int SizeTxtWOFmt=pTextWOFmt->Count;

    for ( int s=0, cnt=0;
          s<SizeTxtWOFmt || rest!="";
          s++, cnt++ )
        {
        OS_Process();
        if (leave)
          {
          while (pTextWOFmt->Count>SizeTxtWOFmt)
          pTextWOFmt->Delete(pTextWOFmt->Count-1);
          return;
          }

        // add lines to avoid access error
        if (s>=SizeTxtWOFmt)
          pTextWOFmt->Add("");

        Form1->Caption=s;
        rest=rest.TrimRight();
        if (rest!="")
          str=rest+" "+pTextWOFmt->Strings[s];
        else
          str=pTextWOFmt->Strings[s];
        rest="";
        str=str.TrimRight();

        width=DraftBitmap->Canvas->TextWidth(str);

        // fills up to the screen width
        while ( width < Form1->ClientWidth - 4)
          {
          if (s+1>=SizeTxtWOFmt)
            break;

          if (str!="")
            {
            char ch=str[str.Length()];
            if ( ch=='.' ||
                 ch==':' ||
                 ch==':' ||
                 ch=='!' ||
                 ch=='-' ||
                 ch=='\'' ||
                 ch=='"' ||
                 pTextWOFmt->Strings[s+1].TrimRight()=="" )
              break;
            if ( pTextWOFmt->Strings[s+1].Length() >=1 )
              if ( pTextWOFmt->Strings[s+1][1]==' '  ||
                   !isalpha(pTextWOFmt->Strings[s+1][1]) )
                break;
            }
          else
            break;

          str=str+" "+pTextWOFmt->Strings[++s];
          str=str.TrimRight();

          width=DraftBitmap->Canvas->TextWidth(str);
          }

        // reduces the line until it fits the screen width
        if ( width > Form1->ClientWidth - 4 )
          {
          int spc=0;

          // if can't find spaces, removes a character
          int spcok=str.Length()-1;
          int tam=str.Length();
          bool any=false;
          for(;;)
            {
            spc++;
            if (!any)
            for (; spc <= tam; spc++)  // look for space to break up string
              {
              if (str[spc]==' ')
                break;
              }
            if (spc>tam)
              break;

            width=DraftBitmap->Canvas->TextWidth(str.SubString(1, spc));
            if ( width <= Form1->ClientWidth - 4 )
              spcok=spc; // ok, still fits
            else
              {
              if (spcok==str.Length()-1)
                { // couldn't find space to break up line,
                  // 'll break on any character
                any=true;
                spc=0;
                continue;
                }
              break; // oversized
              }
            }

          // stores the exceeds and remove it from the line
          if (!any)
             spcok++;
          rest=str.SubString(spcok, str.Length()-spcok+1)+rest;
          str=str.SubString(1, spcok-1);
          str=str.TrimRight();
          }

        pTextFmt->Add(str);
        }

    while (pTextWOFmt->Count > SizeTxtWOFmt)
      pTextWOFmt->Delete(pTextWOFmt->Count-1);

    // if the line is over the end of the formated text
    // correct the position
    if (IniLine > pTextFmt->Count)
      IniLine=pTextFmt->Count;
    }
    break;
  case ROT_90:
    {
    String str, rest;
    int SizeTxtWOFmt=pTextWOFmt->Count;

    for ( int s=IniLine, cnt=0;
          s<SizeTxtWOFmt || rest!="";
          s++, cnt++ )
        {
        OS_Process();
        if (leave)
          {
          while (pTextWOFmt->Count>SizeTxtWOFmt)
          pTextWOFmt->Delete(pTextWOFmt->Count-1);
          return;
          }

        // add lines to avoid access error
        if (s>=SizeTxtWOFmt)
          pTextWOFmt->Add("");

        Form1->Caption=s;
        rest=rest.TrimRight();
        if (rest!="")
          str=rest+" "+pTextWOFmt->Strings[s];
        else
          str=pTextWOFmt->Strings[s];
        rest="";
        str=str.TrimRight();

        width=DraftBitmap->Canvas->TextWidth(str);

        // fills up to the screen width
        while ( width < Form1->ClientHeight - 4)
          {
          if (s+1>=SizeTxtWOFmt)
            break;

          if (str!="")
            {
            char ch=str[str.Length()];
            if ( ch=='.' ||
                 ch==':' ||
                 ch==':' ||
                 ch=='!' ||
                 ch=='-' ||
                 ch=='\'' ||
                 ch=='"' ||
                 pTextWOFmt->Strings[s+1].TrimRight()=="" )
              break;
            if ( pTextWOFmt->Strings[s+1].Length() >=1 )
              if ( pTextWOFmt->Strings[s+1][1]==' ' ||
                   !isalpha(pTextWOFmt->Strings[s+1][1]) )
                break;
            }
          else
            break;

          str=str+" "+pTextWOFmt->Strings[++s];
          str=str.TrimRight();

          width=DraftBitmap->Canvas->TextWidth(str);
          }

        // reduces the line until it could be in screen width
        if ( width > Form1->ClientHeight - 4)
          {
          int spc=0;
          // if can't find spaces, removes a character
          int spcok=str.Length()-1;
          int tam=str.Length();
          bool any=false;
          for(;;)
            {
            spc++;
            if (!any)
            for (; spc <= tam; spc++)  // finds a space to breke the string
              {
              if (str[spc]==' ')
                break;
              }
            if (spc>tam)
              break;

            width=DraftBitmap->Canvas->TextWidth(str.SubString(1, spc));
            if ( width <= Form1->ClientHeight - 4)
              spcok=spc; // ok, still fits
            else
              {
              if (spcok==str.Length()-1)
                { // couldn't find space to break up line,
                  // 'll break on any character
                any=true;
                spc=0;
                continue;
                }
              break; // oversized
              }
            }

          // stores the exceeds and remove it from the line
          if (!any)
             spcok++;
          rest=str.SubString(spcok, str.Length()-spcok+1)+rest;
          str=str.SubString(1, spcok-1);
          str=str.TrimRight();
          }

        pTextFmt->Add(str);
        }
     while (pTextWOFmt->Count > SizeTxtWOFmt)
       pTextWOFmt->Delete(pTextWOFmt->Count-1);

     // if the line is over the end of the formated text
     // correct the position
     if (IniLine > pTextFmt->Count)
       IniLine=pTextFmt->Count;
    }
    break;
  }

leave=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::About1Click(TObject *Sender)
{
AboutBox->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormActivate(TObject *Sender)
{
DragAcceptFiles(Form1->Handle, true); // Aceept dropped files <<<
}
//---------------------------------------------------------------------------

