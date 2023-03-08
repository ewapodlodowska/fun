#include "Jedzenie.h"
#include<iostream>
Jedzenie::Jedzenie(string linia)
{
    int pierwszyPrzecinek = linia.find(',', 0);
    if(pierwszyPrzecinek == -1)
    {
        cout<<linia<<endl;
    }
    nazwa = linia.substr(0, pierwszyPrzecinek);

    int obecnaPozycja = pierwszyPrzecinek + 2;
    int przecinek = obecnaPozycja;

    string restauracja;

    while (obecnaPozycja < linia.size() && (przecinek = linia.find(',', obecnaPozycja)) != -1)
    {
        restauracja = linia.substr(obecnaPozycja, przecinek - obecnaPozycja);
        restauracje.push_back(restauracja);

        obecnaPozycja = przecinek + 2;
    }
    restauracja = linia.substr(obecnaPozycja);
    restauracje.push_back(restauracja);
}


const string& Jedzenie::getNazwa() const
{
    return nazwa;
}

const vector<string>& Jedzenie::getRestauracje() const
{
    return restauracje;
}
