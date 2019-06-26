#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <QString>
using namespace std;

class Funcionario {
	protected:
		int m_id;
		QString m_nome;
		QString m_cpf;
		short m_idade;
		QString m_tipo_sanguineo;
		QString m_especialidade;
	public:
		Funcionario();
		Funcionario(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo, QString especialidade);
		virtual ~Funcionario();

		// Getters and Setters
		virtual void setId(int new_id) = 0;
		virtual int getId() = 0;

		virtual void setNome(QString new_nome) = 0;
		virtual QString getNome() = 0;

		virtual void setCpf(QString new_cpf) = 0;
		virtual QString getCpf() = 0;

		virtual void setIdade(short new_idade) = 0;
		virtual short getIdade() = 0;

		virtual void setTipo_sanguineo(QString new_tipo_sanguineo) = 0;
		virtual QString getTipo_sanguineo() = 0;

		virtual void setEspecialidade(QString new_especialidade) = 0;
		virtual QString getEspecialidade() = 0;

}; /* Funcionario */

#endif
