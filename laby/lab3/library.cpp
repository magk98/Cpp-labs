#include "library.h"
#include <iostream>
#include <string>

using namespace std;

//konstruktor domyslny
Osoba::Osoba()
        :imie{"Natalia"}, rok_ur{1998}{}



//konstuktor domyslny
Grupa::Grupa(int number_){
    Osoba *tab = nullptr;
    tab = new Osoba[number_];
    this->tab = tab;
    this->size = number_;
    this->elements = 0;
}

//destruktor
Grupa::~Grupa(){
    delete [] tab;
}

//konstruktor kopiujacy
Grupa::Grupa(const Grupa &copy)
        :tab(copy.tab), size(copy.size), elements(copy.elements){
   tab=new Osoba[size];
    for(int i=0; i<copy.elements; i++){
        tab[i]=copy.tab[i];
    }
}

//konstruktor przenoszacy
Grupa::Grupa(Grupa &&other)
        :tab(other.tab), size(other.size), elements(other.elements){
    other.tab=nullptr;
    other.size=0;
    other.elements=0;
}

//operator podstawienia
const Grupa &Grupa::operator=(const Grupa&other){
    if(this->tab!= nullptr)
        free(this->tab);
    this->size=other.size;
    this->elements=other.elements;
    this->tab=new Osoba[other.size];
    for(int i=0; i<other.elements; i++){
        this->tab[i]=other.tab[i];
    }
    return *this;
}

//przenoszacy operator podstawienia
Grupa & Grupa::operator=(Grupa && other){
    if(this->tab!= nullptr)
        free(this->tab);
    this->tab=other.tab;
    this->size=other.size;
    this->elements=other.elements;
    other.size=0;
    other.elements=0;
    other.tab= nullptr;
    return *this;
}

//metoda zwracajaca liczbe elementow w tablicy
int Grupa::get_elements_number()const{
    return elements;
}

//metoda dodajaca obiekt do tablicy (w pierwsze puste miejsce)
int Grupa::insert_person(Osoba o){
    if(get_elements_number()>=size)
        throw std::out_of_range("too many people.\n");
    else {
        tab[elements++]=o;
        return elements-1;
    }
}