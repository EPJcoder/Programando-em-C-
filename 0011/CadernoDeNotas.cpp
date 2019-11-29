/*
	Programador: Euclydes Penteado Junior
	Data: 29/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Definir funções membro da classe
*/

#include <iostream>
#include "CadernoDeNotas.h"

using namespace std;

CadernoDeNotas::CadernoDeNotas( string nome )
	: cursoNome( nome )
{

}

void CadernoDeNotas::setCursoNome( string nome )
{
	cursoNome = nome;
}

string CadernoDeNotas::getCursoNome() const
{
	return cursoNome;
}

void CadernoDeNotas::exibirMensagem() const
{
	cout << "Bem-Vindo ao Caderno de Notas: " << getCursoNome()
		<< "!" << endl;
}