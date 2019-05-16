#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include "funcionario.h"
#include "veterinario.h"
#include "tratador.h"
#include <string>
using namespace std;

class Animal {
	protected:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		Veterinario m_veterinario;
		Tratador m_tratador;
		string m_nome_batismo;

		// Getters and Setters
		void setId(int new_id);
		int getId();
		
		void setClasse(string new_classe);
		string getClasse();
		
		void setNome_cientifico(string new_nome_cientifico);
		string getNome_cientifico();
		
		void setSexo(char new_sexo);
		char getSexo();
		
		void setTamanho(double new_tamanho);
		double getTamanho();
		
		void setDieta(string new_dieta);
		string getDieta();

		void setVeterinario(Veterinario new_veterinario);
		Veterinario getVeterinario();

		void setTratador(Tratador new_tratador);
		Tratador getTratador();

		void setNome_batismo(string new_nome_batismo);
		string getNome_batismo();

	public:
		Animal();
		Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo);
		~Animal();
		
}; /* Animal */

#endif