#ifndef GRA_H
#define GRA_H

#include <string>

#include "TypGry.h"
#include "Akcesoria.h"

using namespace std;

class Gra
{
private:
    string nazwa;
    TypGry typ;
    int minLiczbaGraczy;
    int maxLiczbaGraczy;
    Akcesoria akcesoria;

public:
    Gra(string linia);
    Gra(string nazwa, TypGry typ, int minGraczy, int maxGraczy, Akcesoria akcesoria);

    const string& getNazwa() const;
    const TypGry& getTyp() const;
    int getMinLiczbaGraczy() const;
    int getMaxLiczbaGraczy() const;
    const Akcesoria& getAkcesoria() const;


    // zapisuje grę na koniec pliku
    // dane/reszta/gry.txt
    void zapisz();

};

#endif
