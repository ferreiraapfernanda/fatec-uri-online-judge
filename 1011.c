//1011 - Esfera
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int Raio;
	double Volume;

	cin >> Raio;

	Volume = (4/3.0) * 3.14159 * pow (Raio,3.0);

	cout << fixed << setprecision (3);
	cout << "VOLUME = " << Volume << endl;

	return 0;
}
