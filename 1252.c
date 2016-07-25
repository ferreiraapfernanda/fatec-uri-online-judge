//1252 - Sort! Sort!! e Sort!!!
// https://www.urionlinejudge.com.br/judge/pt/problems/view/1252
// 1252 - Sort! Sort!! e Sort!!!

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

/*ordenar na ordem ascendente
de acordo com o m?dulo de M

empate IMPAR e PAR, IMPAR vem antes
empate IMPAR e IMPAR, MAIOR IMPAR vem antes
empate PAR e PAR, MENOR PAR vem antes
*/

int M;


bool comp (int a, int b){
    if (b%M == a%M){ /// retorna primeiro os impares e depois os pares;
        if(abs(a)%2 ==abs(b)%2){ ///comparando dois pares ou dois impares
            if (a%2 != 0){ ///impares
                return a > b;
            }else{ ///a e b s?o pares
                return b > a;
            }
        }
        return abs(a)%2 > abs(b)%2; /// impares antes dos pares
    }
    return a%M < b%M;
}

int main()
{
	int N, cont;

	scanf("%d", &N);
	scanf("%d", &M);

	while(N!=0 && M!=0)
	{
		int vetor[N];
		printf("%d %d\n", N, M);

		for(cont=0;cont<N;cont++){
			scanf("%d", &vetor[cont]);
		}

		sort(vetor,vetor+N,comp);

		for(cont=0;cont<N;cont++){
			printf("%d\n", vetor[cont]);
		}

		scanf("%d", &N);
		scanf("%d", &M);

	}
	printf("0 0\n");

	return 0;
}
