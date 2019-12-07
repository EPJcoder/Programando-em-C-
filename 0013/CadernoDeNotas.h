/*
	Programador: Euclydes Penteado Junior
	Data: 07/12/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Definir a interface pública da classe
*/

#include <string>

class CadernoDeNotas
{
public:
	explicit CadernoDeNotas( std::string );
	void setCursoNome( std::string );
	std::string getCursoNome() const;
	void exibirMensagem() const;
	void mediaDasNotas() const;
private:
	std::string cursoNome;
};