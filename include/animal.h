#ifndef _ANIMAL_H_
#define _ANIMAL_H_

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Animal {
	private:
		virtual ostream& listarAnimal (ostream&) const = 0;
		virtual ofstream& salvarAnimal (ofstream&) const = 0;
	protected:
		int m_id;
		string m_classe;
		string m_nome_cientifico;
		char m_sexo;
		double m_tamanho;
		string m_dieta;
		int m_veterinario;
		int m_tratador;
		string m_nome_batismo;
	public:
		Animal( void );
		Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo);
		virtual ~Animal( void );

		// Getters and Setters
		virtual void setId(int new_id) = 0;
		virtual int getId() = 0;
		
		virtual void setClasse(string new_classe) = 0;
		virtual string getClasse() = 0;
		
		virtual void setNome_cientifico(string new_nome_cientifico) = 0;
		virtual string getNome_cientifico() = 0;
		
		virtual void setSexo(char new_sexo) = 0;
		virtual char getSexo() = 0;
		
		virtual void setTamanho(double new_tamanho) = 0;
		virtual double getTamanho() = 0;
		
		virtual void setDieta(string new_dieta) = 0;
		virtual string getDieta() = 0;

		virtual void setVeterinario(int new_veterinario) = 0;
		virtual int getVeterinario() = 0;

		virtual void setTratador(int new_tratador) = 0;
		virtual int getTratador() = 0;

		virtual void setNome_batismo(string new_nome_batismo) = 0;
		virtual string getNome_batismo() = 0;
	
		friend ostream& operator << (ostream& o, const Animal& A){
			return A.listarAnimal(o);
		}
		friend ofstream& operator << (ofstream& o, const Animal& A){
			return A.salvarAnimal(o);
		}

		virtual void imprime() = 0;

}; /* Animal */

#endif