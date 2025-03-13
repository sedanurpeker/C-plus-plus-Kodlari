#include<iostream>
using namespace std;
main()
{
	int sayi, i, capan_sayisi, kontrol = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (i = 2; i < (sayi/2); i++)
	{
		if (sayi % i == 0)
		{
			kontrol = 1;
			cout << "Sayi asal degildir";
			break;
		}
	}
	if(kontrol == 0)
	{
		cout << "Sayi asaldir.";
	}
	
	
}
