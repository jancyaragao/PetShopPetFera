#ifndef _ANIMAL_EXOTICO_H_
#define _ANIMAL_EXOTICO_H_

#include <string>

using namespace std;

class AnimalExotico : private AnimalSilvestre {
	protected:
		string m_pais_origem;
	public:
		AnimalExotico ();
		~AnimalExotico ();
};

#endif