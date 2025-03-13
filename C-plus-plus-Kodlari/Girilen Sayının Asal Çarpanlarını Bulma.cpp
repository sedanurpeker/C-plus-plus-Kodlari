#include<iostream>
using namespace std;
main()
{
	int sayi, i, bolen = 2;
	
	cout << "Bir sayi giriniz:";
	cin >> sayi;
	
	while (sayi >= bolen)
	{
		if (sayi % bolen == 0)
		{
			sayi /= bolen;
			
			cout << bolen << endl;
		}
		else
		{
			bolen += 1;
		}
	}
	
	
	
}
