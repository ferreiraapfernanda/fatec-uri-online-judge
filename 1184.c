//1184 - Abaixo da Diagonal Principal
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	double M[12][12], acc = 0;
	int linha, coluna, cont = 0;
	char oper;

	scanf("%c", &oper); //S ou M soma ou media

	for(linha = 0; linha < 12; linha++)
		for(coluna = 0; coluna < 12; coluna++) //leitura de todos os elemntos
			{
				scanf("%lf", &M[linha][coluna]);

				if (coluna < linha)
				{
					acc = acc + M[linha][coluna];
					cont++;
				}
			}

	if (oper == 'M')
	{
    	acc = acc / cont; // faz a media dentre os valores da coluna [66 = 11!]
    	printf("%.1lf\n", acc);
	}

    if (oper == 'S')
    {
    	printf("%.1lf\n", acc);
    }

	return 0;
}
