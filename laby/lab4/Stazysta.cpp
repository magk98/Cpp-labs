#include "Stazysta.h"

namespace lab4
{
    Stazysta::Stazysta(string _imie, string _nazwisko, Data _rok_ur, double _stypendium, Data _koniec_stazu)
    : Osoba(_imie, _nazwisko, _rok_ur), stypendium{_stypendium}, koniec_stazu{_koniec_stazu}{};


    string Stazysta::opis() const{
        ostringstream ss;
        koniec_stazu.zapisz(ss);
        return Osoba::opis() + "\nStypendium: " + to_string(stypendium) + "\nKoniec stazu: " + ss.str();
    }

    bool Stazysta::wczytaj(istream& is){
        Osoba::wczytaj(is);
        is >> stypendium;
        return koniec_stazu.wczytaj(is);
    }


}
