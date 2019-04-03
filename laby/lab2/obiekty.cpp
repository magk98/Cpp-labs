#include <iostream>
#include "obiekty.h"
#include <math.h>
using namespace std;


Punkt::Punkt(float x, float y, float z)
        :x{x}, y{y}, z{z}{}
Punkt::Punkt()
        :x{0}, y{0}, z{0}{}

Punkt Punkt::operator++(){
    this->x++;
    this->y++;
    this->z++;
    return *this;
}
Punkt Punkt::operator++(int){
    Punkt p=*this;
    this->x++;
    this->y++;
    this->z++;
    return p;
}

ostream& operator<<(ostream &os, const Punkt &p1){
    string s="(" + to_string(p1.x) + ", " + to_string(p1.y) + ", " + to_string(p1.z) + ")\n";
    os<<s;
    return os;
}

Punkt Punkt::operator+(const Vector &v1) const{
    return Punkt{x+v1.x, y+v1.y, z+v1.z};
}

Vector::Vector(float x, float y, float z)
    :x{x},y{y}, z{z}
    {}
Vector::Vector()
    :x{0},y{0}, z{0}
    {}


Vector Vector::operator+(const Vector &v1) const{
    return {this->x+v1.x, this->y+v1.y, this->z+v1.z};
}

void Vector::operator+=(const Vector &v1){
    this->x+=v1.x;
    this->y+=v1.y;
    this->z+=v1.z;
}

Vector Vector::operator-(){
    return {-x, -y, -z};
}

float Vector::operator[] (int i){;
    if(i==0) return x;
    if(i==1) return y;
    if(i==2) return z;
    else throw std::exception();
}

Vector::operator float() const{
    return sqrt(x*x + y*y + z*z);
}

bool Vector::operator > (const Vector &v1){
    return (x*x + y*y + z*z) > ((v1.x)*(v1.x) + (v1.y)*(v1.y) + (v1.z)*(v1.z));
}

Vector operator *(float f, const Vector &v1){
    return {f*v1.x, f*v1.y, f*v1.z};
}
Vector operator *(const Vector &v1, float f){
    return {f*v1.x, f*v1.y, f*v1.z};
}
ostream &operator <<(ostream &os, const Vector &v1){
    string s="[" + to_string(v1.x) + ", " + to_string(v1.y) + ", " + to_string(v1.z) + "]\n";
    os<<s;
    return os;
}
