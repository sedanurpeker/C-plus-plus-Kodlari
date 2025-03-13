/*
	Belli bir iþlevi yerine getirmek üzere ana programdan baðýmsýz kod gruplarýna fonksþyon denir.
	Ana program tarafýndan çaðýrýlarak tekrar tekrar kullanýlmasýna imkan saðlar.
	Kod tekrarýný önleyerek hata tepitini kolaylaþtýrýr.
	
	Fonksiyonlar 4'e ayrýlýr:
	
	1- Parametre almayan
	2- Parametre alan
	3- Geriye deðer döndürmeyen
	4- Geriye deðer döndüren
	
	
	void ---> Geriye deðer döndürmeyen anlamýna gelmektedir.
	
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

