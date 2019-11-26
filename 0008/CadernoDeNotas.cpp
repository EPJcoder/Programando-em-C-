/*
	Programador: Euclydes Penteado Junior
	Data: 26/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Instanciar uma classe e definir funções set e
	get.
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class CadernoDeNotas
{
public:
	void setCursoNome( string nome )
	{
		cursoNome = nome;
	}

	string getCursoNome() const
	{
		return cursoNome;
	}

	void ExbirMensagem() const
	{
		cout << "Bem-Vindo ao Caderno de Notas:\n" << getCursoNome()
			<< "!\n" << endl;
	}

private:
	string cursoNome;
};

int main()
{
	string nomeDoCurso;
	CadernoDeNotas meuCadernoDeNotas;

	cout << "Nome inicial do curso: " << meuCadernoDeNotas.getCursoNome()
		<< endl;

	cout << "Por favor, digite o nome do curso: " << endl;
	getline( cin, nomeDoCurso );
	meuCadernoDeNotas.setCursoNome( nomeDoCurso );
	cout << endl;

	meuCadernoDeNotas.ExbirMensagem();

	system("PAUSE");
	return 0;
}