#include<iostream>
using namespace std;
main()
{
/*
	int a = 1;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}
*/
	
	int sayi, i = 1, toplam = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
		
	while (sayi != 0)
	{
		toplam += sayi;
		
		cout << "Bir sayi giriniz:";
		cin >> sayi;
	}
	
	cout << toplam;
	
}
