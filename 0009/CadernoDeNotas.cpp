/*
	Programador: Euclydes Penteado Junior
	Data: 26/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Inicializar múltiplos objetos e
	uso de construtor(explícito) na classe
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class CadernoDeNotas
{
public:
	explicit CadernoDeNotas( string nome )
		:	cursoNome( nome )
	{

	}

	void setCursoNome( string nome )
	{
		cursoNome = nome;
	}

	string getCursoNome() const
	{
		return cursoNome;
	}

	void ExibirMensagem() const
	{
		cout << "Bem-Vindo ao Caderno de Notas: " << getCursoNome()
			<< "!" << endl;
	}

private:
	string cursoNome;
};

int main()
{
	CadernoDeNotas meuCadernoDeNotas( "CS101 Introducao ao C++" );
	CadernoDeNotas meuCadernoDeNotas02( "CS102 Estrutura de Dados em C++\n" );

	cout << "Caderno de Notas criado para o curso: "
		<< meuCadernoDeNotas.getCursoNome()
		<< "\nCaderno de Notas 02 criado para o curso: "
		<< meuCadernoDeNotas02.getCursoNome()
		<< endl;

	system("PAUSE");
	return 0;
}