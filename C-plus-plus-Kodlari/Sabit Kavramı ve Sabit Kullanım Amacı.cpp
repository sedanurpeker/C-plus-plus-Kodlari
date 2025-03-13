/*

#include<iostream>
using namespace std; 
#define PI 3.14
main()
{
	float r;
	cout << "Dairenin yaricapini giriniz: ";
	cin >> r;
	double alan = PI * r * r;
	cout << alan;
	
}

*/


#include<iostream>
using namespace std; 
main()
{
	const float PI = 3.14;
	float r;
	cout << "Dairenin yaricapini giriniz: ";
	cin >> r;
	double alan = PI * r * r;
	cout << alan;
}
