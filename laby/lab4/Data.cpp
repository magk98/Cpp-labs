#include "Data.h"
#include <iostream>

namespace lab4
{
    Data::Data(int dzien_, int miesiac_, int rok_):
            dzien(dzien_), miesiac(miesiac_), rok(rok_) {};

    bool Data::zapisz(ostream& os) const
    {
        os<< dzien << "." << miesiac << "." << rok;
        return os.good();
    }

    bool Data::wczytaj(istream& is)
    {
        is >> dzien >> miesiac >> rok;
        return is.good();
    }

    ostream& operator<<(ostream& os,const Data& data)
    {
        data.zapisz(os);
        return os;
    }

}

