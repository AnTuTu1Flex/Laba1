#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	double pi = 3.14;
	int a, h, R ,l=2;
	char y;
	bool work = true;
	cout << "T - S Pravilnogo treugol'nika\n";
	cout << "C - S Kruga\n";
	cout << "P - S Parallelogramma\n";
	cout << "E - Exit\n";
	
	//while ( work==true )
	for (; ;) 
	{
		cin >> y;
		if (y == 'T') 
		{
			cout << "Vvedite dannie dlya podscheta\n  ";
			cin >> a >> h;
			cout << "S treugol'nika = " << (a*h) / 2 <<"\n";
		
		}
		

		if (y == 'C') 
		 {
			cout << "Vvedite dannie dlya podscheta\n ";
			cin >> R;
			cout << "S kruga = " << pi * pow(R, l) << "\n";
			
		}
		
		if (y == 'P') 
		{
			cout << "Vvedite dannie dlya podscheta\n ";
			cin >> a >> h; 
			cout << "S parallelogramma = " << a * h;

		}
		

		if (y == 'E') 
		{
		
			return 0;
		}
	}
	
	
}