//1069 - Diamantes e Areia
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct Diamt	{	char diamante;
					struct Diamt *prox;
				};
typedef struct Diamt TDiamt;

struct descrPilha { TDiamt *topo;};
typedef struct descrPilha DPilha;

int main()
{
	char linha[1010] = "";
	DPilha	descritor;
	TDiamt *aux, *aux2;
	int N = 0, Dqtd =0, c = 0, d=0;

	scanf("%d", &N);

	while(c < N)
	{
		scanf("%s", linha);

		descritor.topo = NULL;
		d = 0;
		Dqtd = 0;

		while(d < strlen(linha))
		{
			if(linha[d] == '<')
			{
				aux = (TDiamt *) malloc(sizeof(TDiamt));

				if(aux == NULL)
					break;

				aux->diamante = linha[d];
				aux->prox = descritor.topo;

				descritor.topo = aux;
			}

			else if(linha[d] == '>')
			{
				if(descritor.topo != NULL)
				{
					aux2 = descritor.topo;
					descritor.topo = aux2->prox;
					free(aux2);
					Dqtd++;
				}
			}
			d++;
		}
		printf("%d\n", Dqtd);
		c++;
	}

	return 0;
}
