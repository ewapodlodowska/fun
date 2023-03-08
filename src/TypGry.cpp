#include "TypGry.h"

TypGry toTypGry(string napis)
{
    if (napis == "karciana")
        return KARCIANE;
    if (napis == "planszowe")
        return PLANSZOWE;
    if (napis == "inne")
        return INNY_TYP;
    return (TypGry) -1;
}

string toString(TypGry typ)
{
    if (typ == KARCIANE)
        return "karciana";
    if (typ == PLANSZOWE)
        return "planszowe";
    if (typ == INNY_TYP)
        return "inne";
    return "";
}
