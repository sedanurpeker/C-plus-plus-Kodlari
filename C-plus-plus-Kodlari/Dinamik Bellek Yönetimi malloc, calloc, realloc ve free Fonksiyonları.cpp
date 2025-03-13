/*
	malloc : Programýn çalþma anýnýnda belirli bir bellek alanýný tahsis eder.
	calloc : Programýn çalþma anýnýnda belirli bir bellek alanýný tahsis eder ve bu alaný sýfýrlar.
	realloc: malloc veya calloc ile tahsis edilen bellek alanýný büyütmek veya küçültmek için kullanýlýr.
	free   : Tahsis edilen bellek alanýný sebest býrakýr. 
*/

#include<iostream>
#include<cstdlib>
using namespace std;
main()
{
/*			Statik Dizi
	int dizi[3];
	dizi[0] = 20;
	dizi[1] = 55;
	dizi[2] = 26;
	dizi[3] = 9;
	
	cout << dizi << endl;
	
	for(int i = 0; i < 10; i++)
	{
		cout << dizi[i] << endl;
	}
*/
	
	int *p;
	p = (int *)calloc(10, sizeof(int));
	for(int i = 0; i < 10; i++)
	{
		p[i] = i;
	}
	for(int i = 0; i < 10; i++)
	{
		cout << p[i] << endl;
	}
	
	
	
	p = (int *)realloc(p, 10 * sizeof(int));
	
	for(int i = 10; i < 20; i++) {
		p[i] = i;
	}
	
	for(int i= 0; i < 20; i++){
		cout << p[i] << endl;
	}
	free(p);
  return 0;
	
	
	
	
	
	
	
}











