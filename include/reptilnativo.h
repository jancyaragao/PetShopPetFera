#ifndef _REPTIL_NATIVO_H
#define _REPTIL_NATIVO_H

#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
    public:
        ReptilNativo ( void );
        ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
		string tipo_veneno, string autorizacao_ibama, string uf_origem);
        ~ReptilNativo ( void );
};

#endif