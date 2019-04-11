#ifndef LAB4_STAZYSTA_H
#define LAB4_STAZYSTA_H

#include "Osoba.h"

namespace lab4
{
    class Stazysta: public Osoba
    {
    protected:
        double stypendium;
        Data koniec_stazu;
    public:
        Stazysta(string,string,Data,double,Data);
        void zmienKoniecStazu(const Data &_koniec_stazu) {this->koniec_stazu = _koniec_stazu;};
        virtual double wyplata() const override{return 0;};
        virtual ~Stazysta(){};
        virtual string opis() const override;
        virtual bool wczytaj (istream&) override;
    };
}




#endif //LAB4_STAZYSTA_H
