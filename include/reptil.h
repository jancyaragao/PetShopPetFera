#ifndef REPTIL_H
#define REPTIL_H

#include <string>
using namespace std;

class Reptil {
	protected:
		bool m_venenoso;
		string m_tipo_veneno;

		// Getters and Setters
		void setVenenoso(bool new_venenoso);
		bool getVenenoso();

		void setTipo_veneno(string new_tipo_veneno);
		string getTipo_veneno();
		
	public:
		Reptil();
		Reptil(bool venenoso, string tipo_veneno);
		~Reptil();

}; /* Réptil */

#endif