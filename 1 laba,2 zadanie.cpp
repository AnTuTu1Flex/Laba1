#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUSSIAN");

	int x, y, a, w, znam, chisl, vichit, drob;
	double kor;

	const float e = 2.71;

	std::cout << "Введите число x\n";
	std::cin >> x;

	std::cout << "Введите число y\n";
	std::cin >> y;

	std::cout << "Введите число a\n";
	std::cin >> a;

	std::cout << "Введите число w\n";
	std::cin >> w;



	chisl = abs(x - y);
	znam = pow(pow((1 + 2 * x), a), w);
	drob = chisl / znam;


	vichit = pow(e, sqrtf(1 + w));
	cout << "Значение выражения =" << drob - vichit;

	return 0;
}
