#include "Osoba.h"

#include <iostream>

namespace lab4
{
    string Osoba::opis() const
    {
        string result = "Imie: " + imie;
        result += "\nNazwisko: " + nazwisko;
        ostringstream ss;
        rok_ur.zapisz(ss);
        result += "\nRok urodzenia: "+ ss.str();
        return result;
    }

    bool Osoba::zapisz(ostream& os) const
    {
        os << opis();
        return os.good();
    }

    bool Osoba::wczytaj(istream& is)
    {
        is >> imie;
        is >> nazwisko;
        rok_ur.wczytaj(is);
        is.good();
    }
}
