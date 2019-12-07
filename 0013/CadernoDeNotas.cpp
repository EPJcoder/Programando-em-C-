/*
	Programador: Euclydes Penteado Junior
	Data: 07/12/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Implementar a classe, validar o membro
	de dados da classe e inserir o 'contador' para controlar
	a iteração no loop.
*/

#include <iostream>
#include "CadernoDeNotas.h"

using namespace std;

CadernoDeNotas::CadernoDeNotas( string nome )
{
	setCursoNome( nome );
}

void CadernoDeNotas::setCursoNome( string nome )
{
	if( nome.size() <= 25 )
	{
		cursoNome = nome;
	}
	else
	{
		cursoNome = nome.substr( 0, 25 );
		cerr << "Nome \"" << nome << "\" excede o tamanho maximo de 25 caracteres.\n"
			<< "Limitamos o nome aos primeiros (25).\n" << endl;
	}
}

string CadernoDeNotas::getCursoNome() const
{
	return cursoNome;
}

void CadernoDeNotas::exibirMensagem() const
{
	cout << "Bem-Vindo ao Caderno de Notas:\n" << getCursoNome()
		<< " ! " << endl;
}

void CadernoDeNotas::mediaDasNotas() const
{
	int totalDeNotas = 0;
	unsigned contadorDeNotas = 1;

	while( contadorDeNotas <= 10 )
	{
		cout << "Digite a nota: ";

		int nota = 0;
		cin >> nota;
		totalDeNotas = totalDeNotas + nota;
		contadorDeNotas = contadorDeNotas + 1;
	}

	int media = 0;
	media = totalDeNotas / 10;

	cout << "O total da soma das notas: " << totalDeNotas << endl;
	cout << "A Media da classe: " << media << endl;
}