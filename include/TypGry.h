#ifndef TYPGRY_H
#define TYPGRY_H

#include <string>

using namespace std;

enum TypGry
{
    KARCIANE,
    PLANSZOWE,
    INNY_TYP,
    ILOSC_TYPOW_GIER
};

TypGry toTypGry(string);
string toString(TypGry);

#endif
