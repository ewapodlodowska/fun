#include "Film.h"


Film::Film(string linia)
{
    int pierwszyPrzecinek = linia.find(',', 0);
    int drugiPrzecinek = linia.find(',', pierwszyPrzecinek + 1);

    int obecnaPozycja = 1;

    tytul = linia.substr(obecnaPozycja, pierwszyPrzecinek - 1 - obecnaPozycja);

    obecnaPozycja = pierwszyPrzecinek + 3;

    rok = stoi(linia.substr(obecnaPozycja, drugiPrzecinek - 2 - obecnaPozycja));

    obecnaPozycja = drugiPrzecinek + 2;

    wymaganyWiek = stoi(linia.substr(obecnaPozycja));
}

const string& Film::getTytul() const
{
    return tytul;
}

int Film::getRok() const
{
    return rok;
}

int Film::getWymaganyWiek() const
{
    return wymaganyWiek;
}
