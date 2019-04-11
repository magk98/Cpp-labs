#include "Osoba.h"
#include "Data.h"
#include "Stazysta.h"
#include "Pracownik.h"
#include "Kierownik.h"
using namespace lab4;

int main() {
    Data d1(10, 1, 1998), d2(22, 9, 2018), d3(11, 12, 2022);
    cout<<"Data: "<<endl;
    d1.zapisz(cout);
    cout<<endl;
    Osoba* tab[4];
    tab[0] = new Osoba("ala", "makota", d1);
    tab[1] = new Stazysta("Karol", "Nowak", d1, 500, d2);
    tab[2] = new Pracownik("Maciej", "Adamczyk", d3, 2000);
    tab[3] = new Kierownik("Jakub", "Kwiecien", d1, 3000, 1000);

    for(int i = 0; i < 4; i++){
        tab[i]->zapisz(cout);
        cout<<"\nWyplata: "<<tab[i]->wyplata()<<endl<<endl;
    }

    for (int i = 0; i < 4; i++){
        tab[i]->wczytaj(cin);
        cout<<endl;
    }

    for (int i = 0; i < 4; i++){
        delete tab[i];
    }

    return 0;
}