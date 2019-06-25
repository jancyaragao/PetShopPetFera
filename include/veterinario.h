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
		Veterinario(int id, string nome, string cpf, short idade, short tipo_sanguineo,
            string especialidade, string crmv);
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
		void setTipo_sanguineo(string new_tipo_sanguineo);
		string getTipo_sanguineo();
		void setEspecialidade(string new_especialidade);
		string getEspecialidade();
		
}; /* Veterinario */

#endif