#ifndef TRATADOR_H
#define TRATADOR_H

using namespace std;

class Tratador: public Funcionario {
	private:
		int m_nivel_de_seguranca;

	public:
		Tratador();
		~Tratador();
	
};

#endif