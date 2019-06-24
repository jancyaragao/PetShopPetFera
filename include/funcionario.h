#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <string>
using namespace std;

class Funcionario {
	protected:
		int m_id;
		string m_nome;
		string m_cpf;
		short m_idade;
		short m_tipo_sanguineo;
		char m_fator_rh;
		string m_especialidade;
	public:
		Funcionario();
		Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade);
		virtual ~Funcionario();

		// Getters and Setters
		virtual void setId(int new_id) = 0;
		virtual int getId() = 0;

		virtual void setNome(string new_nome) = 0;
		virtual string getNome() = 0;

		virtual void setCpf(string new_cpf) = 0;
		virtual string getCpf() = 0;

		virtual void setIdade(short new_idade) = 0;
		virtual short getIdade() = 0;

		virtual void setTipo_sanguineo(short new_tipo_sanguineo) = 0;
		virtual short getTipo_sanguineo() = 0;

		virtual void setFator_rh(char new_fator_rh) = 0;
		virtual char getFator_rh() = 0;

		virtual void setEspecialidade(string new_especialidade) = 0;
		virtual string getEspecialidade() = 0;

}; /* Funcionario */

#endif
