#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <QString>

#include "./animal.h"

using namespace std;

class Mamifero: public Animal {
	protected:
		QString m_cor_pelo;
	public:
		Mamifero();
		Mamifero(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
				QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString cor_pelo);
		~Mamifero();

		/*Animal*/
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
		void setCor_pelo(QString new_cor_pelo);
		QString getCor_pelo();

}; /* Mamífero */

#endif
