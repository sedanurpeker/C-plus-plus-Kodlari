/*
private: D��ar�ya eri�imin kapal� olmas�, verilerin sadece s�n�f i�inde kullan�labilmesini sa�lar.
public: Verilerin di�ar�ya eri�imin a��lmas�n� sa�lar.
protected: Private gibi verilerin d��ar�ya kapat�lmas�n� sa�lar. Kal�t�m olan s�n�flara eri�im sa�lar.
Encupsulation(Kaps�lleme): Verilerin d��ar�ya kar�� kapat�lmas� i�lemi.
*/

#include<iostream>
using namespace std;
class Personel{
	private:
		string Ad, Brans;
		int Yas;
	public:
		void setAd(string ad)
		{
			Ad = ad;
		}
		void setYas(int yas)
		{
			if(yas >= 18 && yas < 65)
			{
				Yas = yas;
			}
			else
			{
				cout << "Yanlis yas degeri girdiniz!" << endl;
			}
		}
		void setBrans(string brans)
		{
			Brans = brans;
		}
		void getAd()
		{
			cout << "Kisinin adi: " << Ad << endl;
		}
		void getYas()
		{
			cout << "Kisinin yasi: " << Yas << endl;
			Yas = 0;
		}
		void getBrans()
		{
			cout << "Kisinin bransi: " << Brans << endl;
		}
		
};

int main()
{
	Personel kisi, kisi1;
	kisi.setAd("Oya");
	kisi.setYas(25);
	kisi.setBrans("Matematik");
	kisi.getAd();
	kisi.getYas();
	kisi.getBrans();
//	cout << "\n\n";
//	kisi.setYas(500);
	cout << "\n\n";
	kisi.setAd("Kenan");
	kisi.setYas(330);
	kisi.setBrans("Biyoloji");
	kisi.getAd();
	kisi.getYas();
	kisi.getBrans();
}
