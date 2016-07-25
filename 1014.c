//1014 - Consumo
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int X;
	double Y, Consumo;

	cin >> X >> Y;

	Consumo = X / Y;

	cout << fixed << setprecision (3);
	cout << Consumo << " km/l" << endl;


	return 0;
}
