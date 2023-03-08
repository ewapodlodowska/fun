#include "Gra.h"

#include <fstream>

Gra::Gra(string linia)
{
    int obecnaPozycja = 0;
    int pierwszyPrzecinek = linia.find(',', obecnaPozycja);
    int drugiPrzecinek    = linia.find(',', pierwszyPrzecinek + 1);
    int trzeciPrzecinek   = linia.find(',', drugiPrzecinek + 1);
    int czwartyPrzecinek  = linia.find(',', trzeciPrzecinek + 1);

    nazwa = linia.substr(obecnaPozycja, pierwszyPrzecinek);
    obecnaPozycja = pierwszyPrzecinek + 1;

    string typString = linia.substr(obecnaPozycja, drugiPrzecinek - obecnaPozycja);
    typ = toTypGry(typString);
    obecnaPozycja = drugiPrzecinek + 1;

    string minLiczbaGraczyStr = linia.substr(obecnaPozycja, trzeciPrzecinek - obecnaPozycja);
    minLiczbaGraczy = stoi(minLiczbaGraczyStr);
    obecnaPozycja = trzeciPrzecinek + 1;

    string maxLiczbaGraczyStr = linia.substr(obecnaPozycja, czwartyPrzecinek - obecnaPozycja);
    maxLiczbaGraczy = stoi(maxLiczbaGraczyStr);
    obecnaPozycja = czwartyPrzecinek + 1;

    string akcesoriumString = linia.substr(obecnaPozycja);
    akcesoria = toAkcesoria(akcesoriumString);
}

Gra::Gra(string nazwa, TypGry typ, int minGraczy, int maxGraczy, Akcesoria akcesoria)
{
    this->nazwa = nazwa;
    this->typ = typ;
    this->minLiczbaGraczy = minGraczy;
    this->maxLiczbaGraczy = maxGraczy;
    this->akcesoria = akcesoria;
}

const string& Gra::getNazwa() const
{
    return nazwa;
}

const TypGry& Gra::getTyp() const
{
    return typ;
}

int Gra::getMinLiczbaGraczy() const
{
    return minLiczbaGraczy;
}

int Gra::getMaxLiczbaGraczy() const
{
    return maxLiczbaGraczy;
}

const Akcesoria& Gra::getAkcesoria() const
{
    return akcesoria;
}

void Gra::zapisz()
{
    fstream plik("dane/reszta/gry.txt", ios_base::app);
    plik << nazwa << ',' << toString(typ)
        << ',' << minLiczbaGraczy
        << ',' << maxLiczbaGraczy << ',' << toString(akcesoria)
        << "\r\n";
}
