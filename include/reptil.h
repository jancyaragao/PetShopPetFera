#ifndef REPTIL_H
#define REPTIL_H

#include <string>
using namespace std;

class Reptil {
	protected:
		bool m_venenoso;
		string m_tipo_veneno;
		
	public:
		Reptil();
		~Reptil();
}; /* Réptil */

#endif