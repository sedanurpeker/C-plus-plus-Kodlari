/*
	Belli bir i�levi yerine getirmek �zere ana programdan ba��ms�z kod gruplar�na fonks�yon denir.
	Ana program taraf�ndan �a��r�larak tekrar tekrar kullan�lmas�na imkan sa�lar.
	Kod tekrar�n� �nleyerek hata tepitini kolayla�t�r�r.
	
	Fonksiyonlar 4'e ayr�l�r:
	
	1- Parametre almayan
	2- Parametre alan
	3- Geriye de�er d�nd�rmeyen
	4- Geriye de�er d�nd�ren
	
	
	void ---> Geriye de�er d�nd�rmeyen anlam�na gelmektedir.
	
*/

/*

#include<iostream>
using namespace std;

void mesaj()
{
	cout << "Kod calisti.";
}

main()
{
	mesaj();
}

*/


// ---------------------------------- OR ----------------------------------


#include<iostream>
using namespace std;

void mesaj();

main()
{
	mesaj();
}


void mesaj()
	{
		cout << "Kod calisti.";
	}

