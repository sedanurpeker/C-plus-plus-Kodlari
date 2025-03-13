#include<iostream>
using namespace std;
struct ogrenci{
	int numara;
	char ad[20];
	char soyad[20];
	double ortalama;
};
int main()
{
	struct ogrenci ogr;
	cout << "Ogrenci numarasini giriniz: " << endl;
	cin >> ogr.numara;
	cout << "Ogrenci adini giriniz: " << endl;
	cin >> ogr.ad;
	cout << "Ogrenci soyadini giriniz: " << endl;
	cin >> ogr.soyad;
	cout << "Ogrenci ortalamsini giriniz: " << endl;
	cin >> ogr.ortalama,
	
	cout << ogr.numara << '\t' << ogr.ad << "\t\t" << ogr.soyad << '\t' << ogr.ortalama << endl;
}
