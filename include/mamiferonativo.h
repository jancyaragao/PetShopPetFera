#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "./mamifero.h"
#include "./animalnativo.h"

class MamiferoNativo : public Mamifero, public AnimalNativo {
    public:
        MamiferoNativo( void );
        MamiferoNativo (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo,
		QString autorizacao_ibama, QString uf_origem);
        ~MamiferoNativo ( void );
};

#endif