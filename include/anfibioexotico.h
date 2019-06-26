#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class AnfibioExotico : public Anfibio, public AnimalExotico {
    public:
        AnfibioExotico ( void );

        AnfibioExotico (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
		QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
		QString autorizacao_ibama, QString pais_origem, QString cidade_origem);

        ~AnfibioExotico ( void );
};

#endif