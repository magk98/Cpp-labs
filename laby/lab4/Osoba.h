#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
#include "Data.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

namespace lab4
{
    class Osoba
    {
    protected:
        string imie, nazwisko;
        Data rok_ur;
    public:
        Osoba(string _imie, string _nazwisko, Data _rok_ur): imie(_imie), nazwisko(_nazwisko), rok_ur(_rok_ur){};
        virtual ~Osoba(){};
        virtual string opis() const;
        virtual double wyplata() const{return 0;};
        bool zapisz(ostream&) const;
        virtual bool wczytaj (istream&);
    };
}


#endif // OSOBA_H
