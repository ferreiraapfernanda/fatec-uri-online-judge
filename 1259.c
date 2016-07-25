//1259 - Pares e Ímpares
//https://www.urionlinejudge.com.br/judge/pt/problems/view/1259

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int compara(const void *p1, const void *p2)
{ int *i = (int *)p1, *j = (int *)p2;

if (*i > *j)
	return 1;
else
	if (*i == *j)
		return 0;
	else
		return -1;
}

int compara2(const void *p1, const void *p2)
{ int *i = (int *)p1, *j = (int *)p2;

if (*i < *j)
	return 1;
else
	if (*i == *j)
		return 0;
	else
		return -1;
}

int main ()
{

	int N, c = 0, aux, d = 0, cont = 0, con = 0, tamPar = 0, tamFinal = 0, tamImpar = 0;

	scanf("%d", &N);

	int vPar[N], vImpar[N], vFinal[N];

	do
	{
		scanf("%d", &aux);

		if(aux%2 == 0) {
			vPar[c] = aux;
			c++;
		}
		else {
			vImpar[d] = aux;
			d++;
		}
	cont++;
	} while(cont<N);

	tamPar = c;
	tamImpar = d;

	qsort(vPar, tamPar, sizeof(int), compara);
	qsort(vImpar, tamImpar, sizeof(int), compara2);

	aux = 0;
	c = 0;
	d = 0;

	for(aux=0;aux<N;aux++)
	{
		for(c=0;c<tamPar;c++){
			vFinal[aux] = vPar[c];
			aux++;
		}

		for(d=0;d<tamImpar;d++){
			vFinal[aux] = vImpar[d];
			aux++;
		}
	}

	for(aux=0;aux<N;aux++)
		printf("%d\n", vFinal[aux]);

	return 0;
}
