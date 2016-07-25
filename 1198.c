//1198 - O Bravo Guerreiro Hashmat
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main ()
{
	long long int hash, op, dif;

	while( scanf("%lld %lld", &hash, &op) != EOF)
	{
		if (hash>=op)
		{
			dif = hash - op;
			printf("%lld\n", dif);
		}
		else
		{
			dif = op - hash;
			printf("%lld\n", dif);
		}
	}
	return 0;
}
