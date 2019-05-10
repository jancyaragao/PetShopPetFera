#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

using namespace std;

class AnimalSilvestre {
	protected:
		string autorizacao_ibama;

	// Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ();

	public:
		AnimalSilvestre ();
		~AnimalSilvestre ();
};/* AnimalSilvestre */


#endif