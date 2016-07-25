//1010 - Cálculo Simples
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int CodPec1, CodPec2, NumPec1, NumPec2;
	double ValorPec1, ValorPec2, Total;

	cin >> CodPec1 >> NumPec1 >> ValorPec1;
	cin >> CodPec2 >> NumPec2 >> ValorPec2;

	Total = (NumPec1 * ValorPec1) + (NumPec2 * ValorPec2);

	cout << fixed << setprecision (2);
	cout << "VALOR A PAGAR: R$ " << Total << endl;

	return 0;
}
