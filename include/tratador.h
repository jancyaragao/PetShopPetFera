#ifndef TRATADOR_H_
#define TRATADOR_H_

#include "funcionario.h"

//using namespace std;

class Tratador: public Funcionario {
	protected:
		int m_nivel_de_seguranca;
		
	public:
		Tratador();
		Tratador(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade, int nivel_de_seguranca);
		~Tratador();

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
		
}; /* Tratador */

#endif
