#include<iostream>
using namespace std;

int main()
{
	int i, k, toplam = 0, sonuc = 0, n;
	cout << "Terim sayisini giriniz:";
	cin >> n;
	for (i=1; i<=n; i++)
	{
		toplam = 0;
		for(k=1; k<=i; k++)
		{
			sonuc += k;
			toplam += k;
			cout << k;
			if(k<i)
			{
				cout << "+";
			}
		}
		cout << "=" << toplam << endl;
		cout << sonuc;
	}
}
