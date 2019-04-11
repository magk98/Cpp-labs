#ifndef DATA_H
#define DATA_H

#include <iostream>
using namespace std;

namespace lab4
{
    class Data
    {
    private:
        int rok;
        int miesiac;
        int dzien;
    public:
        Data(int,int,int);
        void setDzien(int _dzien){dzien=_dzien;}
        int getDzien() const {return dzien;}
        bool zapisz(ostream&) const;
        bool wczytaj(istream&);

        friend ostream& operator<<(ostream&,const Data&);
    };

}

#endif // DATA_H
