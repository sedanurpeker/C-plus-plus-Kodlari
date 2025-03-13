#include<iostream>
using namespace std;
main()
{
	int sayi, i, toplam = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for(i = 1; i < sayi; i++)
	{
		if (sayi % i == 0)
		{
			cout << i << endl;
			toplam = toplam + i;
		}
	}
	if(toplam == sayi)
			{
				cout << "Sayi mukemmel bir sayidir.";
			}
			else
			{
				cout << "Sayi mukemmel bir sayi degildir.";
			}
}
