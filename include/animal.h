#ifndef _ANIMAL_H_
#define _ANIMAL_H_

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
		int m_veterinario;
		int m_tratador;
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

		void setVeterinario(int new_veterinario);
		int getVeterinario();

		void setTratador(int new_tratador);
		int getTratador();

		void setNome_batismo(string new_nome_batismo);
		string getNome_batismo();

	public:
		Animal( void );
		Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo);
		~Animal( void );
		
}; /* Animal */

#endif