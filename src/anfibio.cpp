#include "../include/anfibio.h"
using namespace std;

Anfibio::Anfibio() { /*empty*/ }
Anfibio::Anfibio(int total_de_mudas):m_total_de_mudas(total_de_mudas) { /*empty*/ }
Anfibio::~Anfibio() { void }

void Anfibio::setTotal_de_mudas(int new_total_de_mudas) {
	m_total_de_mudas = new_total_de_mudas;
}
int Anfibio::getTotal_de_mudas() {
	return m_total_de_mudas;
}