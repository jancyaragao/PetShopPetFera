#ifndef MAMIFERO_H
#define MAMIFERO_H

#include <string>
using namespace std;

class Mamifero: public Animal {
	protected:
		string m_cor_pelo;
		
	public:
		Mamifero();
		~Mamifero();
}; /* Mamífero */

#endif