/*
	Programador: Euclydes Penteado Junior
	Data: 27/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Definir a classe CadernoDeNotas
	independente da função main. Ou seja, em
	um arquivo separado.
*/

#include <iostream>
#include <string>

class CadernoDeNotas
{
public:
	explicit CadernoDeNotas( std::string nome )
		:	cursoNome( nome )
	{

	}

	void setCursoNome( std::string nome )
	{
		cursoNome = nome;
	}

	std::string getCursoNome() const
	{
		return cursoNome;
	}

	void exibirMensagem() const
	{
		std::cout << "Bem-Vindo ao Caderno de Notas: " << getCursoNome()
			<< std::endl;
	}

private:
	std::string cursoNome;
};