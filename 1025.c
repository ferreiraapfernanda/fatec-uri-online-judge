//1025 - Onde está o Mármore?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compara(const void *p1, const void *p2)
{   int *i = (int *)p1, *j = (int *)p2;

    if (*i > *j)
        return 1;
    else
        if (*i == *j)
            return 0;
        else
            return -1;
}

int main ()
{
    int N, Q, cont, vResp, c, *p, caso = 0, b;

    scanf("%d %d", &N, &Q);

    do{
    int vetor[N+1];
        caso++;

        for(cont=0; cont<N; cont++){
            scanf("%d", &vetor[cont]);
        }

        qsort(vetor, N, sizeof(int), compara);

        for(c=0;c<Q;c++)
        {
            scanf("%d", &vResp);
            p = (int *) bsearch(&vResp, vetor, N, sizeof(int), compara);
			b = (int) (p - vetor);

			for(cont=0;cont<b;cont++)
			{
				if ( vResp == vetor[cont])
				{
					b = cont;
					break;
				}
			}

			if(c==0)
				printf("CASE# %d:\n", caso);

            if(p != NULL)
                printf("%d found at %d\n", vResp, (b+1));
                else
                printf("%d not found\n", vResp);

        }
        scanf("%d %d", &N, &Q);

    } while (N!= 0 || Q != 0);

    return 0;
}
