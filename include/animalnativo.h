#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <string>

#include "./animalsilvestre.h"

using namespace std;

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
		
		// Getters and Setters
		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
		
	public:
		AnimalNativo ( void );
		AnimalNativo (string autorizacao_ibama, string uf_origem);
		~AnimalNativo ( void );
};/* AnimalNativo */

#endif