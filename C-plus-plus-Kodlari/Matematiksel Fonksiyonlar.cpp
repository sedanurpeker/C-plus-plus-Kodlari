#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double a;
	int b;
	
	a = 23.56;
	b = -15;
	
	// fabs() mutlak de�eri bulmak i�in kullan�l�r.
	
	cout << fabs(a) << endl;
	cout << fabs(b) << endl;
	
	// fmod(x, y) mod alma i�lemini yapar. % sembol� ile ayn� i�levi yapar.
	
	cout << fmod(20, 6) << endl;
	
	// ceil() ondal�kl� say�y� �st tam say�ya d�n��t�r�r.
	
	cout << ceil(12.50) << endl;
	
	// floor() ondal�kl� say�y� bir alt tam say�ya d�n��t�r�r.
	
	cout << floor(12.549) << endl;
	
	// round() ondal�kl� say�y� en yak�n tam say�ya yuvarlar.
	
	cout << round(12.5) << endl;
	
	// cos, sin, acos, asin, atan() radyan cinsinden girilen de�erin kar��l���n� verir.
	
	cout << cos(0) << endl;
	cout << sin(0) << endl;
	cout << tan(60) << endl;
	
	// max(x, y) , min(x, y) girilen say�lardan b�y�k veya k���k olan� bulmak i�in kullan�l�r.
	
	cout << max(25, 89) << endl;
	cout << min(26, 103) << endl;
	
	// pow(taban, �st) �stl� ifadeleri hesaplamk i�in kullan�l�r.
	
	cout << pow(9, 3) << endl;
	
	// sqrt(x) karek�k� hesaplamak i�in kullan�l�r.
	
	cout <<sqrt(625) << endl;
	
}
