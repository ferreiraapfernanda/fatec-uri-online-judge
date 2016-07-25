//1068 - Balanço de Parênteses I
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

struct exp 	{	char par;
					struct exp *prox;
				};
typedef struct exp Texp;

struct descrPilha 	{ 	Texp *topo;
						int qtd;
					};
typedef struct descrPilha DPilha;

int main()
{
	char exp[3000] = "";
	int c, sai;
	DPilha	d;
	Texp *aux;

	while (scanf("%s", exp) != EOF)
	{
		d.topo = NULL;
		d.qtd = c =	sai = 0;

		do
		{
			if(exp[c] == '(')
			{
				aux = (Texp *) malloc(sizeof(Texp));

				if(aux == NULL)
					break;

				aux->par = exp[c];
				aux->prox = d.topo;

				d.topo = aux;
				d.qtd++;
			}

			if(exp[c] == ')')

			{
				if(d.topo == NULL)
				{
					sai = 1;
					break;
				}

				else
				{
					aux = d.topo;
					d.topo = aux->prox;
					free(aux);
					d.qtd--;
				}
			}
			c++;
		} while (c < strlen(exp));

		if ((sai ==1) || d.qtd != 0)
			printf("incorrect\n");

		else
			printf("correct\n");
	}

	return 0;
}
