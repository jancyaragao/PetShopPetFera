#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <string>

#include "./funcionario.h"

using namespace std;

class Veterinario: public Funcionario {
	protected:
		string m_crmv;
		
	public:
		Veterinario();
		Veterinario(string crmv);
		~Veterinario();

		// Getters and Setters
		void setCrmv(string new_crmv);
		string getCrmv();

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
		void setFator_rh(char new_fator_rh);
		char getFator_rh();
		void setEspecialidade(string new_especialidade);
		string getEspecialidade();
		
}; /* Veterinario */

#endif