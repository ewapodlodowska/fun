#include "odczytywanie.h"

#include <fstream>
#include <sstream>
#include <iostream>

string odczytajPlik(const char* sciezkaPliku)
{
    fstream plik(sciezkaPliku);
    if (!plik.is_open())
    {
        cerr << "nie otworzono pliku " << sciezkaPliku << '\n';
    }

    string linia;
    stringstream ss;

    while (getline(plik, linia))
    {
        ss << linia << '\r';
    }

    string plikStr = ss.str();
    int ostatnieR = plikStr.rfind('\r');

    return plikStr.substr(0, ostatnieR);
}
