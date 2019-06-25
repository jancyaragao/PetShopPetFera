#include "../include/mamifero.h"
#include <string>
using namespace std;

Mamifero::Mamifero() { /*empty*/ }
Mamifero::Mamifero(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string cor_pelo)
				: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
				m_nome_batismo),
				m_cor_pelo(cor_pelo)
{ /*empty*/ }
				
Mamifero::~Mamifero() { /*empty*/ }

void Mamifero::setCor_pelo(string new_cor_pelo) {
	m_cor_pelo = new_cor_pelo;
}
string Mamifero::getCor_pelo() {
	return m_cor_pelo;
}

void Mamifero::setId(int new_id){
	m_id = new_id;
}
int Mamifero::getId() {
	return m_id;
}

void Mamifero::setClasse(string new_classe) {
	m_classe = new_classe;
}
string Mamifero::getClasse() {
	return m_classe;
}

void Mamifero::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
string Mamifero::getNome_cientifico() {
	return m_nome_cientifico;
}

void Mamifero::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
char Mamifero::getSexo() {
	return m_sexo;
}

void Mamifero::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
double Mamifero::getTamanho() {
	return m_tamanho;
}

void Mamifero::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
string Mamifero::getDieta() {
	return m_dieta;
}

void Mamifero::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
int Mamifero::getVeterinario() {
	return m_veterinario;
}

void Mamifero::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
int Mamifero::getTratador() {
	return m_tratador;
}

void Mamifero::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
string Mamifero::getNome_batismo() {
	return m_nome_batismo;
}