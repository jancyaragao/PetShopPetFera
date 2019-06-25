#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

class Anfibio: public Animal {
	protected:
		int m_total_de_mudas;
		// date m_ultima_muda;
	public:
		Anfibio(void);
		Anfibio(int id, QString classe, QString nome_cientifico, char sexo, double tamanho, QString dieta,
				int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas);
		~Anfibio(void);

			void setId(int new_id);
			int getId();
			void setClasse(QString new_classe);
			QString getClasse();
			void setNome_cientifico(QString new_nome_cientifico);
			QString getNome_cientifico();
			void setSexo(char new_sexo);
			char getSexo();
			void setTamanho(double new_tamanho);
			double getTamanho();
			void setDieta(QString new_dieta);
			QString getDieta();
			void setVeterinario(int new_veterinario);
			int getVeterinario();
			void setTratador(int new_tratador);
			int getTratador();
			void setNome_batismo(QString new_nome_batismo);
			QString getNome_batismo();

		// Getters and Setters
		void setTotal_de_mudas(int new_total_de_mudas);
		int getTotal_de_mudas();

}; /* Anfíbio */

#endif