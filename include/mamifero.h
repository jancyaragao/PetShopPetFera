#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string>
using namespace std;

class Mamifero: public Animal {
	protected:
		string m_cor_pelo;

		// Getters and Setters
		void setCor_pelo(string new_cor_pelo);
		string getCor_pelo();
		
	public:
		Mamifero();
		Mamifero(string cor_pelo);
		~Mamifero();

}; /* Mamífero */

#endif