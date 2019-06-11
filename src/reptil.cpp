#include "../include/reptil.h"
#include <string>
using namespace std;

Reptil::Reptil() { /*empty*/ }
Reptil::Reptil(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool venenoso, string tipo_veneno)
		: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo),
		m_venenoso(venenoso), m_tipo_veneno(tipo_veneno)
{ /*empty*/ }

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