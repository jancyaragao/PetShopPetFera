#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

using namespace std;

class AnimalSilvestre {
	protected:
		string m_autorizacao_ibama;

	// Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

	public:
		AnimalSilvestre ( void );
		AnimalSilvestre(string autorizacao_ibama);
		~AnimalSilvestre ( void );
};/* AnimalSilvestre */


#endif