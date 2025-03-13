#include<iostream>
#include<cstdlib>
using namespace std;
void tamSayiDenetim(int &num)
{
	char input[20];
	char *cp;
	int temp;
	while(1)
	{
		cin >> input;
		temp = strtol(input, &cp, 10);
		if(*cp != '\0' || input == "")
		{
			cout << "Tam Sayi Veri Tipi Girmediniz." << endl;
			cout << "Tam Sayi Veri Tipi Giriniz." << endl;
			continue;
		}
		else
		{
			num = static_cast<int>(temp);
			break;
		}
	}
}

int main()
{
	int sayi1, sayi2;
	cout << "Birinci sayiyi giriniz:" << endl;
	tamSayiDenetim(sayi1);
	cout << "Ikinci sayiyi giriniz:" << endl;
	tamSayiDenetim(sayi2);
	
	cout << "Sayi1: " << sayi1 << endl;
	cout << "Sayi2: " << sayi2 << endl;
}
