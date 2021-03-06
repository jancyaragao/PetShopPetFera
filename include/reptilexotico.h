#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"
/**
 * @file reptilexotico
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief classe reptilexotico herdando de reptil e animalexotico
 */
class ReptilExotico : public Reptil, public AnimalExotico {
	private:
    /**
     * @brief Sobrecarga para listagem do animal
     */
        ostream& listarAnimal(ostream& os) const {
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
            "\nAutorização: " << m_autorizacao_ibama <<
            "\nPais de origem: " << m_pais_origem <<
            "\nCidade de origem: " << m_cidade_origem <<
            "\n" << endl;
            return os;
        }
    /**
     * @brief Sobrecarga para salvar do animal no arquivo csv
     */
		ofstream& salvarAnimal(ofstream& out) const {
            out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_venenoso << ";" << m_tipo_veneno << ";" <<
            m_autorizacao_ibama << ";" << m_pais_origem << ";" << m_cidade_origem << ";" << endl;
            return out;
        }
    public:
    /**
     * @brief Métodos getters e setters da classe anfibioexótico
     */
        ReptilExotico ( void );
        ReptilExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
		string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
        ~ReptilExotico ( void );

        // Getters and Setters
		void setAutorizacao_ibama (string newAutorizacao_ibama);
		string getAutorizacao_ibama ( void );

		void setPais_origem (string newPais_origem);
		string getPais_origem (void);

		void setCidade_origem (string newCidade_origem);
		string getCidade_origem (void);
};

#endif
