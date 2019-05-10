#ifndef _TRATADOR_H_
#define _TRATADOR_H_

using namespace std;

class Tratador: public Funcionario {
	private:
		int m_nivel_de_seguranca;
		
	public:
		Tratador();
		Tratador(int nivel_de_seguranca);
		~Tratador();

		// Getters and Setters
		void setNivel_de_seguranca(int new_nivel_de_seguranca);
		int getNivel_de_seguranca();
		
}; /* Tratador */

#endif