/*
De�i�ken isim kurallar�

1) T�rk�e harfler kullan�lamaz.
2) Say� ile ba�lanmaz.
3) Kelimeler aras�nda bo�luk olamaz.
4) Kelimeler ars�nda _ kullan�labilir.
5) Birden fazla kelime varsa Camel Case kullan�labilir. adSoyad
6) Birden fazla kelime varsa Snake kullan�labir. ad_soyad

*/

#include<iostream>
using namespace std;
main(){
	setlocale(LC_ALL, "Turkish");
	int sayi1;
	int sayi2 = 20;
	sayi1 = 18;
	cout<<sayi2<<endl;
	cout<<sayi1<<endl;
	cout<< "ilk sayi " << sayi1 << " ikinci sayi " << sayi2<< " tir" << endl; 
}
