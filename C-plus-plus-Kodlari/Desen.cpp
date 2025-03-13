#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int i , j;
	/*
	char ad[] =	"Kalp";
	for(i=0; i<strlen(ad); i++)
	{
		for(j=0; j<= i; j++)
		{
			cout << ad[j];
		}
		cout << endl;
	}
	*/
	for(i=0; i<10; i++)
	{
		for(j=0; j<= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for(i=10; i>0; i--)
	{
		for(j=0; j<= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
