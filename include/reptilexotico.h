#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
    public:
        ReptilExotico ( void );
        ReptilExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
		string tipo_veneno, string pais_origem);
        ~ReptilExotico ( void );
};

#endif