#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
    public:
        ReptilExotico ( void );
        ReptilExotico (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
		QString tipo_veneno, QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
        ~ReptilExotico ( void );
};

#endif