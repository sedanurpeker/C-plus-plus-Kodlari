#include<iostream>
using namespace std;
main()
{
	int derece;
	
	cout << "Bir derece giriniz:";
	cin >> derece;
	
	if (derece <= 0)
	{
		cout << "Su bu dercede katidir.";
	}
	
	else if (derece > 0 && derece < 100)
	{
		cout << "Su bu dercede sividir.";
	}
	
	else
	{
		cout << "Su bu dercede gazdir.";
	}
	
}
