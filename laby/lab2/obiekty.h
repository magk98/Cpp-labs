#ifndef obiekty_h
#define obiekty_h

#include <iostream>
using namespace std;

class Vector;

class Punkt{
protected:
    float x, y, z;

public:
    Punkt();
    Punkt(float x, float y, float z);
    Punkt operator++();
    Punkt operator++(int);
    Punkt operator+(const Vector &v1) const;

    friend ostream &operator <<(ostream &os, const Punkt &p1);

};

ostream &operator <<(ostream &os, const Punkt &p1);

class Vector{
protected:
    float x, y, z;

public:
    Vector();
    Vector(float x, float y, float z);
    Vector operator+(const Vector &v1) const;
    void operator+=(const Vector &v1);
    Vector operator-();
    bool operator > (const Vector &v1);
    friend Vector operator *(float f, const Vector &v1);
    friend Vector operator *(const Vector &v1, float f);
    friend ostream &operator <<(ostream &os, const Vector &v1);
    float operator[] (int i);
    operator float() const;
    friend class Punkt;
};

ostream &operator <<(ostream &os, const Vector &v1);
Vector operator *(float f, const Vector &v1);
Vector operator *(const Vector &v1, float f);





#endif