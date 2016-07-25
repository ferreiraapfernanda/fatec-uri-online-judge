//1013 - O Maior
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
	int A, B, C, Maior;

	cin >> A >> B >> C;

	if (A > B && A > C)
		Maior = A;

	else
	  if (B > A && B > C)
	  	Maior  = B;

	  else
	  	Maior = C;

	 cout << Maior << " eh o maior" << endl;
	return 0;
}
