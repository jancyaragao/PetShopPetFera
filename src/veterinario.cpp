#include "../include/veterinario.h"
#include <string>
using namespace std;

Veterinario::Veterinario() { /*empty*/ }
Veterinario::Veterinario(string crmv):m_crmv(crmv) { /*empty*/ }
Veterinario::~Veterinario() { /*empty*/ }

void Veterinario::setCrmv(string new_crmv) {
	m_crmv = new_crmv;
}
string Veterinario::getCrmv() {
	return m_crmv;
}