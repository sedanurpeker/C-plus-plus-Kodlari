#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int a = 56, b = 21;
	int islem1, islem2, islem3, islem5, us, kok;
	float islem4;
	islem1 = a + b;
	islem2 = a - b;
	islem3 = a * b;
	islem4 = float(a) / b;
	islem5 = a % b;
	us = pow(2,5);
	kok = sqrt(9);
	
	cout << "Toplama: " << islem1 << endl;
	cout << "Cikarma: " << islem2 << endl;
	cout << "Carpma: " << islem3 << endl;
	cout << "Bolme: " << islem4 << endl;
	cout << "Mod: " << islem5 << endl;
	cout << "Us: " << us << endl;
	cout << "Kok: " << kok << endl;
}
