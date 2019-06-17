#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class AveNativo : public Ave, public AnimalNativo {
    public:
        AveNativo ( void );
        AveNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, string uf_origem, string autorizacao);
        ~AveNativo ( void );
}; /*AveNativo*/


#endif