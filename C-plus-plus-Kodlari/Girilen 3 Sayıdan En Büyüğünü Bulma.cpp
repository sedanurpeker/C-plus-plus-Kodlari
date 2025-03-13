#include<iostream>
using namespace std;
main()
{
	int s1, s2, s3;
	
	cout << "Birinci sayiyi giriniz:";
	cin >> s1;
	
	cout << "Ikinci sayiyi giriniz:";
	cin >> s2;
	
	cout << "Ucuncu sayiyi giriniz:";
	cin >> s3;
	
	if (s1 > s2 && s1 > s3)
	{
		cout << "En buyuk sayi ilk girilen sayidir.";
	}
	else if (s2 > s1 && s2 > s3)
	{
		cout << "En buyuk sayi ikinci girilen sayidir.";
	}
	else
	{
		cout << "En buyuk sayi ucuncu girilen sayidir.";
	}
	
}
