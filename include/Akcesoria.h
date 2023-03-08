#ifndef AKCESORIA_H
#define AKCESORIA_H

#include <string>

using namespace std;

enum Akcesoria
{
    KARTKI_DLUGOPISY,
    KARTY,
    INNE_AKCESORIUM,
    NIC
};

Akcesoria toAkcesoria(string);
string toString(Akcesoria akcesoria);

#endif
