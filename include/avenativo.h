#ifndef _AVE_NATIVO_H_
#define _AVE_NATIVO_H_

#include "ave.h"
#include "animalnativo.h"

class AveNativo : public Ave, public AnimalNativo {
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
            "\nUF: " << m_uf_origem <<
            "\n" << endl;
            return os;
        }
		ofstream& salvarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_tamanho_do_bico_cm << ";" << m_envergadura_das_asas << ";" <<
            m_autorizacao_ibama << ";" << m_uf_origem << ";" << endl;
            return out;
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