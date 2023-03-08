#ifndef JEDZENIE_H
#define JEDZENIE_H

#include <string>
#include <vector>

using namespace std;

class Jedzenie
{
private:
    string nazwa;
    vector<string> restauracje;

public:
    Jedzenie(string linia);

    const string& getNazwa() const;

    const vector<string>& getRestauracje() const;
};

#endif
