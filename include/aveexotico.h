#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

#include "ave.h"
#include "animalexotico.h"

// Herda Atributos da Classe Ave e AnimalExotico
class AveExotico : public Ave, public AnimalExotico {
	private:
        ostream& listarAnimal(ostream& os) const {
            // return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            // m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            // m_nome_batismo << ";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" << endl;

            os << 
            "\nID: " << m_id << 
            "\nClasse: " << m_classe << 
            "\nNome Cientifico: " << m_nome_cientifico << 
            "\nSexo: " << m_sexo << 
            "\nTamanho: " << m_tamanho <<
            "\nDieta: " << m_dieta <<
            "\nVeterinario: " << m_veterinario <<
            "\nTratador: " << m_tratador <<
            "\nNome Batismo: " <<  m_nome_batismo <<
            "\nTamanho do Bico: " << m_tamanho_do_bico_cm <<
            "\nEnvergadura das asas: " << m_envergadura_das_asas <<
            "\nAutorização: " << m_autorizacao_ibama <<
            "\nPais de origem: " << m_pais_origem <<
            "\nCidade de origem: " << m_cidade_origem <<
            "\n" << endl;
            return os;
        }
		ofstream& listarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" <<
            m_autorizacao_ibama << ";" << m_pais_origem << ";" << m_cidade_origem << ";" << endl;
            return out;
        }
    public:
        AveExotico ( void );
        AveExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
        ~AveExotico ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setPais_origem (string newPais_origem);
		string getPais_origem (void);

		void setCidade_origem (string newCidade_origem);
		string getCidade_origem (void);
};/* AveExotico */

#endif