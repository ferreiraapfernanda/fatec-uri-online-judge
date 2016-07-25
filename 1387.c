//1387 - Og
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main ()
{
	int L, R, total;

	scanf("%d %d", &L, &R);

	while( (L !=0) && (R != 0))
		{
			total = L + R;
			printf("%d\n", total);

			scanf("%d %d", &L, &R);
		}

	return 0;
}
