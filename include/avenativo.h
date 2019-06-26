#ifndef AVE_NATIVO_H_
#define AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class AveNativo : public Ave, public AnimalNativo {
    public:
        AveNativo ( void );
        AveNativo (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, QString autorizacao_ibama, QString uf_origem);
        ~AveNativo ( void );
}; /*AveNativo*/


#endif
