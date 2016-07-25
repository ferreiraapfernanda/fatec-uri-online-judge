//1036 - Fórmula de Bhaskara
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>

int main()
{
	double a, b, c, delt, x1, x2;

	scanf("%lf %lf %lf", &a, &b, &c);

	delt = (pow(b,2)) - (4 * a * c);

	if (delt <=0 || a == 0)
		printf("Impossivel calcular\n");
	else
	{
		x1 = (-b + sqrt(delt)) / (2 * a);
		x2 = (-b - sqrt(delt)) / (2 * a);
		printf("R1 = %.5lf\n", x1);
		printf("R2 = %.5lf\n", x2);
	}


	return 0;
}
