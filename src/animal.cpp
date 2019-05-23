#include "../include/animal.h"
#include <string>
using namespace std;

Animal::Animal() { /*empty*/ }
Animal::Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, Veterinario veterinario, Tratador tratador, string nome_batismo):m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico), m_sexo(sexo), m_tamanho(tamanho), m_dieta(dieta), m_veterinario(veterinario), m_tratador(tratador), m_nome_batismo(nome_batismo) { /*empty*/ }
Animal::~Animal() { /*empty*/ }

void Animal::setId(int new_id){
	m_id = new_id;
}
int Animal::getId() {
	return m_id;
}

void Animal::setClasse(string new_classe) {
	m_classe = new_classe;
}
string Animal::getClasse() {
	return m_classe;
}

void Animal::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
string Animal::getNome_cientifico() {
	return m_nome_cientifico;
}

void Animal::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
char Animal::getSexo() {
	return m_sexo;
}

void Animal::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
double Animal::getTamanho() {
	return m_tamanho;
}

void Animal::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
string Animal::getDieta() {
	return m_dieta;
}

void Animal::setVeterinario(Veterinario new_veterinario) {
	m_veterinario = new_veterinario;
}
Veterinario Animal::getVeterinario() {
	return m_veterinario;
}

void Animal::setTratador(Tratador new_tratador) {
	m_tratador = new_tratador;
}
Tratador Animal::getTratador() {
	return m_tratador;
}

void Animal::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
string Animal::getNome_batismo() {
	return m_nome_batismo;
}