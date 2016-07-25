//1005 - Média 1
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double NotaA, NotaB, Media;
	cin >> NotaA >> NotaB;

	Media = ((NotaA * 3.5) + (NotaB * 7.5)) /11;

	cout << fixed << setprecision (5);
	cout << "MEDIA = " << Media << endl;

	return 0;
}
