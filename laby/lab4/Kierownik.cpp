#include "Kierownik.h"

namespace lab4
{
    Kierownik::Kierownik(string _imie, string _nazwisko, Data _rok_ur, double _pensja, double _dodatek):
            Pracownik(_imie, _nazwisko, _rok_ur, _pensja), dodatek(_dodatek) {};

    string Kierownik::opis() const{
        return Pracownik::opis() + "\nDodatek: " + to_string(dodatek);
    }

    bool Kierownik::wczytaj(istream& is){
        Pracownik::wczytaj(is);
        is >> dodatek;
        return is.good();
    }

}
