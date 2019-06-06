#include <iostream>
#include <ctime>
#include <algorithm>
#include <string.h>
#include <vector>
#include <set>
#include <map>
#include <cstdlib>
using namespace std;

class Samochod
{
private:
    static const vector<string> marki;
    static const vector<double> pojemnosci;
    string marka;
    int rok_produkcji;
    double pojemnosc;
    int key;
public:
    Samochod();
    Samochod(int rok);
    string toStr() const;
    int getYear () const {return rok_produkcji;}
    string getMarka() const {return marka;}
    double getPojemnosc() const {return pojemnosc;}
    bool operator<(const Samochod& other) const {return key < other.key;}
    int getKey() const {return key;}
};

const vector<string> Samochod::marki{"Porsche", "BMW", "Volvo", "Skoda"};
const vector<double> Samochod::pojemnosci{80.0, 40.5, 17.9, 22.2};

Samochod::Samochod()
{
    rok_produkcji = rand()%15 + 2000;
    int i = rand()%marki.size();
    int j = rand()%pojemnosci.size();
    key = 17*i + 79*rok_produkcji;

    marka = marki[i];
    pojemnosc = pojemnosci[j];
}

Samochod::Samochod(int rok)
{
    rok_produkcji = rok;
    int i = rand()%marki.size();
    int j = rand()%pojemnosci.size();
    key = 17*i + 79*rok_produkcji;

    marka = marki[i];
    pojemnosc = pojemnosci[j];
}

string Samochod::toStr() const
{
    string s ="Marka: " + marka + ", Rok produkcji: " +
     to_string(rok_produkcji) + ", pojemnosc: " + to_string(pojemnosc);
    return s;
}

void print(vector<Samochod>& samochod)
{
    for (auto it = samochod.begin(); it != samochod.end(); ++it)
        cout << it->toStr() << endl;
}

/*---------------------
        main
---------------------*/


int main()
{
    srand(time(NULL));
    vector <Samochod> samochody(10);

    generate(samochody.begin(), samochody.end(), [year = 2001]() mutable {return Samochod(year++);});

    print(samochody);

    cout << endl << endl;

    /*---------------------
            find_if
    ---------------------*/

    auto it = find_if(samochody.begin(), samochody.end(), [](const Samochod& sam){return sam.getYear()==2005;});
    if (it!=samochody.end())
        cout << it->toStr() << endl;

    /*---------------------
            count_if
    ---------------------*/


    cout << endl << "Wpisz marke" << endl;
    string marka;
    cin >> marka;
    cout << count_if(samochody.begin(), samochody.end(), [marka](const Samochod& sam){return sam.getMarka()==marka;}) << endl;

    /*---------------------
            sort
    ---------------------*/

    cout << "sorted: (" << endl;
    sort(samochody.begin(), samochody.end(), [](const Samochod& a, const Samochod& b){
            if (a.getYear()==b.getYear())
                return a.getPojemnosc() < b.getPojemnosc();
            else
                return a.getYear() < b.getYear();
         });

    print(samochody);

    /*---------------------
            unique
    ---------------------*/

    cout << endl << endl << "unique: " << endl;
    sort(samochody.begin(), samochody.end(), [](const Samochod& a, const Samochod& b){return a.getMarka() < b.getMarka();});
    auto it2 = unique(samochody.begin(), samochody.end(), [](const Samochod& a, const Samochod& b){return a.getMarka()==b.getMarka();});
    samochody.resize(distance(samochody.begin(), it2));
    print(samochody);

    /*---------------------
            set
    ---------------------*/

    cout << endl << "set: " << endl;
    samochody.push_back(samochody[0]);

    set<Samochod> S;
    for (Samochod sam: samochody)
        if (!S.insert(sam).second)
            cout << "duplicate: " << endl << sam.toStr();

    /*---------------------
            map
    ---------------------*/

    cout << endl  << endl << "map: "<< endl;
    map<int, Samochod> Sam_map;
    for (Samochod sam: samochody)
        Sam_map.insert(make_pair(sam.getKey(),sam));
    for (auto it3: Sam_map)
        cout << "key: " << it3.first << ", value: " << endl << it3.second.toStr() << endl;

    return 0;
}
