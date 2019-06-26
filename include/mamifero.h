#ifndef MAMIFERO_H
#define MAMIFERO_H

#include "./animal.h"

using namespace std;

class Mamifero: public Animal {
	protected:
		string m_cor_pelo;

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
			"\n" << endl;
			return os;
        }
        ofstream& salvarAnimal(ofstream& out) const{
			out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			<< ";" << m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador 
			<< ";" << m_nome_batismo << ";" << m_cor_pelo << endl;
			return out;
		}

	public:
		Mamifero();
		Mamifero(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string cor_pelo);
		~Mamifero();

		/*Animal*/
			void setId(int new_id);
	        int getId();
	        void setClasse(string new_classe);
	        string getClasse();
	        void setNome_cientifico(string new_nome_cientifico);
	        string getNome_cientifico();
	        void setSexo(char new_sexo);
	        char getSexo();
	        void setTamanho(double new_tamanho);
	        double getTamanho();
	        void setDieta(string new_dieta);
	        string getDieta();
	        void setVeterinario(int new_veterinario);
	        int getVeterinario();
	        void setTratador(int new_tratador);
	        int getTratador();
	        void setNome_batismo(string new_nome_batismo);
	        string getNome_batismo();

        // Getters and Setters
		void setCor_pelo(string new_cor_pelo);
		string getCor_pelo();

		void imprime ();

}; /* Mamífero */

#endif
