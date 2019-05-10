#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <string>

using namespace std;

class AnimalExotico : public AnimalSilvestre {
	protected:
		string m_pais_origem;

void setPais_origem ();
string getPais_origem (string newPais_origem);
	
	public:
		AnimalExotico ();
		~AnimalExotico ();
}; /* AnimalExotico */

#endif