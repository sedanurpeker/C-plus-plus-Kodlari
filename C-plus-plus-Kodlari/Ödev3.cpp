#include<iostream>
#include<math.h>
using namespace std;
int main()
{
/*
1.Örnek
	int i;
	for(i = 1; i <= 1000; i++)
	{
		cout << i << endl;
	}
*/
	
/*
2.Örnek
	int sayi, j, fak = 1;
	
	cout << "Faktoriyelini hesaplamak istediðiniz sayiyi giriniz:";
	cin >> sayi;
	
	for (j = 1; j <= sayi; j++)
	{
		fak *= j;
	}
	cout << fak;
*/

/*
3.Örnek
	int sayi, i, toplam = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (i = 1; i <= sayi; i++)
	{
		toplam += i;
	}
	cout << toplam;
*/

/*
4.Örnek
	int sayi, i, toplam = 0;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (i = 0; i <= sayi; i += 2)
	{
		toplam += i;
	}
	cout << toplam;
*/

/*
5.Örnek
	int sayi, i;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	for (i =1; i <= sayi / 2; i++)
	{
		if (sayi % i == 0)
		{
			cout << i << endl;
		}
		
	}
*/

/*
6.Örnek
	int toplam1 = 0,  toplam2 = 0, sayi, t = 1;
	float oran;
	
	while(t <= 20)
	{
		cout << t << ". Sayi:";
		cin >> sayi;
		
		if(sayi % 2 == 0)
		{
			toplam1 = toplam1 + sayi;
		}
		else
		{
			toplam2 = toplam2 + sayi; 
		}
	t++;
	}
	cout << "Cift Sayilarin Toplami:" << toplam1 << endl;
	cout << "Tek Sayilarin Toplami:" << toplam2 << endl;
	oran = toplam1 / toplam2;
	cout << "Oran: " << oran;
*/

/*
7.Örnek
	int i;
	
	for (i = 1; i <= 32; i++)
	{
		if(pow(i,2) > 10 && pow(i,2) < 1000)
	{
		cout << pow(i,2) << endl;
	}
	}
*/

/*
8.Örnek
	int sayi, i, toplam = 0, carpma = 1, adet = 0;
	
	for (i = 1; i < 11; i++)
	{
		cout << i << ". sayiyi girin:";
		cin >> sayi;
		
		if (sayi < 0)
		{
			toplam = toplam + sayi;
		}
		if (sayi % 2 == 0)
		{
			carpma = carpma * sayi;
		}
		if (sayi == 7)
		{
			adet = adet + 1;
		}
	}
	cout << "Negatif sayilarin toplami: " << toplam << endl;
	cout << "Cift sayilarin carpimi: " << carpma << endl;
	cout << "Adet: " << adet;
*/

/*
9.Örnek
	int toplam1 = 0, toplam2 = 0, sayi1, sayi2, i, j;
	
	cout << "Birinci sayiyi giriniz:";
	cin >> sayi1;

	cout << "Ikinci sayiyi giriniz:";
	cin >> sayi2;
	
	cout << "Birinci sayinin carpanlari" << endl;
	
	for (i = 2; i <= sayi1; i++)
	{
		if (sayi1 % i == 0)
		{
			sayi1 = sayi1 / i;
			cout << i << endl;
			toplam1 += i;
		}
	}
	
	cout << "Ikinci sayinin carpanlari" << endl;
	
	for (j = 2; j <= sayi2; j++)
	{
		if (sayi2 % j == 0)
		{
			sayi2 = sayi2 / j;
			cout << j << endl;
			toplam2 += j;
		}
	}
	
	if (toplam1 == toplam2)
	{
		cout << "Girilen sayilar dosttur.";
	}
	else
	{
		cout << "Girilen sayilar dost degildir.";
	}
*/

/*
10.Örnek
	int i, toplam1 = 0, toplam2 = 0, toplam3 = 0;
	
	for (i = 1; i <= 500; i++)
	{
		if (i % 2 == 1)
		{
			toplam1 += i;
		}
		else
		{
			toplam2 += i;
		}
	}
	
	toplam3 = toplam1 + toplam2;
	
	cout << "Teklerin toplami: " << toplam1 << endl;
	cout << "Ciftlerin toplami " << toplam2 << endl;
	
	if (toplam3 < 0)
	{
		cout << "Sonuc negatif";
	}
	else
	{
		cout << "Sonuc pozitif";
	}
*/
	
/*
11.Örnek
	int i = 10;
	
	while ((i * 3 + 2) < 200)
	{
		if ((i * 3 + 2) % 5 == 0)
		{
			cout << (i * 3 + 2) << endl;
		}
		i++;
	}
*/

/*
12.Örnek	
	int i = 1;
	float toplam = 0;
	
	while(i <= 10)
	{
		toplam = toplam + (1.0 / i);
		i++;
	}
	cout << toplam;
*/







}
