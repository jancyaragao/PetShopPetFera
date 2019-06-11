#include "../include/mamifero.h"
#include <string>
using namespace std;

Mamifero::Mamifero() { /*empty*/ }
Mamifero::Mamifero(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string cor_pelo)
				: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo),
				m_cor_pelo(cor_pelo)
{ /*empty*/ }
				
Mamifero::~Mamifero() { /*empty*/ }

void Mamifero::setCor_pelo(string new_cor_pelo) {
	m_cor_pelo = new_cor_pelo;
}
string Mamifero::getCor_pelo() {
	return m_cor_pelo;
}