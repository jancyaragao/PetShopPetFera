#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <string>

#include "./animalsilvestre.h"

using namespace std;

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
		string m_autorizacao;
		
		// Getters and Setters
		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
		void setAutorizacao (string newAutorizacao);
		string getAutorizacao ( void );
		
	public:
		AnimalNativo ( void );
		AnimalNativo (string autorizacao_ibama, string uf_origem, string autorizacao);
		~AnimalNativo ( void );
};/* AnimalNativo */

#endif