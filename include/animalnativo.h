#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <string>

using namespace std;

class AnimalNativo : private AnimalSilvestre {
	protected:
		string m_uf_origem;
		string	m_autorizacao;
	public:
		AnimalNativo ();
		~AnimalNativo ();
};

#endif