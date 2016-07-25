//1467 - Zerinho ou Um
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()

{
	int A, B, C;
	char Vencedor;

	scanf("%d %d %d", &A, &B, &C);

	do
	{
		if (A==B && A==C && B==C) //todos iguais, ninguem ganha
			Vencedor = '*';
		else
			if (A!=B && B==C) // Alice ? diferente portanto ganha
				Vencedor = 'A';
			else
				if (A==C && B!=A) //Beto ? diferente = ganhador
					Vencedor = 'B';
				else
					if (A==B && C!=A) // Clara ganha
						Vencedor = 'C';

	printf("%c\n", Vencedor);

	} while ( (scanf("%d %d %d", &A, &B, &C)!=EOF));





	return 0;
}
