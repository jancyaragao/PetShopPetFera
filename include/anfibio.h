#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

#include "animal.h"

class Anfibio: public Animal {
	protected:
		int m_total_de_mudas;
		// date m_ultima_muda;

		// Getters and Setters
		void setTotal_de_mudas(int new_total_de_mudas);
		int getTotal_de_mudas();

	public:
		Anfibio(void);
		Anfibio(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta,
				int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		~Anfibio(void);

}; /* Anfíbio */

#endif