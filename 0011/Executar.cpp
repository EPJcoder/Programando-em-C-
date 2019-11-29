/*
	Programador: Euclydes Penteado Junior
	Data: 29/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Definir a função principal e incluir
	o Header CadernoDeNotas.h(como Header criado pelo usuário)
*/

#include <iostream>
#include <cstdlib>
#include "CadernoDeNotas.h"

using namespace std;

int main()
{
	CadernoDeNotas meuCadernoDeNotas( "CS101 Introducao ao C++" );
	CadernoDeNotas meuCadernoDeNotas2( "CS102 Estrutura de Dados em C++\n" );

	cout << "Caderno de Notas criado para o curso: "
		<< meuCadernoDeNotas.getCursoNome()
		<< "\nCaderno de Notas 02 criado para o curso: "
		<< meuCadernoDeNotas2.getCursoNome()
		<< endl;

	system("PAUSE");
	return 0;
}