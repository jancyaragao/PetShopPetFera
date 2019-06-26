#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <string>

using namespace std;

#include "./animalsilvestre.h"

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;
		string m_cidade_origem;

		void setPais_origem (string newPais_origem);
		string getPais_origem (void);

		void setCidade_origem (string newCidade_origem);
		string getCidade_origem (void);
	public:
		AnimalExotico (void);
		AnimalExotico (string autorizacao_ibama, string pais_origem, string cidade_origem);
		~AnimalExotico (void);
}; /* AnimalExotico */

#endif
