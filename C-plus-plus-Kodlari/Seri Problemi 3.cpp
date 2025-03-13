#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int k, n;
	double carpim = 1;
	cout << "n sayisini giriniz:";
	cin >> n;
	for(k=2; k<=n; k++)
	{
		carpim *= (pow(k,2)-1)/pow(k,2);
	}
	cout << carpim;
}
