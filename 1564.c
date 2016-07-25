//1564 - Vai Ter Copa?
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main ()
{
    int reclama;

    while(scanf("%d", &reclama) != EOF)
	{
        if (reclama == 0)
		{
            printf("vai ter copa!\n");
        }
		else
		{
            printf("vai ter duas!\n");
        }
    }
return 0;
}
