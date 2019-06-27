#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <string>

using namespace std;
/**
 * @file animalsilvestre.h
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief classe animalsilvestre
 */
class AnimalSilvestre {
	protected:
		string m_autorizacao_ibama;

	public:
		AnimalSilvestre ( void );
		AnimalSilvestre(string autorizacao_ibama);
		virtual ~AnimalSilvestre ( void );
    /**
     * @brief metodos virtuais puros
     */
		// Getters and Setters
		virtual void setAutorizacao_ibama (string newAutorizacao_ibama) = 0;
		virtual string getAutorizacao_ibama ( void ) = 0;
};/* AnimalSilvestre */


#endif
