#include<iostream>
using namespace std;
main()
{
	int vize, final;
	float ort;
	
	cout << "Vize notunuzu giriniz:";
	cin >> vize;
	
	cout << "Final notunuzu giriniz:";
	cin >> final;
	
	ort = (vize * 0.3) + (final * 0.7);
	
	cout << ort << endl;
	
	if(ort > 50 && final > 50)
	{
		cout << "Gectiniz.";
	}
	
	else
	{
		cout << "Kaldiniz.";
	}
}
