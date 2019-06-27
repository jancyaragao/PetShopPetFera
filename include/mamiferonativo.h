#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "mamifero.h"
#include "animalnativo.h"
/**
 * @file mamiferonativo.h
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief classe mamiferonativo herdando de mamifero e animalnativo
 */
class MamiferoNativo : public Mamifero, public AnimalNativo {
	private:
    /**
     * @brief Sobrecarga para listagem do animal
     */
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
            "\nUF: " << m_uf_origem <<
            "\n" << endl;
            return os;
        }
    /**
     * @brief Sobrecarga para salvar do animal no arquivo csv
     */
		ofstream& salvarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_cor_pelo << ";" << m_autorizacao_ibama << ";" <<
            m_uf_origem << ";" <<  endl;
            return out;
        }
    public:
    /**
     * @brief Métodos getters e setters da classe mamiferonativo
     */
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
