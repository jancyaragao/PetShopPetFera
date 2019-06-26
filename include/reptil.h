#ifndef REPTIL_H
#define REPTIL_H

#include <QString>

#include "animal.h"

//using namespace std;

class Reptil : public Animal {
	protected:
		bool m_venenoso;
		QString m_tipo_veneno;
	public:
		Reptil();
		Reptil(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno);
		~Reptil();

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
		void setVenenoso(bool new_venenoso);
		bool getVenenoso();

		void setTipo_veneno(QString new_tipo_veneno);
		QString getTipo_veneno();
		

}; /* Réptil */

#endif
