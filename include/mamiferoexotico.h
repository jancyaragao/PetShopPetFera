#ifndef MAMIFERO_EXOTICO_H_
#define MAMIFERO_EXOTICO_H_

#include "mamifero.h"
#include "animalexotico.h"

class MamiferoExotico : public Mamifero, public AnimalExotico {
    public:
        MamiferoExotico ( void );
        MamiferoExotico (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo,
		QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
        ~MamiferoExotico ( void );
};

#endif
