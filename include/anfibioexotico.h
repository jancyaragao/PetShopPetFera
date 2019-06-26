#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

#include "anfibio.h"
#include "animalexotico.h"

class AnfibioExotico : public Anfibio, public AnimalExotico {
	private:
		ostream& listarAnimal(ostream& os) const {
			// os << "\n" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
			// m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
			// m_nome_batismo << ";" << m_total_de_mudas << ";" << endl;
			// return os;
			os << "\nID: " << m_id << 
			"\nClasse: " << m_classe << 
			"\nNome Cientifico: " << m_nome_cientifico << 
			"\nSexo: " << m_sexo << 
			"\nTamanho: " << m_tamanho <<
			"\nDieta: " << m_dieta <<
			"\nVeterinario: " << m_veterinario <<
			"\nTratador: " << m_tratador <<
			"\nNome Batismo: " <<  m_nome_batismo <<
			"\nTotal de Mudas: " << m_total_de_mudas <<
			"\nAutorização: " << m_autorizacao_ibama <<
			"\nPais de origem: " << m_pais_origem <<
			"\nCidade de origem: " << m_cidade_origem <<
			"\n" << endl;
			return os;
		}
		ofstream& salvarAnimal(ofstream& out) const {
			out << "\n" << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
			m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
			m_nome_batismo << ";" << m_total_de_mudas << ";" << m_autorizacao_ibama << ";" <<
			m_pais_origem << ";" << m_cidade_origem << ";" << endl;
			return out;
		}
    public:
        AnfibioExotico ( void );
        AnfibioExotico (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
		string autorizacao_ibama, string pais_origem, string cidade_origem);
        ~AnfibioExotico ( void );

		// Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setPais_origem (string newPais_origem);
		string getPais_origem (void);

		void setCidade_origem (string newCidade_origem);
		string getCidade_origem (void);
};

#endif