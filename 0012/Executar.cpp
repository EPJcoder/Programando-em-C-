/*
	Programador: Euclydes Penteado Junior
	Data: 03/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Definir a função principal e incluir
	o Header CadernoDeNotas.h(como Header criado pelo usuário)

	Atenção! Para compilar todos arquivos em um executável(usando o
	compilador g++) digite no prompt: g++ -o Executar *.cpp
*/

#include <iostream>
#include <cstdlib>
#include "CadernoDeNotas.h"

using namespace std;

int main()
{
	CadernoDeNotas meuCadernoDeNotas( "CS101 Introducao ao programando C++" );
	CadernoDeNotas meuCadernoDeNotas2( "CS102 Estrutura de Dados em C++\n" );

	cout << "Caderno de Notas criado para o curso: "
		<< meuCadernoDeNotas.getCursoNome()
		<< "\nCaderno de Notas 02 criado para o curso: "
		<< meuCadernoDeNotas2.getCursoNome() << endl;

	meuCadernoDeNotas.setCursoNome( "CS101 Introducao ao C++" );

	cout << "Caderno de Notas nome inicial: "
		<< meuCadernoDeNotas.getCursoNome()
		<< "\nCaderno de Notas 02 nome inicial: "
		<< meuCadernoDeNotas2.getCursoNome() << endl;

	system("PAUSE");
	return 0;
}