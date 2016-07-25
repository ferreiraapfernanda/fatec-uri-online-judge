//1018 - Cédulas
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	int Valor, ValorIni, ncem = 0 , ncinq = 0, nvinte = 0, ndez = 0, ncinco = 0 , ndois= 0 , num = 0;

	cin >> Valor;

	ValorIni = Valor;

	if (Valor >= 100)
	{
		ncem = Valor / 100;
		Valor = Valor - (ncem * 100);
	}

	if (Valor >= 50)
	{
		ncinq = Valor / 50;
		Valor = Valor - (ncinq * 50);
	}

	if (Valor >= 20){
		nvinte = Valor / 20;
		Valor = Valor - (nvinte * 20);}

	if (Valor >= 10)
	{
		ndez = Valor / 10;
		Valor = Valor - (ndez * 10);
	}

	if (Valor >= 5)
	{
		ncinco = Valor / 5;
		Valor = Valor - (ncinco * 5);
	}

	if (Valor >= 2)
	{
		ndois = Valor / 2;
		Valor = Valor - (ndois * 2);
	}
	else
		num = Valor;

	cout << ValorIni << endl;
	cout << ncem << " nota(s) de R$ 100,00" << endl;
	cout << ncinq << " nota(s) de R$ 50,00" << endl;
	cout << nvinte << " nota(s) de R$ 20,00" << endl;
	cout << ndez << " nota(s) de R$ 10,00" << endl;
	cout << ncinco << " nota(s) de R$ 5,00" << endl;
	cout << ndois << " nota(s) de R$ 2,00" << endl;
	cout << num << " nota(s) de R$ 1,00" << endl;

	return 0;
}
