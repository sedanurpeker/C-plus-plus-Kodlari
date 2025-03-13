#include<iostream>
using namespace std;

int en_buyuk(int sayi1, int sayi2, int sayi3)
{
	int enb;
	
	if(sayi1 > sayi2 && sayi1 > sayi3)
	{
		enb = sayi1;
	}
	else if(sayi2 > sayi1 && sayi2 > sayi3)
	{
		enb = sayi2;
	}
	else
	{
		enb = sayi3;
	}
	return enb;
}

int en_kucuk(int sayi1, int sayi2, int sayi3)
{
	int enk;
	
	if(sayi1 < sayi2 && sayi1 < sayi3)
	{
		enk = sayi1;
	}
	else if(sayi2 < sayi1 && sayi2 < sayi3)
	{
		enk = sayi2;
	}
	else
	{
		enk = sayi3;
	}
	return enk;
}

main()
{
	int a, b, c, fark;
	
	cout << "Birinci sayiyi giriniz: ";
	cin >> a;
	cout << "Ikinci sayiyi giriniz: ";
	cin >> b;
	cout << "Ucuncu sayiyi giriniz: ";
	cin >> c;
	
	fark = en_buyuk(a , b, c) - en_kucuk(a , b, c);
	
	cout << fark;
}
