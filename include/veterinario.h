#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <string>
using namespace std;

class Veterinario: public Funcionario {
	private:
		string m_crmv;
		
	public:
		Veterinario();
		Veterinario(string crmv);
		~Veterinario();

		// Getters and Setters
		void setCrmv(new_crmv);
		string getCrmv();
		
}; /* Veterinario */

#endif