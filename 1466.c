//1466 - Percurso em Árvore por Nível
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_TAM 1000

struct regNo    {   struct regNo *esq;
                    int num;
                    struct regNo *dir;
                };
typedef struct regNo TArvore;

TArvore * FuncPai(TArvore *r, int n)
{   if(r == NULL)
        return NULL;
    else if (n == r->num){
        return r;
    }
    else if(n < r->num)
    {       if(r->esq == NULL)
                return r;
            else
                return FuncPai(r->esq, n);
    }
        else
        {
            if(r->dir == NULL)
                return r;
            else
                return FuncPai(r->dir, n);
        }
}


int main()
{   TArvore *raiz, *pai, *aux, *fila[MAX_TAM];
    int nVal, Ncasos, nC, cont, noh, contA, contB;

    scanf("%d", &Ncasos);

    for(nC=1; nC<=Ncasos; nC++)
    {
		for(cont=0;cont<MAX_TAM;cont++)
			fila[cont] = NULL;

        raiz = NULL;

        scanf("%d", &nVal);
        for(cont=0; cont<nVal; cont++)
        {
            scanf("%d", &noh);

            aux = (TArvore *) malloc(sizeof(TArvore));
            aux->num = noh;
            aux->esq = aux->dir = NULL;

            pai = FuncPai(raiz, noh);
            if(pai == NULL)
                raiz = aux;
            else if (pai->num != noh){
                if (noh < pai->num)
                    pai->esq = aux;

                else
                    pai->dir = aux;
            }
        }

        printf("Case %d:\n", nC);

        aux = raiz;
        contA = 1;
        contB  = 1;
        fila[0] = aux;
        while(aux != NULL){
            printf("%d", aux->num);

            if(aux->esq != NULL){
                fila[contA] = aux->esq;
                contA++;
            }

            if(aux->dir != NULL){
                fila[contA] = aux->dir;
                contA++;
            }

            if(fila[contB]!=NULL)
                printf(" ");

            aux = fila[contB];
            contB++;
        }

        printf("\n\n");
    }

    return 0;
}
