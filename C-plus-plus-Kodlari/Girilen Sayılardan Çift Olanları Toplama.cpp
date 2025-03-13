#include<iostream>
using namespace std;
main()
{
	int sayi, j, toplam = 0;
	
	for (j = 1; j <= 10; j++)
	{
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	if(sayi % 2 == 0)
	{
		toplam = toplam + sayi;
	}
		
	}
	cout << toplam;
	
	
}
