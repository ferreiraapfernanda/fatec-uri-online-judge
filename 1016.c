//1016 - Distância

//diferença entre os dois carros ? de 30km/h
// 60 min - 30 km
// x min - distancia

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main()
{
int distancia, tempoalcance;

scanf("%i", &distancia);

tempoalcance = (60 * distancia) / 30;

printf("%i minutos\n", tempoalcance);

	return 0;
}
