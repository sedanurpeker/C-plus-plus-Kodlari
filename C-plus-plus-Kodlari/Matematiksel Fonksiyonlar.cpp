#include<iostream>
#include<math.h>
using namespace std;
main()
{
	double a;
	int b;
	
	a = 23.56;
	b = -15;
	
	// fabs() mutlak deðeri bulmak için kullanýlýr.
	
	cout << fabs(a) << endl;
	cout << fabs(b) << endl;
	
	// fmod(x, y) mod alma iþlemini yapar. % sembolü ile ayný iþlevi yapar.
	
	cout << fmod(20, 6) << endl;
	
	// ceil() ondalýklý sayýyý üst tam sayýya dönüþtürür.
	
	cout << ceil(12.50) << endl;
	
	// floor() ondalýklý sayýyý bir alt tam sayýya dönüþtürür.
	
	cout << floor(12.549) << endl;
	
	// round() ondalýklý sayýyý en yakýn tam sayýya yuvarlar.
	
	cout << round(12.5) << endl;
	
	// cos, sin, acos, asin, atan() radyan cinsinden girilen deðerin karþýlýðýný verir.
	
	cout << cos(0) << endl;
	cout << sin(0) << endl;
	cout << tan(60) << endl;
	
	// max(x, y) , min(x, y) girilen sayýlardan büyük veya küçük olaný bulmak için kullanýlýr.
	
	cout << max(25, 89) << endl;
	cout << min(26, 103) << endl;
	
	// pow(taban, üst) üstlü ifadeleri hesaplamk için kullanýlýr.
	
	cout << pow(9, 3) << endl;
	
	// sqrt(x) karekökü hesaplamak için kullanýlýr.
	
	cout <<sqrt(625) << endl;
	
}
