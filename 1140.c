//1140 - Flores Florescem da França
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int main()
{
	char str[1050], compara[2], resultado[2];
	int c;

	fgets( str, 1050, stdin );

	do
	{

		for (c=0; c < strlen(str); c++)
			str[c]=tolower(str[c]);

		compara[0] = str[0];

		resultado[0] = 'Y';

		for (c=0; c < strlen(str); c++)
		{
			if (str[c] == ' ')
			{
				if(compara[0] != str[c+1])
				{
					resultado[0] = 'N';

				}
				else
				{
					if (resultado[0] != 'N')
						resultado[0] = 'Y';
				}

			}
		}
	printf("%c\n", resultado[0]);

	fgets( str, 1050, stdin );
	}

	while (str[0] != '*' || str[0] == ' ' || str[c] == '	' || str[c] == '  ');

	return 0;
}
