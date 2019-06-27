#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <string>

using namespace std;

#include "animalsilvestre.h"

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;
		string m_cidade_origem;

	public:
		AnimalExotico (void);
		AnimalExotico (string autorizacao_ibama, string pais_origem, string cidade_origem);
		virtual ~AnimalExotico (void);

		// Getters and Setters
		virtual void setPais_origem (string newPais_origem) = 0;
		virtual string getPais_origem (void) = 0;

		virtual void setCidade_origem (string newCidade_origem) = 0;
		virtual string getCidade_origem (void) = 0;

		virtual void setAutorizacao_ibama (string newAutorizacao_ibama) = 0;
		virtual string getAutorizacao_ibama ( void ) = 0;
}; /* AnimalExotico */

#endif
