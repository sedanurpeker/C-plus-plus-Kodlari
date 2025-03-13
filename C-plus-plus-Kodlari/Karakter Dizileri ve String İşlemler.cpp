#include<iostream>
using namespace std;
main()
{
	string metin = "bilisim";
	string ogrenciler[] = "ali, mehmet, veli, oya, ayse";
	string isimler[10];
	
	for(int i = 0; i < 3; i++)
	{
		cout << "Adinizi giriniz: ";
		getline(cin, isimler[i]);	 
	}
	
	for (int i = 0; i < 3; i++)
		cout << isimler[i] << endl;
}
