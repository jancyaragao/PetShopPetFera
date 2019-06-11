#ifndef REPTIL_H
#define REPTIL_H

#include <string>

#include "animal.h"

using namespace std;

class Reptil : public Animal {
	protected:
		bool m_venenoso;
		string m_tipo_veneno;

		// Getters and Setters
		void setVenenoso(bool new_venenoso);
		bool getVenenoso();

		void setTipo_veneno(string new_tipo_veneno);
		string getTipo_veneno();
		
	public:
		Reptil();
		Reptil(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno);
		~Reptil();

}; /* Réptil */

#endif