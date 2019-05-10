#ifndef _ANIMAL_NATIVO_H
#define _ANIMAL_NATIVO_H

#include <string>

using namespace std;

class AnimalNativo : private AnimalSilvestre {
	protected:
		string m_uf_origem;
		string	m_autorizacao;

		void setUF_origem ();
		string getUF_origem (string newUForigem);
		void setAutorizacao ();
		string getAutorizacao (string newAutorizacao);
	public:
		AnimalNativo ();
		~AnimalNativo ();
};/* AnimalNativo */

#endif