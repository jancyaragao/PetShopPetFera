#include "../include/reptil.h"
#include <string>
using namespace std;

Reptil::Reptil() { /*empty*/ }
Reptil::Reptil(bool venenoso, string tipo_veneno):m_venenoso(venenoso), m_tipo_veneno(tipo_veneno) { /*empty*/ }
Reptil::~Reptil() { /*empty*/ }

void Reptil::setVenenoso(bool new_venenoso) {
	m_venenoso = new_venenoso;
}
bool Reptil::getVenenoso() {
	return m_venenoso;
}

void Reptil::setTipo_veneno(string new_tipo_veneno) {
	m_tipo_veneno = new_tipo_veneno;
}
string Reptil::getTipo_veneno() {
	return m_tipo_veneno;
}