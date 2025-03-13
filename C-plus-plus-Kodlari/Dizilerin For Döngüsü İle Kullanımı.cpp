#include<iostream>
using namespace std;
main()
{
/*
	int i, j, k;
	int dizi[9] = {10, 52, 60, 896, 14, 36, 75, 2, 49};
	int dizi2[10];
	
	for (i = 0; i < 9; i++)
	{
		cout << dizi[i] << endl;
	}
	
	for (j = 0; j < 10; j++)
	{
		dizi2[j] = j + 1;
	}
	
	for (k = 0; k < 10; k++)
	{
		cout << dizi2[k] << endl;
	}
*/
	
	
	int i, sayi, j, toplam = 0, ort;
	int dizi[5];
	
	for (i = 0; i < 5; i++)
	{
		cout << "Bir sayi giriniz: ";
		cin >> sayi;
		
		dizi[i] = sayi;
	}
	
	for (j = 0; j < 5; j++)
	{
		toplam += dizi[j]; 
	}
	
	ort = toplam / 5;
	cout << ort;
	
	
}
