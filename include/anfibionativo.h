#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalnativo.h"

class AnfibioNativo : public Anfibio, public AnimalNativo {
    public:
        AnfibioNativo ( void );
        AnfibioNativo (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
		string autorizacao_ibama, string uf_origem);
        ~AnfibioNativo ( void );
};

#endif