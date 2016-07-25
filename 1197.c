//1197 - Volta à Faculdade de Física
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int t, v, saida;

	scanf("%d %d", &v, &t);

	do
	{
		saida = (t*2) * v;
		printf("%d\n", saida);
	} while ( scanf("%d %d", &v, &t) != EOF );

	return 0;
}
