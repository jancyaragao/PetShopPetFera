#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <string>

#include "animalsilvestre.h"

using namespace std;
/**
 * @file animalnativo.h
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief classe animalnativo herdando da classe animalsilvestre
 */

class AnimalNativo : public AnimalSilvestre {
	protected:
		string m_uf_origem;
		
	public:
		AnimalNativo ( void );
		AnimalNativo (string autorizacao_ibama, string uf_origem);
		virtual ~AnimalNativo ( void );

    /**
     * @brief metodo virtual puro para classe abstrata
     */
		// Getters and Setters
		virtual void setAutorizacao_ibama (string newAutorizacao_ibama) = 0;
		virtual string getAutorizacao_ibama ( void ) = 0;

		virtual void setUF_origem (string newUForigem) = 0;
		virtual string getUF_origem ( void ) = 0;
};/* AnimalNativo */

#endif
