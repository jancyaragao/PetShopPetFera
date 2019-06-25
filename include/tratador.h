#ifndef _TRATADOR_H_
#define _TRATADOR_H_

#include "./funcionario.h"

using namespace std;

class Tratador: public Funcionario {
	protected:
		int m_nivel_de_seguranca;
		
	public:
		Tratador();
		Tratador(int nivel_de_seguranca);
		~Tratador();

		// Getters and Setters
		void setNivel_de_seguranca(int new_nivel_de_seguranca);
		int getNivel_de_seguranca();
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
		void setEspecialidade(string new_especialidade);
		string getEspecialidade();
		
}; /* Tratador */

#endif