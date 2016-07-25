//1017 - Gasto de Combustível
//velocidade - 1h
// distancia(X) - tempo

// 12km - 1 l
// distancia - litros gastos (X)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int tempo, veloc;
	double quantperco, litrosgastos;

	cin >> tempo >> veloc;

	quantperco = veloc * tempo;
	litrosgastos = quantperco / 12;

	cout << fixed << setprecision (3);
	cout << litrosgastos << endl;

	return 0;
}
