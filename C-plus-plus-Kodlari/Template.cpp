/*
	Function Over Loading (Fonksiyonlarda A��r� Y�klenme): Ayn� fonkison ismine sahip birden fazla 
fonksiyonun olu�turulmu� haline denir.

*/

#include<iostream>
using namespace std;
/*
int guncelle(int a)
{
	return ++a;
}

double guncelle(double a)
{
	return ++a;
}

main()
{
	int a = 5;
	double b = 20.26;
	
	cout << guncelle(a) << endl;
	cout << guncelle(b);
		
}
*/

template < typename T>
T guncelle(T a)
{
	return ++a;
}

main()
{
	int a = 5;
	double b = 20.26;
	
	cout << guncelle(a) << endl;
	cout << guncelle(b);
		
}
