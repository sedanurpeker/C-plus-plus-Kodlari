/*

VERÝ TÝPÝ DÖNÜÞÜMLERÝ:
Hesaplama iþlemlerinde farklý ver türleri kullanýlabilir. Program derleme aþamasýnda küçük veri tipini
büyük veri tipine otomatik dönüþtürür. Örneðin int bir deðiþken ile double bir deðiþken üzerinde matematiksel iþlem
yaptýðýnýzda sonuç double olacaktýr.
Bazý durumlarda da kendimiz iþlem esnasýnda deðiþkenin tipini deðiþtirebiliriz. Fakkat dikkat edilmesi gereken
nokta, büyük veri tipinden küçük veri tipine dönüþüm yaparken veri kayýplarý yaþanbilir.

double > float > int > char

int ile int = int
int ile float = float
float ile double = double
int ile double = double

double(deðiþken) , float(deðiþken) , int(deðiþken) veya char8deðiþken) 

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
