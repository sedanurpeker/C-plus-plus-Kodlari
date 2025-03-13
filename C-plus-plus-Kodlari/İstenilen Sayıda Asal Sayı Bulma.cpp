#include<iostream>
using namespace std;
int main()
{
	int sayi, i, asal_kontrol, asal_toplam = 0, asal_sayac = 2;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	while(sayi > asal_toplam)
	{
		asal_kontrol = 0;
	for(i = 2; i <= asal_sayac / 2; i++)
	{
		if (asal_sayac % i == 0)
		{
			asal_kontrol = 1;
			break;
		}
	}
	if (asal_kontrol == 0)
		{
			asal_toplam++;
			cout << asal_sayac << endl;
		}
		asal_sayac++;
	}
}
