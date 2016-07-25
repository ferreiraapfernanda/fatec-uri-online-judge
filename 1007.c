//1007 - Diferença
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>


int main()
{
	int A, B, C, D;
	signed int dif;
	scanf("%i %i %i %i", &A, &B, &C, &D);

	dif = ((A*B)-(C*D));

	printf("DIFERENCA = %i\n", dif);

	return 0;
}
