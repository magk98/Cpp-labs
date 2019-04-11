#include "Pracownik.h"

namespace lab4
{
    Pracownik::Pracownik(string _imie, string _nazwisko, Data _rok_ur, double _pensja)
    :Osoba(_imie, _nazwisko, _rok_ur), pensja{_pensja}{}

    string Pracownik::opis() const{
        ostringstream ss;
        return Osoba::opis() + "\nPensja: " + to_string(pensja);
    }

    bool Pracownik::wczytaj(istream& is){
        Osoba::wczytaj(is);
        is >> pensja;
        return is.good();
    }


}
