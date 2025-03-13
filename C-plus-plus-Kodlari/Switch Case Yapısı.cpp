/*
	switch (deðiþken)
	{
		case 1: Ýþlemler; break;
		case 2: Ýþlemler; break;
		case 3: Ýþlemler; break;
		default: Þartlar saðlanmazsa çalýþacak kod bloðu
	}
*/

#include<iostream>
using namespace std;
main()
{
	int topla, cikar, carp, bol, mod, islem, sayi1, sayi2;
	
	cout << "1.Toplama" << endl << "2.Cikarma" <<endl <<"3.Carpma" << endl << "4.Bolme" << endl << "5.Kalan Hesaplam" << endl << "Lutfen yapilacak islemi seciniz:";
	cin >> islem;
	
	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;
	
	cout << "Ikinci sayiyi giriniz:(Eger Kalan Hesaplama secenegini sectiyseniz buraya 0 sayisini giriniz.)";
	cin >> sayi2;
	
	switch (islem)
	{
		case 1:
			{
				topla = sayi1 + sayi2;
				cout << topla;
				break;
			}
			
		case 2:
			{
				cikar = sayi1 - sayi2;
				cout << cikar;
				break;
			}
		
		case 3:
		{
				carp = sayi1 * sayi2;
				cout << carp;
				break;
		}	
		
		case 4:
			{
				bol = sayi1 / sayi2;
				cout << bol;
				break;
			}
		
		case 5:
			{
				mod = (sayi1 + sayi2) % 2;
				cout << mod;
				break;
			}
		
		default:
			{
				cout << "Hatali islem secimi yaptiniz.";
			}
	}
	
	
	
	
	
}
