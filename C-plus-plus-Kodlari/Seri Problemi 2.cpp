#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k, j, n, carpim;
	double toplam = 0;
	cout << "Bir sayi giriniz:";
	cin >> n;
	for(k=1; k<=n; k++)
	{
		carpim = 1;
		for(j=1; j<=2*k; j++)
		{
			carpim *= j;
		}
		toplam += pow(5,k) / double(carpim);
	}
	cout << toplam;
}
