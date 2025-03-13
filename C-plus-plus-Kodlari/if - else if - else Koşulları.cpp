#include<iostream>
using namespace std;
main()
{
	/*
	int sayi;
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	if (sayi < 0)
	{
		cout << "Girilen sayi sifirden kucuktur.";
	}
	
	else if (sayi == 0)
	{
		cout << "Girilen sayi sifirdir.";
	}
	
	else
	{
		cout << "Girilen sayi sifirden buyuyktur.";
	}
	*/
	
	
	float puan;
	cout << "Bir puan giriniz: ";
	cin >> puan;
	
	if (puan >= 0 && puan <= 44 )
	{
		cout << "1";
	}
	
	else if (puan >= 45 && puan <= 54 )
	{
		cout << "2";
	}
	
	else if (puan >= 55 && puan <= 69 )
	{
		cout << "3";
	}
	
	else if (puan >= 70 && puan <= 84 )
	{
		cout << "4";
	}
	
	else if (puan >= 85 && puan <= 100 )
	{
		cout << "5";
	}
	
	else
	{
		cout << "Puani tekrar giriniz: ";
		cin >> puan;
	}
	
	

}
