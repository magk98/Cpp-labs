#include <iostream>
using namespace std;

class Punkt{
private:
    double x, y;

public:
    Punkt():x{0.0},y{0.0}{}

    Punkt(double x, double y){
        this->x = x;
        this->y = y;
    }

    Punkt operator-();

    double operator[](size_t el);

    friend ostream& operator<<(ostream&os, const Punkt &p1);
    //friend Punkt operator*(Punkt p1);


    void show_elements(){
        cout<<"x: "<<x<<"\ny: "<<y<<endl;
    }
};

Punkt Punkt::operator-() {
    Punkt result;
    result.x = -x;
    result.y = -y;
    return result;
}

double Punkt::operator[](size_t el) {
    if(el == 0) return x;
    return y;
}

ostream& operator<<(ostream &os, const Punkt &p1){
    string s="[" + to_string(p1.x) + ", " + to_string(p1.y) +"]\n";
    os<<s;
    return os;
}

class Macierz{
private:
    double mxx, myy, mxy;

public:
    Macierz():mxx{0.0},myy{0.0},mxy{0.0}{}

    Macierz(double mxx, double myy, double mxy){
        this->mxx = mxx;
        this->myy = myy;
        this->mxy = mxy;
    }

    friend ostream& operator<<(ostream&os, const Macierz &m1);
    Macierz operator+(const Macierz m1);
    Macierz operator-(const Macierz m1);
    Macierz operator-=(const Macierz m1);
    Macierz operator*(double d);
    bool operator>(const Macierz m1);
    bool operator==(const Macierz m1);
    bool operator<(const Macierz m1);
    //friend Punkt operator*(Punkt p1);
    void operator--(int);
    void operator--();
    double Macierz::operator double();


        void show_elements(){
        cout<<"mxx: "<<mxx<<"\nmyy: "<<myy<<"\nmxy: "<<mxy<<endl;
    }

};

Macierz Macierz::operator+(const Macierz m1){
    Macierz result;
    result.mxx = m1.mxx + mxx;
    result.myy = m1.myy + myy;
    result.mxy = m1.mxy + mxy;
    return result;
}

Macierz Macierz::operator-(const Macierz m1){
    Macierz result;
    result.mxx = m1.mxx - mxx;
    result.myy = m1.myy - myy;
    result.mxy = m1.mxy - mxy;
    return result;
}

Macierz Macierz::operator-=(const Macierz m1){
    Macierz result;
    result.mxx = mxx - m1.mxx;
    result.myy = myy - m1.myy;
    result.mxy = mxy - m1.mxy;
    return result;
}

Macierz Macierz::operator*(double d) {
    Macierz result;
    result.mxx = mxx * d;
    result.myy = myy * d;
    result.mxy = mxy * d;
    return result;
}

/*Punkt operator*(Punkt p1) {
    Punkt result;
    result.x = mxx * p1.x + mxy * p1.y;
    result.y = mxy * p1.x + myy * p1.y;
    return result;
}*/

void Macierz::operator--(int){
    mxx--;
    myy--;
    mxy--;
}

void Macierz::operator--(){
    mxx--;
    myy--;
    mxy--;
}

ostream& operator<<(ostream &os, const Macierz &m1){
    string s="[" + to_string(m1.mxx) + ", " + to_string(m1.mxy) +", \n" + to_string(m1.mxy) + ", " + to_string(m1.myy) +"]\n";
    os<<s;
    return os;
}

bool Macierz::operator>(const Macierz m1) {
    return ((mxx * myy) - (mxy * mxy)) > ((m1.mxx * m1.myy) - (m1.mxy * m1.mxy));
}

bool Macierz::operator==(const Macierz m1) {
    return ((mxx * myy) - (mxy * mxy)) == ((m1.mxx * m1.myy) - (m1.mxy * m1.mxy));
}

bool Macierz::operator<(const Macierz m1) {
    return ((mxx * myy) - (mxy * mxy)) < ((m1.mxx * m1.myy) - (m1.mxy * m1.mxy));
}

double Macierz::operator double(){
    return mxx * myy - mxy * mxy;
}

int main(){
    Macierz m1(1,2,3);
    Macierz m2(1,2,3);
    Macierz m3 = m1 + m2;
    Macierz m4 = m1 - m2;
    m1 -= m2;
    Macierz m5 = m1 * 5.0;
    Punkt p1(1,2);
    p1 = -p1;
    cout<<m1;
    cout<<"Punkt p1: "<<endl;
    p1.show_elements();
    cout<<"Macierz m3:"<<endl;
    m3.show_elements();
    --m4;
    cout<<"Macierz m4:"<<endl;
    m4.show_elements();
    m4--;
    cout<<"Macierz m4:"<<endl;
    m4.show_elements();
    cout<<"Macierz m5:"<<endl;
    m5.show_elements();
    if(m5>m4) cout<<"wyznacznik m5 wiekszy od m4."<<endl;
    else
        if(m5==m4)cout<<"Wyznacznik m5 równy m4."<<endl;
        else cout<<"Wyznacznik m5 jest mniejszy od m4."<<endl;

    return 0;
}