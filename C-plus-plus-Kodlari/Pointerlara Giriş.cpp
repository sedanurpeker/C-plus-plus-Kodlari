#include<iostream>
using namespace std;
main()
{
	int a = 15;
	int *pt;
	cout << "a degiskeninin degeri: " << a << endl;
	pt = &a;
	cout << "pointer adresi: " << pt << endl;
	cout << "pointerin isaret ettigi adresteki deger: " << *pt << endl;
	*pt = 25;
	cout << "a degiskeninin degeri: " << a << endl;
	
	printf("%p\n pointerin adresi", pt);  // %p veya %x pointerý ifade eder.
	
	
}	

