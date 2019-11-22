/*
	Programador: Euclydes Penteado Junior
	Data: 22/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Somar dois inteiros
*/

#include <iostream>

int main()
{
	int primeiroNumero = 0;
	int segundoNumero = 0;
	int soma = 0;

	std::cout << "Entre com o primeiro numero: ";
	std::cin >> primeiroNumero;

	std::cout << "Entre com o segundo numero: ";
	std::cin >> segundoNumero;

	soma = ( primeiroNumero + segundoNumero );

	std::cout << "Soma: " << soma << std::endl;

	return 0;
}