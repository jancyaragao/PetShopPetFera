#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class AnfibioExotico : public Anfibio, public AnimalExotico {
    public:
        AnfibioExotico ( void );

        AnfibioExotico (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
		string pais_origem, string cidade_origem);

        ~AnfibioExotico ( void );
};

#endif