#include<iostream>
using namespace std;
main()
{
	int puan;
	
	cout << "Puaninizi giriniz:";
	cin >> puan;
	
	switch (puan)
	{
		case 90 ... 100:
			{
				cout << "AA";
				break;
			}
		case 80 ... 89:
		{
			cout << "BA";
			break;
		}
		case 70 ... 79:
		{
			cout << "BB";
			break;
		}
		case 60 ... 69:
		{
			cout << "CB";
			break;
		}
		case 50 ... 59:
		{
			cout << "CC";
			break;
		}
		case 40 ... 49:
		{
			cout << "DC";
			break;
		}
		case 30 ... 39:
		{
			cout << "DD";
			break;
		}
		default:
		{
			cout << "Gecersiz not girdiniz.";
			break;
		}
	}
	
	
	
	
}
