#include "../include/mamifero.h"
#include <QString>
using namespace std;

Mamifero::Mamifero() { /*empty*/ }
Mamifero::Mamifero(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
				QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString cor_pelo)
				: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
				m_nome_batismo),
				m_cor_pelo(cor_pelo)
{ /*empty*/ }
				
Mamifero::~Mamifero() { /*empty*/ }

void Mamifero::setCor_pelo(QString new_cor_pelo) {
	m_cor_pelo = new_cor_pelo;
}
QString Mamifero::getCor_pelo() {
	return m_cor_pelo;
}

void Mamifero::setId(int new_id){
	m_id = new_id;
}
int Mamifero::getId() {
	return m_id;
}

void Mamifero::setClasse(QString new_classe) {
	m_classe = new_classe;
}
QString Mamifero::getClasse() {
	return m_classe;
}

void Mamifero::setNome_cientifico(QString new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
QString Mamifero::getNome_cientifico() {
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

void Mamifero::setDieta(QString new_dieta) {
	m_dieta = new_dieta;
}
QString Mamifero::getDieta() {
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

void Mamifero::setNome_batismo(QString new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
QString Mamifero::getNome_batismo() {
	return m_nome_batismo;
}