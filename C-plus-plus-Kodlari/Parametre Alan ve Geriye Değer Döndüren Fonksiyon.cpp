// (5! + 7!) / (9! - 6!)
/*
------------------------ Manuel ------------------------
#include<iostream>
using namespace std;
main()
{
	int fak1 = 1, fak2 = 1, fak3 = 1, fak4 = 1, i;
	
	for (i = 1; i <= 5; i++)
	{
		fak1 *= i;
	}
	
	for (i = 1; i <= 6; i++)
	{
		fak2 *= i;
	}
	
	for (i = 1; i <= 7; i++)
	{
		fak3 *= i;
	}
	
	for (i = 1; i <= 9; i++)
	{
		fak4 *= i;
	}
	
	cout << fak1 << endl;
	cout << fak2 << endl;
	cout << fak3 << endl;
	cout << fak4 << endl;
	cout << double(fak1 + fak3) / (fak4 - fak2);
	
}
*/

// ------------------------ FONKSÝYONLU ------------------------

#include<iostream>
using namespace std;

int faktoriyel(int sayi)
{
	int i, fak = 1;
	
	for (i = 1; i <= sayi; i++)
	{
		fak *= i;
	}
	return fak;
}

main()
{
	double islem;
	islem = double(faktoriyel(5) + faktoriyel(7)) / (faktoriyel(9) - faktoriyel(6));
	cout << islem;
}



