#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

class Anfibio: public Animal {
	protected:
		int m_total_de_mudas;
		// date m_ultima_muda;
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

}; /* Anfíbio */

#endif