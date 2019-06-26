#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

#include "anfibio.h"
#include "animalnativo.h"

class AnfibioNativo : public Anfibio, public AnimalNativo {
	private:
		ostream& listarAnimal(ostream& os) const {
			return os << "\n" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
			m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
			m_nome_batismo << ";" << m_total_de_mudas << ";" << m_autorizacao_ibama << ";" <<
			m_uf_origem << ";" << endl;
		}
    public:
        AnfibioNativo ( void );
        AnfibioNativo (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
		string autorizacao_ibama, string uf_origem);
        ~AnfibioNativo ( void );

		// Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
};

#endif