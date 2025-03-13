/*
#include<iostream>
using namespace std;
main()
{

	int a = 5;
	int b = 7;
	int temp;
	
	cout << a << "\t" << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << a << "\t" << b << endl;

}
*/

/*
#include<iostream>
using namespace std;

void degistir(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

main()
{
	int a = 5;
	int b = 7;
	cout << a << "\t" << b << endl;
	degistir(a, b);
	cout << a << "\t" << b << endl;
}
*/
	
	
#include<iostream>
using namespace std;

void degistir(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

main()
{
	int a = 5;
	int b = 7;
	cout << a << "\t" << b << endl;
	degistir(&a, &b);
	cout << a << "\t" << b << endl;
}
	

