/*
	Programador: Euclydes Penteado Junior
	Data: 03/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Implementar a classe e validar o membro
	de dados da classe
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

	if( nome.size() > 25 )
	{
		cursoNome = nome.substr( 0, 25 );

		cerr << "Nome \"" << nome << "\" excede o comprimento maximo(25).\n"
			"Limitamos a exibicao do nome em 25 caracteres.\n" << endl;
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