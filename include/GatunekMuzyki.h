#ifndef GATUNEKMUZYKI_H
#define GATUNEKMUZYKI_H


#include <string>

using namespace std;

enum GatunekMuzyki {
    POP_STARE,
    POP_NOWE,
    STARE,
    STARE_POLSKIE,
    RAP,
    RAP_POLSKI,
    KLASYKA,
    FILMOWA,
    DISCO_POLO,
    ROCK,
    ROCK_POLSKI,
    HIP_HOP,
    ELEKTRONICZNA,
    KLUBOWA,
    REGGAE,
    JAZZ,
    ILOSC_GATUNKOW_MUZYKI
};

GatunekMuzyki toGatunekMuzyki(string);

#endif
