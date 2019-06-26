#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

using namespace std;

class Anfibio: public Animal {
	protected:
		int m_total_de_mudas;

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
			"\n" << endl;
			return os;
		}
		ofstream& salvarAnimal(ofstream& out) const{
			out << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo 
			<< ";" << m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador 
			<< ";" << m_nome_batismo << ";" << m_total_de_mudas << endl;
			return out;
		}
	public:
		Anfibio(void);
		Anfibio(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta,
				int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		~Anfibio(void);

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
		void setTotal_de_mudas(int new_total_de_mudas);
		int getTotal_de_mudas();

		void imprime ();

}; /* Anfíbio */

#endif