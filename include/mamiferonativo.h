#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "./mamifero.h"
#include "./animalnativo.h"

class MamiferoNativo : public Mamifero, public AnimalNativo {
	private:
		ostream& listarAnimal(ostream& os) const {
            return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_cor_pelo << ";" << m_autorizacao_ibama << ";" <<
            m_uf_origem << ";" <<  endl;
        }
    public:
        MamiferoNativo( void );
        MamiferoNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
		string autorizacao_ibama, string uf_origem);
        ~MamiferoNativo ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
};

#endif