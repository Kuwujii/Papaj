//---------------------------------------------------------------------------
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
  Close();      
}
//---------------------------------------------------------------------------
int chuj=0;
void __fastcall TForm1::FormCreate(TObject *Sender)
{
        srand(time(NULL));
        HRGN zoltamorda, uszko;
        zoltamorda = CreateEllipticRgn(
        23,
        0,
        201,
        245
        );
        uszko = CreateEllipticRgn(
        0,
        94,
        30,
        160
        );
        CombineRgn(zoltamorda, zoltamorda, uszko, RGN_OR);
        SetWindowRgn( Handle, zoltamorda, true);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        Top += chuj*(rand()%7-3);
        Left += chuj*(rand()%7-3);

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Image1Click(TObject *Sender)
{
        if(Form2 ->AlphaBlendValue<125) {
                Form2 ->AlphaBlendValue +=5;
        }
        Form2 ->  Show();       
}
//---------------------------------------------------------------------------

