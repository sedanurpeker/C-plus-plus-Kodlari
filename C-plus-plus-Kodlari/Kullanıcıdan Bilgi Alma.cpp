#include<iostream>
using namespace std;
main()
{
	char a;
	string metin;
	int s1;
	float s2;
	double s3;
	cout << "Bir harf giriniz: ";
	cin >> a;
	cout << a << endl;
	
	cout << "Bir metin giriniz: ";
	cin >> metin;
	cout << metin << endl;
	
	cout << "Bir tamsayi sayi giriniz: ";
	cin >> s1;
	cout << s1 << endl;
	
	cout << "Bir float sayi giriniz: ";
	cin >> s2;
	cout << s2 << endl;
	
	cout << "Bir double sayi giriniz: ";
	cin >> s3;
	cout << s3 << endl;
	
	cout << &s1 << endl;      // &s1 --->  s1 deðiþkeninin ram bellekteki adresini ekrana yazdýrýr.
}
