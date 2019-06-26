#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <QString>
using namespace std;

class Animal {
	protected:
		int m_id;
		QString m_classe;
		QString m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		QString m_dieta;
		int m_veterinario;
		int m_tratador;
		QString m_nome_batismo;

	public:
		Animal( void );
		Animal(int id, QString classe, QString nome_cientifico, char sexo, double tamanho, QString dieta, int id_veterinario, int id_tratador, QString nome_batismo);
		virtual ~Animal( void );

		// Getters and Setters
		virtual void setId(int new_id) = 0;
		virtual int getId() = 0;
		
		virtual void setClasse(QString new_classe) = 0;
		virtual QString getClasse() = 0;
		
		virtual void setNome_cientifico(QString new_nome_cientifico) = 0;
		virtual QString getNome_cientifico() = 0;
		
		virtual void setSexo(char new_sexo) = 0;
		virtual char getSexo() = 0;
		
		virtual void setTamanho(double new_tamanho) = 0;
		virtual double getTamanho() = 0;
		
		virtual void setDieta(QString new_dieta) = 0;
		virtual QString getDieta() = 0;

		virtual void setVeterinario(int new_veterinario) = 0;
		virtual int getVeterinario() = 0;

		virtual void setTratador(int new_tratador) = 0;
		virtual int getTratador() = 0;

		virtual void setNome_batismo(QString new_nome_batismo) = 0;
		virtual QString getNome_batismo() = 0;
		
}; /* Animal */

#endif