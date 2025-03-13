/*
Deðiþken isim kurallarý

1) Türkçe harfler kullanýlamaz.
2) Sayý ile baþlanmaz.
3) Kelimeler arasýnda boþluk olamaz.
4) Kelimeler arsýnda _ kullanýlabilir.
5) Birden fazla kelime varsa Camel Case kullanýlabilir. adSoyad
6) Birden fazla kelime varsa Snake kullanýlabir. ad_soyad

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
