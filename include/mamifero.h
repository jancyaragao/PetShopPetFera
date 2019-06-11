#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string>

#include "./animal.h"

using namespace std;

class Mamifero: public Animal {
	protected:
		string m_cor_pelo;

		// Getters and Setters
		void setCor_pelo(string new_cor_pelo);
		string getCor_pelo();
		
	public:
		Mamifero();
		Mamifero(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string cor_pelo);
		~Mamifero();

}; /* Mamífero */

#endif