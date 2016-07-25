//1015 - Distância Entre Dois Pontos
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>


int main()
{
	int X1, X2, Y1, Y2;
	double Distancia;

	scanf("%i %i", &X1, &Y1);
	scanf("%i %i", &X2, &Y2);

	Distancia = sqrt (pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

	printf("%.4lf\n", Distancia);

	return 0;
}
