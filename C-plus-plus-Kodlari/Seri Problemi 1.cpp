#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k, n;
	double toplam=0;
	cout << "Bir sayi giriniz:";
	cin>> n;
	
	for(k=1; k<=n; k++)
	{
		toplam += (k+1) / pow(3,k);
	}
	cout << toplam;
}
