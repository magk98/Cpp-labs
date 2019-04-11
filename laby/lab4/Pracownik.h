#ifndef LAB4_PRACOWNIK_H
#define LAB4_PRACOWNIK_H

#include "Osoba.h"

namespace lab4
{
    class Pracownik: public Osoba
    {
    protected:
        double pensja;
    public:
        Pracownik(string, string, Data, double);
        virtual ~Pracownik(){};
        virtual string opis() const override;
        virtual bool wczytaj (istream&) override;
        virtual double wyplata() const override {return pensja;}
    };
}






#endif //LAB4_PRACOWNIK_H