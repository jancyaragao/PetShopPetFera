#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "./mamifero.h"
#include "./animalnativo.h"

class MamiferoNativo : public Mamifero, public AnimalNativo {
    public:
        MamiferoNativo( void );
        MamiferoNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
		string uf_origem, string autorizacao);
        ~MamiferoNativo ( void );
};

#endif