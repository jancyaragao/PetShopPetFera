#ifndef ANIMAL_EXOTICO_H_
#define ANIMAL_EXOTICO_H_

//#include <QString>

//using namespace std;

#include "animalsilvestre.h"

class AnimalExotico : public AnimalSilvestre {
	protected:
		QString m_pais_origem;
		QString m_cidade_origem;

		void setPais_origem (QString newPais_origem);
		QString getPais_origem (void);

		void setCidade_origem (QString newCidade_origem);
		QString getCidade_origem (void);
	
	public:
		AnimalExotico (void);
		AnimalExotico (QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
		~AnimalExotico (void);
}; /* AnimalExotico */

#endif
