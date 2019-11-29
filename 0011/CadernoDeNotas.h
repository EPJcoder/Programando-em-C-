#include <string>

class CadernoDeNotas
{
public:
	explicit CadernoDeNotas( std::string );
	void setCursoNome( std::string );
	std::string getCursoNome() const;
	void exibirMensagem() const;
private:
	std::string cursoNome;
};
