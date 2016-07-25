//1009 - Salário com Bônus
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

int main ()
{
	char Nome[20];
	double SalFixo, Vendas, Total;

	fgets(Nome, 20, stdin);
	scanf("%lf", &SalFixo);
	scanf("%lf", &Vendas);

	Total = SalFixo + (Vendas * 0.15);

	printf("TOTAL = R$ %.2lf\n", Total);

	return 0;

}
