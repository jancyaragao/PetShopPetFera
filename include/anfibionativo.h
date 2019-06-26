#ifndef ANFIBIO_NATIVO_H_
#define ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalnativo.h"

class AnfibioNativo : public Anfibio, public AnimalNativo {
    public:
        AnfibioNativo ( void );
        AnfibioNativo (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
		QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
		QString autorizacao_ibama, QString uf_origem);
        ~AnfibioNativo ( void );
};

#endif
