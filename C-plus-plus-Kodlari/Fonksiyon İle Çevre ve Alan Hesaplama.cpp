#include<iostream>
using namespace std;
#define PI 3.14

double cevre_hesapla(double yaricap)
{
	double cevre;
	
	cevre = 2 * PI * yaricap;
	return cevre;
}

double alan_hesapla(double yaricap)
{
	double alan;
	
	alan = PI * (yaricap * yaricap);
	return alan;
}
main()
{
	double r, alan, cevre;
	
	cout << "Yaricapi giriniz:";
	cin >> r;
	
	cevre = cevre_hesapla(r);
	alan =alan_hesapla(r);
	
	cout << "Cevre: " << cevre << endl;
	cout << "Alan: " << alan << endl;
}
