#include<iostream>
using namespace std;
main()
{
// * ---> i�aret etti�i adresteki de�eri g�sterir.
// & ---> i�aret etti�i adresi g�sterir.
	
	int sayi[10] = {15, 25, 36, 7, 65, 99, 76, 48, 72, 19};
	
	/*
	cout << sizeof(int) << endl << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << &sayi[i] << "--->" << sayi[i] << endl;
	}
	*/
	
	int *spt;
//	cout << sayi; 
	spt = sayi;
	for (int i = 0; i < 10; i++)
	{
		cout << *(spt += 1) << endl;
	}
// Ya da a�a��daki �ekilde yaz�labilir.
	for (int i = 0; i < 10; i++)
	{
		cout << spt[i] << "----> " << &spt[i] << endl;
	}
	return 0;
}
