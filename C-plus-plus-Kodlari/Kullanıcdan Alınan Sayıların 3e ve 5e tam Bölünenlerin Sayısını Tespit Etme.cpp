#include<iostream>
using namespace std;
main()
{
	int i, adet = 0, sayi;
	
	for (i = 1; i <= 10; i++)
	{
		cout << i << ". sayiyi giriniz:";
		cin >> sayi;
		
		if (sayi % 3 == 0 && sayi % 5 == 0)
		{
			adet++;
		}
	}
	cout << adet;
	
}
