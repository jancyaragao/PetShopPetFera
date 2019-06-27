#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include <iostream>

#include "mamifero.h"
#include "animalexotico.h"

class MamiferoExotico : public Mamifero, public AnimalExotico {
	private:
        ostream& listarAnimal(ostream& os) const {
            // return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            // m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            // m_nome_batismo << ";" << m_cor_pelo << ";" << endl;

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
            "\nCor do pelo: " << m_cor_pelo <<
            "\nAutorização: " << m_autorizacao_ibama <<
            "\nPais de origem: " << m_pais_origem <<
            "\nCidade de origem: " << m_cidade_origem <<
            "\n" << endl;
            return os;
        }
		ofstream& salvarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_cor_pelo << ";" << m_autorizacao_ibama << ";" <<
            m_pais_origem << ";" << m_cidade_origem << ";" <<  endl;
            return out;
        }
    public:
        MamiferoExotico ( void );
        MamiferoExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
		string autorizacao_ibama, string pais_origem, string cidade_origem);
        ~MamiferoExotico ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setPais_origem (string newPais_origem);
		string getPais_origem (void);

		void setCidade_origem (string newCidade_origem);
		string getCidade_origem (void);
};

#endif