#ifndef AVE_EXOTICO_H_
#define AVE_EXOTICO_H_

#include "ave.h"
#include "animalexotico.h"

// Herda Atributos da Classe Ave e AnimalExotico
class AveExotico : public Ave, public AnimalExotico {
    public:
        AveExotico ( void );
        AveExotico (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, QString autorizacao_ibama, QString pais_origem, QString cidade_origem);
        ~AveExotico ( void );
};/* AveExotico */

#endif
