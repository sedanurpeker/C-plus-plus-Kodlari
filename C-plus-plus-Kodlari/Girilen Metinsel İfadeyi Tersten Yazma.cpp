#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
char *tersptr;
void ters_yaz(char * cp)
{
	int uzunluk = strlen(cp) - 1;
	tersptr = (char*)calloc(uzunluk, sizeof(char));
	for(int i = uzunluk; i >= 0; i--)
	{
		tersptr[uzunluk - i] = cp[i];
	}
}
main()
{
	char *metin;
	metin = "Bilisim dunyasi C ve C++ derslerine hosgeldiniz.";
	ters_yaz(metin);
	cout << tersptr;
	
	
	
	
}
