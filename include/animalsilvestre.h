#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

using namespace std;

class AnimalSilvestre {
	protected:
		string m_autorizacao_ibama;

	public:
		AnimalSilvestre ( void );
		AnimalSilvestre(string autorizacao_ibama);
		virtual ~AnimalSilvestre ( void );

		// Getters and Setters
		virtual void setAutorizacao_ibama (string newAutorizacao_ibama) = 0;
		virtual string getAutorizacao_ibama ( void ) = 0;
};/* AnimalSilvestre */


#endif