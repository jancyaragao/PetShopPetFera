#ifndef VETERINARIO_H_
#define VETERINARIO_H_

#include <QString>

#include "funcionario.h"

//using namespace std;

class Veterinario: public Funcionario {
	protected:
		QString m_crmv;
		
	public:
		Veterinario();
		Veterinario(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
        QString especialidade, QString crmv);
		~Veterinario();

		// Getters and Setters
		void setCrmv(QString new_crmv);
		QString getCrmv();

		// Getters and Setters
		void setNivel_de_seguranca(int new_nivel_de_seguranca);
		int getNivel_de_seguranca();
		void setId(int new_id);
		int getId();
		void setNome(QString new_nome);
		QString getNome();
		void setCpf(QString new_cpf);
		QString getCpf();
		void setIdade(short new_idade);
		short getIdade();
		void setTipo_sanguineo(QString new_tipo_sanguineo);
		QString getTipo_sanguineo();
		void setEspecialidade(QString new_especialidade);
		QString getEspecialidade();
		
}; /* Veterinario */

#endif
