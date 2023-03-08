#ifndef FILM_H
#define FILM_H

#include <string>

using namespace std;

class Film
{
private:
    string tytul;
    int rok;
    int wymaganyWiek;

public:
    Film(string line);

    const string& getTytul() const;
    int getRok() const;
    int getWymaganyWiek() const;
};

#endif
