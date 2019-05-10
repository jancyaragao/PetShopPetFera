#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

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
		string m_especialidade;

	public:
		Funcionario();
		~Funcionario();

		// Getters and Setters
		void setId(int new_id);
		int getId();

		void setNome(string new_nome);
		string getNome();

		void setCpf(string new_cpf);
		string getCpf();

		void setIdade(short new_idade);
		short getIdade();

		void setTipo_sanguineo(short new_tipo_sanguineo);
		short getTipo_sanguineo();

		void setFator_rh(char new_fator_rh);
		char getFator_rh();

		void setEspecialidade(string new_especialidade);
		string getEspecialidade();

}; /* Funcionario */

#endif