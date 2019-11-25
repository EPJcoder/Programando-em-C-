/*
	Programador: Euclydes Penteado Junior
	Data: 25/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Instanciar uma classe e chamar uma função pública com
	passagem de parâmetro.
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class CadernoDeNotas
{
public:
	void ExibirMensagem( string cursoNome ) const
	{
		cout << "Bem-Vindo ao Caderno de Notas para o curso: "
			<< cursoNome << "!" << endl;
	}
};

int main()
{
	string nomeDoCurso;
	CadernoDeNotas meuCadernoDeNotas;

	cout << "Por favor, digite o nome do curso: ";
	getline( cin, nomeDoCurso );
	cout << endl;

	meuCadernoDeNotas.ExibirMensagem( nomeDoCurso );

	system("PAUSE");
	return 0;
}