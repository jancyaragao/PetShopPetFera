#ifndef _REPTIL_NATIVO_H
#define _REPTIL_NATIVO_H

#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
	private:
        ostream& listarAnimal(ostream& os) const {
            // return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            // m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            // m_nome_batismo << ";" << m_venenoso << ";" << m_tipo_veneno << ";" << endl;

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
            "\nVenenoso: " << m_venenoso <<
            "\nTipo Veneno: " << m_tipo_veneno <<
            "\n" << endl;
            return os;
        }
		ofstream& listarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_venenoso << ";" << m_tipo_veneno << ";" <<
            m_autorizacao_ibama << ";" << m_uf_origem << ";" << endl;
            return out;
        }
    public:
        ReptilNativo ( void );
        ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
		string tipo_veneno, string autorizacao_ibama, string uf_origem);
        ~ReptilNativo ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setUF_origem (string newUForigem);
		string getUF_origem ( void );
};

#endif