#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "ave.h"
#include "animalexotico.h"

// Herda Atributos da Classe Ave e AnimalExotico
class AveExotico : public Ave, public AnimalExotico {
    public:
        AveExotico ( void );
        AveExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
        ~AveExotico ( void );
};/* AveExotico */

#endif