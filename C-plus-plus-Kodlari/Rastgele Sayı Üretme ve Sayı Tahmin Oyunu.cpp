#include<iostream>
#include<cstdlib>
#include<locale>
using namespace std;
main()
{
	int sayi, tahmin, tahmin_sayisi;
	srand(time(NULL));
	sayi = rand() % 100 +1; // %100 ---> 0-99 arasý
	cout << sayi << endl;
	
	while (1)
	{
		tahmin_sayisi++;
		cout << "Tahmin girin:";
		cin >> tahmin;
		
		if (tahmin > sayi)
		{
			cout << "Sayinizi kucultun" << endl;
		}
		else if (tahmin < sayi)
		{
			cout << "Sayinizi buyultun" << endl;
		}
		else
		{
			cout << "Tebrikler! Dogru tahmin yaptiniz." << endl << "Tahmin Sayisi:" << tahmin_sayisi;
			break;
		}
	}
}
