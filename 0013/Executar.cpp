/*
	Programador: Euclydes Penteado Junior
	Data: 07/12/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Incluir o Header CadernoDeNotas.h
	no arquivo principal(main).

	Atenção! Para compilar todos arquivos em um executável
	(usando o compilador g++) digite no prompt: g++ -o Executar *.cpp
*/

#include <cstdlib>
#include "CadernoDeNotas.h"

int main()
{
	CadernoDeNotas meuCadernoDeNotas( "CS101 Introducao ao C++" );

	meuCadernoDeNotas.exibirMensagem();
	meuCadernoDeNotas.mediaDasNotas();

	system("PAUSE");
	return 0;
}