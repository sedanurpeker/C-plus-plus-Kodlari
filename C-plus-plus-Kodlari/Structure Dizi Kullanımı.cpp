#include<iostream>
#include<cstring>
using namespace std;
struct musteri{
	int id;
	char ad[20];
	char soyad[20];
	double bakiye;
};
int main()
{
	struct musteri cost[3];
	char musteriAdi[20];
	for(int i = 0; i < 2; i++)
	{
		cout << "Musteri Kimligini Giriniz: ";
		cin >> cost[i].id;
		cout << "Musterinin Adini Giriniz: ";
		cin >> cost[i].ad;
		cout << "Musterinin Soyadini Giriniz: ";
		cin >> cost[i].soyad;
		cout << "Musterinin Bakiyesini Giriniz: ";
		cin >> cost[i].bakiye;
		cout << endl;
	}
	cout << "Bilgileri Getirilecek Musteri Adi: ";
	cin >> musteriAdi;
	for(int i = 0; i < 2; i++)
	{
		if(strcmp(musteriAdi, cost[i].ad) == 0)
		{
			cout << cost[i].id << '\t' << cost[i].ad << '\t' << cost[i].soyad << '\t' << cost[i].bakiye << endl;
			continue;
		}
	}
}
