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
		string m_tipo_sanguineo;
		string m_especialidade;
	public:
		Funcionario();
		Funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo, string especialidade);
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

		virtual void setTipo_sanguineo(string new_tipo_sanguineo) = 0;
		virtual string getTipo_sanguineo() = 0;

		virtual void setEspecialidade(string new_especialidade) = 0;
		virtual string getEspecialidade() = 0;

}; /* Funcionario */

#endif
