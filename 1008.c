//1008 - Salário
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()
{
	int NumFunc, HrTrab;
	double ValHr, SalFunc;

	cin >> NumFunc >> HrTrab >> ValHr;

	SalFunc = ValHr * HrTrab;

	cout << fixed << setprecision (2);
	cout << "NUMBER = " << NumFunc;
	cout << "\nSALARY = U$ " << SalFunc << endl;

	return 0;

}
