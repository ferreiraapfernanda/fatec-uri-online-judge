//1012 - Área
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	double A, B, C, ATrianRet, ACirc, ATrap, AQuad, ARet;

	cin >> A >>	B >> C;

	ATrianRet = (A * C) / 2;

	ACirc = 3.14159 * pow(C,2);

	ATrap = ((A + B) * C ) / 2;

	AQuad = pow(B,2);

	ARet = A * B;

	cout << fixed << setprecision (3);

	cout << "TRIANGULO: " << ATrianRet << endl;
	cout << "CIRCULO: " << ACirc << endl;
	cout << "TRAPEZIO: " << ATrap << endl;
	cout << "QUADRADO: " << AQuad << endl;
	cout << "RETANGULO: " << ARet << endl;

	return 0;
}
