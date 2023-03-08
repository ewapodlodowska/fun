#include "GatunekMuzyki.h"

GatunekMuzyki toGatunekMuzyki(string text)
{
    if (text == "pop stary")
        return POP_STARE;
    if (text == "pop nowe")
        return POP_NOWE;
    if (text == "stare")
        return STARE;
    if (text == "stare polskie")
        return STARE_POLSKIE;
    if (text == "rap")
        return RAP;
    if (text == "rap polski")
        return RAP_POLSKI;
    if (text == "klasyka")
        return KLASYKA;
    if (text == "filmowa")
        return FILMOWA;
    if (text == "disco polo")
        return DISCO_POLO;
    if (text == "rock")
        return ROCK;
    if (text == "rock polski")
        return ROCK_POLSKI;
    if (text == "hip-hop")
        return HIP_HOP;
    if (text == "elektroniczna")
        return ELEKTRONICZNA;
    if (text == "klubowa")
        return KLUBOWA;
    if (text == "reggae")
        return REGGAE;
    if (text == "jazz")
        return JAZZ;

    return (GatunekMuzyki)-1;
}
