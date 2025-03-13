#include<iostream>
using namespace std;
main()
{
/*
	for(döngü deðiþkeni = baþlangýç; koþul; artma veya azalma miktarý)
	{
	
	
	}
*/

	for (int a = 1; a < 10; a++)
	{
		cout << a << "." << "secenek"<< endl;
	}
	
	int toplam = 0;
	for (int x = 0; x <= 12; x++)
	{
		toplam = toplam + x;
	}
	cout << toplam << endl;
}
