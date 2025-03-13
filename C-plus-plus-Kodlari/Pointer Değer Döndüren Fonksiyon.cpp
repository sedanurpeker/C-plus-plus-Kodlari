#include<iostream>
using namespace std;
char *ara(char *p, char karakter)
{
	while (*p != '\0')
	{
		if (*p == karakter)
		{
			return p;
		}
		p++;
	}
}
main()
{
	char metin[] = "Bilisim Dunyasi";
	char *pr = ara(metin, 'y');
	if(pr)
	{
		printf("Karakteriniz %x adresinde bulundu.\n", pr);
	}
	else
	{
		printf("Karakteriniz bulunamadý.\n");
	}
	printf("%x	%c", (pr + 1), *(pr + 1));
}
