#ifndef _ANIMAL_SILVESTRE_H_
#define _ANIMAL_SILVESTRE_H_

#include <QString>

using namespace std;

class AnimalSilvestre {
	protected:
		QString m_autorizacao_ibama;

	// Getters and Setters
		void setAutorizacao_ibama (QString newAutorizacao_ibama);
		QString getAutorizacao_ibama ( void );

	public:
		AnimalSilvestre ( void );
		AnimalSilvestre(QString autorizacao_ibama);
		~AnimalSilvestre ( void );
};/* AnimalSilvestre */


#endif