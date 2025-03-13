#include<iostream>
#include<cstring>
using namespace std;
main()
{
/*
	char ad[3];
	ad[0] = 'A';
	ad[1] = 'l';
	ad[2] = 'i';
	printf("%s", ad);
*/
//	char ad[] = "Ali";
/*
	printf("%s\n", ad);
	printf("Byte olarak boyutu: %d\n", sizeof(ad));
	printf("Karakter sayisi: %d\n", strlen(ad));
*/
	
//	char *pt;
//	pt = ad;
//	printf("%s\n", pt);
//	printf("%c\n", pt[1]);
//	printf("%c\n", *(pt + 1));
//	pt++;
//	printf("%c\n", *pt);
	

	char ad[] = "Ali";
	char *p = ad;
	p[0] = 'E';
	printf("%s", p);



	
	
}
