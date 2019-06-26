#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class AnfibioExotico : public Anfibio, public AnimalExotico {
	private:
		ostream& listarAnimal(ostream& os) const {
			return os << "\n" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
			m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
			m_nome_batismo << ";" << m_total_de_mudas << ";" << m_autorizacao_ibama << ";" <<
			m_pais_origem << ";" << m_cidade_origem << ";" << endl;
		}
    public:
        AnfibioExotico ( void );

        AnfibioExotico (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
		string autorizacao_ibama, string pais_origem, string cidade_origem);

        ~AnfibioExotico ( void );
};

#endif