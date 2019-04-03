#include<iostream>
using namespace std;

class Wektor{
	private:
		double vx, vy, vz;
		static int dokladnosc;

	public:
		Wektor():vx{1.0},vy{1.0},vz{1.0}{}
		Wektor(double vx, double vy, double vz){
			this->vx = vx;
			this->vy = vy;
			this->vz = vz;
		}

		double podaj_vx(){
			return this->vx;
		}

		void zmien_vx(double vx){
			this->vx = vx;
		}

		double iloczyn_skalarny(Wektor v2){
			return (this->vx * v2.vx + this->vy * v2.vy + this->vz * v2.vz);
		}

		void wypisz(){
			cout<<"("<<this->vx<<"; "<<this->vy<<"; "<<this->vz<<")"<<endl;
		}

		static int pobierz_dokladnosc(){
			return dokladnosc;
		}

		void wczytaj(istream &is);
		void zapisz(ostream &os);

};

void Wektor::wczytaj(istream &is){
	char sign;
	is>>sign>>vx>>sign>>vy>>sign>>vz>>sign;
}

void Wektor::zapisz(ostream &os){
	os.setf(ios::fixed,ios::floatfield);
	os.precision(dokladnosc);
	os<<"["<<vx<<"; "<<vy<<"; "<<vz<<"]"<<endl;
}

int Wektor::dokladnosc = 3;

int main(){
	Wektor v1;
	Wektor v2(2,3,4);
	Wektor v3 = Wektor(-1, 2.3, 7);
	double vx;
	cout<<"Wspolrzedna x wektora v1: "<<v1.podaj_vx()<<endl;
	cout<<"Podaj wspolrzedna x wektora v1: ";
	cin>>vx;
	v1.zmien_vx(vx);
	cout<<"Wspolrzedna x wektora v1: "<<v1.podaj_vx()<<endl;
	cout<<"Wspolrzedne wektora v1: ";
	v1.wypisz();
	cout<<"Wspolrzedne wektora v2: ";
	v2.wypisz();
	cout<<"Wspolrzedne wektora v3: ";
	v3.wypisz();
	cout<<"Iloczyn skalarny wektora v1 i v2: "<<v1.iloczyn_skalarny(v2)<<endl;
	cout<<"Podaj wektor: ";
	v1.wczytaj(cin);
	v1.zapisz(cout);
	return 0;
}
