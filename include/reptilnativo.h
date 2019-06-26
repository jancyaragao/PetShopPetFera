#ifndef REPTIL_NATIVO_H
#define REPTIL_NATIVO_H

#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
    public:
        ReptilNativo ( void );
        ReptilNativo (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
		QString tipo_veneno, QString autorizacao_ibama, QString uf_origem);
        ~ReptilNativo ( void );
};

#endif
