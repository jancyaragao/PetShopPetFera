#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade
	public:
		Funcionario( void );
		~Funcionario( void );
};

#endif