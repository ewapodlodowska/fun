/***************************************************************
 * Name:      FunMain.h
 * Purpose:   Defines Application Frame
 * Author:    Ewa Podlodowska & Sofiya Rylova ()
 * Created:   2022-01-08
 * Copyright: Ewa Podlodowska & Sofiya Rylova ()
 * License:
 **************************************************************/

#ifndef FUNMAIN_H
#define FUNMAIN_H

//(*Headers(FunDialog)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/choice.h>
#include <wx/dialog.h>
#include <wx/hyperlink.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
//*)
#include <wx/timer.h>
#include <vector>
#include <map>
#include "Film.h"
#include "Jedzenie.h"
#include "TypJedzenia.h"
#include "GatunekFilmu.h"
#include "Gra.h"
#include "odczytywanie.h"
#include "TypGry.h"

using namespace std;
class FunDialog: public wxDialog
{
    public:

        FunDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~FunDialog();

    private:

    vector<Film> filmy[ILOSC_GATUNKOW];
    vector<Jedzenie> jedzenie[ILOSC_TYPOW];
    vector<string> alkohole[ILOSC_TYPOW];

    vector<string> prawdy;
    vector<string> wyzwania;

    vector<string> gatunkiMuzyki;
    map<TypGry, vector<Gra>> gry;
    map<string, string> restauracje;

    private:
    void odczytajFilmy(const char* sciezkaPliku, GatunekFilmu gatunek);
    void odczytajJedzenie(const char* sciezkaPliku, TypJedzenia typ);
    void odczytajAlkohol(const char* sciezkaPliku, TypJedzenia typ);

    void odczytajMuzyke(const char* sciezkaPliku);
    void odczytajGry(const char* sciezkaPliku);
    void odczytajPrawdy(const char* sciezkaPliku);
    void odczytajWyzwania(const char* sciezkaPliku);
    void odczytajRestauracje(const char* sciezkaPliku);

    void opoznioneZamkniecie(wxTimerEvent& event);

    // zwraca liczbę z zakresu [0, zakres)
    int losuj(int zakres) const;

    // zwraca liczbę z podanego widget w zakresie [0, n)
    // jeśli napis nie jest liczbą zwraca 0
    int getInt(wxTextCtrl* widget) const;

        //(*Handlers(FunDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnwiekText(wxCommandEvent& event);
        void Onil_osText(wxCommandEvent& event);
        void OnstartClick(wxCommandEvent& event);
        void OnkuchniaSelect(wxCommandEvent& event);
        void Onlos_kuchniaClick(wxCommandEvent& event);
        void OnrestauracjaSelect(wxCommandEvent& event);
        void OnmuzykaSelect(wxCommandEvent& event);
        void Onlos_graClick(wxCommandEvent& event);
        void OngraSelect(wxCommandEvent& event);
        void OnakcesoriaSelect(wxCommandEvent& event);
        void OnnazwaText(wxCommandEvent& event);
        void OnrodzText(wxCommandEvent& event);
        void OnakcText(wxCommandEvent& event);
        void OnminText(wxCommandEvent& event);
        void OnmaksText(wxCommandEvent& event);
        void OndodajClick(wxCommandEvent& event);
        void OnfilmText(wxCommandEvent& event);
        void Onlos_filmClick(wxCommandEvent& event);
        void Onrodz_filmuSelect(wxCommandEvent& event);
        void OnChoice2Select(wxCommandEvent& event);
        void Onrodz_dodSelect(wxCommandEvent& event);
        void Onakc_dodSelect(wxCommandEvent& event);
        void OnprawdaClick(wxCommandEvent& event);
        void OnwyzwanieClick(wxCommandEvent& event);
        void OnwyjdzClick(wxCommandEvent& event);
        void Onilosc_osobChange(wxSpinEvent& event);
        //*)

        //(*Identifiers(FunDialog)
        static const long ID_BITMAPBUTTON1;
        static const long ID_STATICTEXT10;
        static const long ID_STATICTEXT1;
        static const long ID_STATICTEXT11;
        static const long ID_TEXTCTRL4;
        static const long ID_STATICTEXT12;
        static const long ID_SPINCTRL1;
        static const long ID_STATICLINE4;
        static const long ID_STATICTEXT18;
        static const long ID_CHOICE6;
        static const long ID_STATICTEXT19;
        static const long ID_STATICTEXT9;
        static const long ID_TEXTCTRL12;
        static const long ID_BUTTON5;
        static const long ID_STATICLINE8;
        static const long ID_STATICTEXT2;
        static const long ID_CHOICE1;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL1;
        static const long ID_STATICTEXT33;
        static const long ID_BUTTON1;
        static const long ID_STATICTEXT4;
        static const long ID_TEXTCTRL2;
        static const long ID_STATICTEXT6;
        static const long ID_STATICTEXT5;
        static const long ID_CHOICE2;
        static const long ID_STATICTEXT25;
        static const long ID_STATICTEXT26;
        static const long ID_HYPERLINKCTRL2;
        static const long ID_STATICLINE3;
        static const long ID_STATICTEXT7;
        static const long ID_CHOICE3;
        static const long ID_STATICTEXT8;
        static const long ID_HYPERLINKCTRL1;
        static const long ID_STATICLINE2;
        static const long ID_STATICTEXT13;
        static const long ID_CHOICE4;
        static const long ID_STATICTEXT14;
        static const long ID_CHOICE5;
        static const long ID_STATICTEXT15;
        static const long ID_TEXTCTRL6;
        static const long ID_BUTTON3;
        static const long ID_STATICLINE5;
        static const long ID_STATICTEXT16;
        static const long ID_TEXTCTRL7;
        static const long ID_STATICTEXT20;
        static const long ID_CHOICE7;
        static const long ID_STATICTEXT21;
        static const long ID_CHOICE8;
        static const long ID_STATICTEXT17;
        static const long ID_TEXTCTRL9;
        static const long ID_TEXTCTRL10;
        static const long ID_STATICTEXT24;
        static const long ID_BUTTON4;
        static const long ID_STATICLINE6;
        static const long ID_STATICTEXT22;
        static const long ID_BUTTON6;
        static const long ID_STATICTEXT23;
        static const long ID_BUTTON7;
        static const long ID_STATICLINE7;
        static const long ID_BUTTON8;
        //*)

        //(*Declarations(FunDialog)
        wxBitmapButton* ikonka;
        wxButton* dodaj;
        wxButton* los_film;
        wxButton* los_gra;
        wxButton* los_kuchnia;
        wxButton* prawda;
        wxButton* wyjdz;
        wxButton* wyzwanie;
        wxChoice* akc_dod;
        wxChoice* akcesoria;
        wxChoice* gra;
        wxChoice* kuchnia;
        wxChoice* muzyka;
        wxChoice* restauracja;
        wxChoice* rodz_dod;
        wxChoice* rodz_filmu;
        wxHyperlinkCtrl* HyperlinkCtrl1;
        wxHyperlinkCtrl* HyperlinkCtrl2;
        wxSpinCtrl* ilosc_osob;
        wxStaticLine* StaticLine2;
        wxStaticLine* StaticLine3;
        wxStaticLine* StaticLine4;
        wxStaticLine* StaticLine5;
        wxStaticLine* StaticLine6;
        wxStaticLine* StaticLine7;
        wxStaticLine* StaticLine8;
        wxStaticText* StaticText10;
        wxStaticText* StaticText11;
        wxStaticText* StaticText12;
        wxStaticText* StaticText13;
        wxStaticText* StaticText14;
        wxStaticText* StaticText15;
        wxStaticText* StaticText16;
        wxStaticText* StaticText17;
        wxStaticText* StaticText18;
        wxStaticText* StaticText19;
        wxStaticText* StaticText1;
        wxStaticText* StaticText20;
        wxStaticText* StaticText21;
        wxStaticText* StaticText22;
        wxStaticText* StaticText23;
        wxStaticText* StaticText24;
        wxStaticText* StaticText25;
        wxStaticText* StaticText26;
        wxStaticText* StaticText2;
        wxStaticText* StaticText33;
        wxStaticText* StaticText3;
        wxStaticText* StaticText4;
        wxStaticText* StaticText5;
        wxStaticText* StaticText6;
        wxStaticText* StaticText7;
        wxStaticText* StaticText8;
        wxStaticText* StaticText9;
        wxTextCtrl* TextCtrl1;
        wxTextCtrl* alkohol;
        wxTextCtrl* danie;
        wxTextCtrl* film;
        wxTextCtrl* maks;
        wxTextCtrl* min;
        wxTextCtrl* nazwa;
        wxTextCtrl* wiek;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // FUNMAIN_H
