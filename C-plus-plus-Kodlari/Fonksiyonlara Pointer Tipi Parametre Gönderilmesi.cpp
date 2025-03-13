#include<iostream>
using namespace std;

int topla(int *pt, int boyut)
{
	int toplam = 0, i;
	
	for (i = 0; i < boyut; i++)
	{
		toplam += *(pt + i);
		printf("%d : %d\n", *(pt + i), (pt + 1));
	}
	return toplam;
}

main()
{
	int sayilar[] = {63, 29, 87, 103, 46, 59, 2, 105};
	printf("%d", topla(sayilar, 8));
}
