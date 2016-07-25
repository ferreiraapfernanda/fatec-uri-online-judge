//1329 - Cara ou Coroa
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
	int c, N, val, Maria = 0 , Joao = 0;

	scanf("%d", &N);

	do
	{
		Maria = 0;
		Joao = 0;

		for(c = 0; c < N; c++)
		{
			scanf("%d", &val);

			if(val==0)
				Maria++;
			else
				if (val == 1)
				Joao++;
		}

	printf("Mary won %d times and John won %d times\n", Maria, Joao);

	scanf("%d", &N);

	} while (N != 0);

	return 0;
}
