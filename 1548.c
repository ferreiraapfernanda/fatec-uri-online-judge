//1548 - Fila do Recreio
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define TRUE  1
#define FALSE 0

int main()
{
	int  Ncasos= 0, Malunos = 0, c, d, k, aux, qtd;
	int vAntes[1000], vDepois[1000];
	char trocas;

	scanf("%d", &Ncasos);

	for(c=0; c < Ncasos; c++)
	{
		qtd=0;
		scanf("%d", &Malunos);

		for(d=0; d < Malunos; d++)
		{
			scanf("%d", &vAntes[d]);
			vDepois[d] = vAntes[d];
		}

		do
		{
			trocas = FALSE;
			k = 0;
			while (k < Malunos - 1)
			{	if (vDepois[k] < vDepois[k + 1])
				{	aux = vDepois[k];
					vDepois[k] = vDepois[k + 1];
					vDepois[k + 1] = aux;

					trocas = TRUE;
				}
				k++;
			}
		} while (trocas == TRUE);

		for(d=0; d < Malunos; d++)
			if (vAntes[d] == vDepois[d])
				qtd++;

		printf("%d\n", qtd);
	}

	return 0;
}
