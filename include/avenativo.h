#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class AveNativo : public Ave, public AnimalNativo {
	private:
		ostream& listarAnimal(ostream& os) const {
            return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" <<
            m_autorizacao_ibama << ";" << m_uf_origem << ";" << endl;
        }
    public:
        AveNativo ( void );
        AveNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
        ~AveNativo ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
}; /*AveNativo*/


#endif