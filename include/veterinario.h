#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <string>
using namespace std;

class Veterinario: public Funcionario {
	private:
		string m_crmv;
		
	public:
<<<<<<< HEAD
		Veterinario( void );
		~Veterinario( void );
	
};
=======
		Veterinario();
		Veterinario(string crmv);
		~Veterinario();

		// Getters and Setters
		void setCrmv(new_crmv);
		string getCrmv();
		
}; /* Veterinario */
>>>>>>> 770dcaadfacfa40410cbcbca2624b7ef5428f28e

#endif