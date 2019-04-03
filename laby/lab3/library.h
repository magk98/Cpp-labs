#ifndef LAB3_LIBRARY_H
#define LAB3_LIBRARY_H

#include <iostream>
#include <string>

using namespace std;

class Osoba{
private:
    string imie;
    int rok_ur;

public:
    Osoba();
    friend class Grupa;
};

class Grupa{
private:
    Osoba *tab;
    int size;
    int elements;

public:
    Grupa(int number_ = 20);
    Grupa(const Grupa &copy);
    Grupa(Grupa &&other);
    ~Grupa();
    const Grupa &operator=(const Grupa&other);
    Grupa &operator=(Grupa && other);
    int get_elements_number()const;
    int insert_person(Osoba v);


    };

#endif