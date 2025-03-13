#include<iostream>
using namespace std;
main()
{
	int sayi, carpma = 1, x;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (x = 1; x <= sayi; x++)
	{
		carpma = carpma * x;
	}
	cout << carpma;
	
	
	/*
	int sayi, i, toplam = 0;
	
	for (i = 1; i <= 10; i++)
	{
		cout << i << ". sayiyi giriniz:";
		cin >> sayi;
		toplam = toplam + sayi;
	}
	cout << toplam << endl;
	*/
	

}
