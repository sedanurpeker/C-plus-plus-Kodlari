#include<iostream>
using namespace std;
main()
{
	/*
1.ÖRNEK
	int kisa, uzun, cevre, alan;
	cout << "Kisa kenari giriniz: ";
	cin >> kisa;
	
	cout << "Uzun kenari giriniz: ";
	cin >> uzun;
	
	cevre = 2 * (kisa + uzun);
	alan = kisa * uzun;
	
	cout << "Cevre :" << cevre << endl << "Alan :" << alan;
	*/
	
	
	/*
2.ÖRNEK
	double s1, s2, s3, ort;
	cout << "Birinci sayiyi giriniz:";
	cin >> s1;
	
	cout << "Ikinci sayiyi giriniz:";
	cin >> s2;
	
	cout << "Ucunucu sayiyi giriniz:";
	cin >> s3;
	
	ort = (s1 + s2 + s3) / 3;
	
	cout << "Ortalama: " << ort;
	*/
	
	
// 3.ÖRNEK
	 float kdv, oran, fiyat, tutar;
	cout << "Urunun fiyatini girininz:";
	cin >> fiyat;
	
	cout << "KDV oranini girininz:";
	cin >> oran;
	
	kdv = fiyat * oran / 100;
	tutar = fiyat + kdv;
	
	cout << "Urunun tutari: " << tutar;
}
