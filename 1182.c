//1182 - Coluna na Matriz
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double M[12][12], acc = 0;
	int linha, coluna, c = 0;
	char oper;

	scanf("%i", &c); //coluna

	scanf("%c", &oper);
	oper = getchar(); //S ou M soma ou media

	for(linha = 0; linha < 12; linha++)
		for(coluna = 0; coluna < 12; coluna++) //leitura de todos os elemntos
			scanf("%lf", &M[linha][coluna]);

	for(linha = 0; linha < 12;linha++)
    		acc = acc + M[linha][c]; // acumular os valores da coluna

	if (oper == 'M')
	{
    	acc = acc / 12; // faz a media dentre os valores da coluna
    	printf("%.1lf\n", acc);
	}
    if (oper == 'S')
    {
    	printf("%.1lf\n", acc);
    }

	return 0;
}
