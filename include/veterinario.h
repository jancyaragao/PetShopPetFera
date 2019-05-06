#ifndef VETERINARIO_H
#define VETERINARIO_H

#include <string>
using namespace std;

class Veterinario: public Funcionario {
	private:
		string m_crmv;

	public:
		Veterinario();
		~Veterinario();
	
};

#endif