#include<iostream>
using namespace std;
int main()
{
	int sayi, i;
	float toplam;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (i = 1; i <= sayi; i++)
	{
		toplam = toplam + (1.0 / i);
	}
	
	cout << toplam;
	
	
}
