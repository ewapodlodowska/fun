#include "Akcesoria.h"

Akcesoria toAkcesoria(string napis)
{
    if (napis == "kartki długopisy")
        return KARTKI_DLUGOPISY;
    if (napis == "karty")
        return KARTY;
    if (napis == "inne")
        return INNE_AKCESORIUM;
    if (napis == "nic")
        return NIC;
    return (Akcesoria) -1;
}

string toString(Akcesoria akcesoria)
{
    if (akcesoria == KARTKI_DLUGOPISY)
        return "kartki długopisy";
    if (akcesoria == KARTY)
        return "karty";
    if (akcesoria == INNE_AKCESORIUM)
        return "inne";
    if (akcesoria == NIC)
        return "nic";
    return "";
}
