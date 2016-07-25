//1006 - Média 2
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double NotaA, NotaB, NotaC, Media;
	cin >> NotaA >> NotaB >> NotaC;

	Media = ((NotaA * 2.0) + (NotaB * 3.0) + (NotaC * 5.0)) /10;

	cout << fixed << setprecision (1);
	cout << "MEDIA = " << Media << endl;

	return 0;
}
