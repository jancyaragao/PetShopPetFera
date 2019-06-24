#ifndef REPTIL_H
#define REPTIL_H

#include <string>

#include "animal.h"

using namespace std;

class Reptil : public Animal {
	protected:
		bool m_venenoso;
		string m_tipo_veneno;
	public:
		Reptil();
		Reptil(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno);
		~Reptil();

		/*Animal*/
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


		// Getters and Setters
		void setVenenoso(bool new_venenoso);
		bool getVenenoso();

		void setTipo_veneno(string new_tipo_veneno);
		string getTipo_veneno();
		

}; /* Réptil */

#endif