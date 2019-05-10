#ifndef _ANFIBIO_H_
#define _ANFIBIO_H_

class Anfibio: public Animal {
	protected:
		int m_total_de_mudas;
		// date m_ultima_muda;

	public:
		Anfibio();
		Anfibio(int total_de_mudas);
		~Anfibio();

		// Getters and Setters
		void setTotal_de_mudas(int new_total_de_mudas);
		int getTotal_de_mudas();

}; /* Anfíbio */

#endif