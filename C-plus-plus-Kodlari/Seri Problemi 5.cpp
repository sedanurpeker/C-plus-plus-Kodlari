#include<iostream>
using namespace std;

int main()
{
	int i, n;
	double toplam = 0, topla1 = 0, topla2 = 0;
	cout << "n sayisini giriniz:";
	cin >> n;
	for(i=1; i<=n; i++)
	{
		if(i%3==0)
		{
			topla1 -= 1.0/i;
		}
		else
		{
			topla2 += 1.0/i;
		}
	}
	toplam = topla1 + topla2;
	cout << toplam;
}
