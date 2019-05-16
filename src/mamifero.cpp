#include "../include/mamifero.h"
#include <string>
using namespace std;

Mamifero::Mamifero() { /*empty*/ }
Mamifero::Mamifero(string cor_pelo):m_cor_pelo(cor_pelo) { /*empty*/ }
Mamifero::~Mamifero() { /*empty*/ }

void Mamifero::setCor_pelo(string new_cor_pelo) {
	m_cor_pelo = new_cor_pelo;
}
string Mamifero::getCor_pelo() {
	return m_cor_pelo;
}