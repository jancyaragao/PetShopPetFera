#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <QString>

#include "./animalsilvestre.h"

using namespace std;

class AnimalNativo : public AnimalSilvestre {
	protected:
		QString m_uf_origem;
		
		// Getters and Setters
		void setUF_origem (QString newUForigem);
		QString getUF_origem ( void );
		
	public:
		AnimalNativo ( void );
		AnimalNativo (QString autorizacao_ibama, QString uf_origem);
		~AnimalNativo ( void );
};/* AnimalNativo */

#endif