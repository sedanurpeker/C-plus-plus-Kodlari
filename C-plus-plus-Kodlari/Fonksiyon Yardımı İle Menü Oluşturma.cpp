#include<iostream>
using namespace std;

int menu()
{
	int secenek;
	
	cout << "1-Karenin Cevresini Hesaplama" << endl;
	cout << "2-Karenin Alanini Hesaplama" << endl;
	cout << "3-Ucgenin Cevresini Hesaplama" << endl ;
	cout << "4-Ucgenin Alanini Hesaplama" << endl;
	cout << "Lutfen yukaridaki seceneklerden birini seciniz: ";
	cin >> secenek;
	
	return secenek;
}

double kare_cevre(double s1)
{
	double cevre;
	
	cevre = 4 * s1;
	
	return cevre;
}

double kare_alan(double s1)
{
	double alan;
	
	alan = s1 * s1;
	
	return alan;
}

double ucgen_cevre(double s1, double s2, double s3)
{
	double cevre;
	
	cevre = s1 + s2 + s3;
	
	return cevre;
}

double ucgen_alan(double s1, double h)
{
	double alan;
	
	alan = (s1 * h ) / 2;
	
	return alan;
}
main()
{
	int secenek;
	secenek = menu();
	
	if (secenek == 1)
	{
		double a;
		
		cout << "Lutfen karenin bir kenarini giriniz:";
		cin >> a;
		
		cout << "Cevre: " << kare_cevre(a);
	}
	
	else if (secenek == 2)
	{
		double a;
		
		cout << "Lutfen karenin bir kenarini giriniz:";
		cin >> a;
		
		cout << "Alan: " << kare_alan(a);
	}
	else if (secenek == 3)
	{
		double a, b, c;
		
		cout << "Lutfen ucgenin birinci kenarini giriniz:";
		cin >> a;
		cout << "Lutfen ucgenin ikinci kenarini giriniz:";
		cin >> b;
		cout << "Lutfen ucgenin ucuncu kenarini giriniz:";
		cin >> c;
		
		cout << "Cevre: " << ucgen_cevre(a, b, c);
	}
	else
	{
		double a, h;
		
		cout << "Lutfen ucgenin tabanini giriniz:";
		cin >> a;
		cout << "Lutfen ucgenin yuksekligini giriniz:";
		cin >> h;
		
		cout << "Alan: " << ucgen_alan(a, h);
	}
	
	return 0;
}
