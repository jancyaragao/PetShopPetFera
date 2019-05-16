#include "../include/tratador.h"
using namespace std;

Tratador::Tratador() { /*empty*/ }
Tratador::Tratador(int nivel_de_seguranca):m_nivel_de_seguranca(nivel_de_seguranca) { /*empty*/ }
Tratador::~Tratador() { /*empty*/ }

void Tratador::setNivel_de_seguranca(int new_nivel_de_seguranca) {
	m_nivel_de_seguranca = new_nivel_de_seguranca;
}
int Tratador::getNivel_de_seguranca() {
	return m_nivel_de_seguranca;
}