/*

VER� T�P� D�N���MLER�:
Hesaplama i�lemlerinde farkl� ver t�rleri kullan�labilir. Program derleme a�amas�nda k���k veri tipini
b�y�k veri tipine otomatik d�n��t�r�r. �rne�in int bir de�i�ken ile double bir de�i�ken �zerinde matematiksel i�lem
yapt���n�zda sonu� double olacakt�r.
Baz� durumlarda da kendimiz i�lem esnas�nda de�i�kenin tipini de�i�tirebiliriz. Fakkat dikkat edilmesi gereken
nokta, b�y�k veri tipinden k���k veri tipine d�n���m yaparken veri kay�plar� ya�anbilir.

double > float > int > char

int ile int = int
int ile float = float
float ile double = double
int ile double = double

double(de�i�ken) , float(de�i�ken) , int(de�i�ken) veya char8de�i�ken) 

*/
#include<iostream>
using namespace std;
main()
{
	/*
	
	int a = 10;
	double b = 2.5;
	cout << a / b;
	
	*/
	
	
	/*
	
	int a = 10;
	double b = 4;
	cout << a / b;
	
	*/
	
	/*
	
	int a = 10;
	int b = 4;
	cout << a / b;
	
	*/
	
	/*
	
	int a = 10;
	int b = 4;
	cout << float(a) / b;
	
	*/
	
	/*
	
	int a = 10;
	int b = 2.5;
	cout << double(a)/ b;
	
	*/
	
	/*
	
	int a = 10;
	float b = 2.5;
	cout << a / int(b) << endl;
	cout << int(2.9);
	
	*/
	
	/*
	int a = 10;
	float b = 2.5;
	cout << a / int(b) << endl;
	cout << double(2);
	
	*/
	
	

}
