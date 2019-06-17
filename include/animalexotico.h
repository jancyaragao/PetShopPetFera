#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <string>

using namespace std;

#include "./animalsilvestre.h"

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;

		void setPais_origem (string newPais_origem);
		string getPais_origem ( void );
	
	public:
		AnimalExotico ( void );
		AnimalExotico (string pais_origem);
		~AnimalExotico ( void );
}; /* AnimalExotico */

#endif