#include<iostream>
using namespace std;
main()
{
	int i, sayi, a = 1, b = 1, c = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;

	cout << a << b;
	
	for(i = 1; i <= sayi; i += 1)
	{
		c = a + b;
		a = b;
		b = c;
		cout << c;
	} 
	
	
}
