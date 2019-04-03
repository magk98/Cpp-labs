#include "obiekty.h"
using namespace std;

int main(){
    Punkt p1(1.2,2.0,3.0);
    Punkt p2;
    Vector v1(1.0, 1.0, 1.0);
    Vector v2(1.2, 2.3, 3.4);
    cout<<v1+v2;
    cout<<-v1;
    p2++;
    cout<<p2;
    cout<<++p2;
    cout<<p1 + v1;
    if(v1 > v2) cout<<"v1 wiekszy\n";
    else cout<<"v1 nie jest wiekszy\n";
    cout<<v1[1]<<endl;
    cout<<(float)v1<<endl;
    cout<<(float)v2<<endl;
    return 0;
}