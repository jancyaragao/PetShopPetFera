#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "./mamifero.h"
#include "./animalexotico.h"

class MamiferoExotico : public Mamifero, public AnimalExotico {
    public:
        MamiferoExotico ( void );
        MamiferoExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
		string pais_origem, string cidade_origem);
        ~MamiferoExotico ( void );
};

#endif