#ifndef LAB4_KIEROWNIK_H
#define LAB4_KIEROWNIK_H

#include "Pracownik.h"

namespace lab4
{
    class Kierownik: public Pracownik
    {
    protected:
        double dodatek;
    public:
        Kierownik(string, string, Data, double, double);
        string opis() const override;
        bool wczytaj (istream&) override;
        double wyplata() const override {return Pracownik::wyplata()+dodatek;}
    };
}

#endif //LAB4_KIEROWNIK_H