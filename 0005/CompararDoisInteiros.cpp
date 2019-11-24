/*
	Programador: Euclydes Penteado Junior
	Data: 22/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Comparar dois números inteiros
*/

#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int primeiroNumero = 0;
	int segundoNumero = 0;

	cout << "Entre com dois numeros para comparacao: ";
	cin >> primeiroNumero >> segundoNumero;

	if( primeiroNumero == segundoNumero )
	{
		cout << primeiroNumero << " == " << segundoNumero << endl;
	}

	if( primeiroNumero != segundoNumero )
	{
		cout << primeiroNumero << " != " << segundoNumero << endl;
	}

	if( primeiroNumero < segundoNumero )
	{
		cout << primeiroNumero << " < " << segundoNumero << endl;
	}

	if( primeiroNumero > segundoNumero )
	{
		cout << primeiroNumero << " > " << segundoNumero << endl;
	}

	if( primeiroNumero <= segundoNumero )
	{
		cout << primeiroNumero << " <= " << segundoNumero << endl;
	}

	if( primeiroNumero >= segundoNumero )
	{
		cout << primeiroNumero << " >= " << segundoNumero << endl;
	}

	system("PAUSE");
	return 0;
}