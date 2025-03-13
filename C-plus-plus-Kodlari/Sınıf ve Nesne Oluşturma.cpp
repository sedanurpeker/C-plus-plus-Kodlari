#include<iostream>
using namespace std;
class Araba{
	public:
	string Renk, Marka;
	int KapiSayisi, VitesSayisi, MaxHiz;
	
	void hareketEt()
	{
		cout << "Arac Hareket ettirildi." << endl;
	}
	void dur()
	{
		cout << "Arac Durduruldu." << endl;
	}
	void geriGit()
	{
		cout << "Arac Geri Gidiyor." << endl;
	}
};
int main()
{
	Araba otomobil;
	otomobil.Marka = "Mercedes";
	otomobil.Renk = "Siyah";
	otomobil.KapiSayisi = 4;
	otomobil.VitesSayisi = 8;
	otomobil.MaxHiz = 300;
	
	cout << "Aracin Markasi: " << otomobil.Marka << endl;
	cout << "Aracin Rengi: " << otomobil.Renk << endl;
	cout << "Aracin Kapi Sayisi: " << otomobil.KapiSayisi << endl;
	cout << "Aracin Vites Sayisi: " << otomobil.VitesSayisi << endl;
	cout << "Aracin Max Hizi: " << otomobil.MaxHiz << endl << endl;
	
	otomobil.hareketEt();
	otomobil.dur();
	otomobil.geriGit();
	
	return 0; 
}
