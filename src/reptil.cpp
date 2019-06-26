#include "../include/reptil.h"
#include <QString>
using namespace std;

Reptil::Reptil() { /*empty*/ }
Reptil::Reptil(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
		QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool venenoso, QString tipo_veneno)
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

void Reptil::setTipo_veneno(QString new_tipo_veneno) {
	m_tipo_veneno = new_tipo_veneno;
}
QString Reptil::getTipo_veneno() {
	return m_tipo_veneno;
}

void Reptil::setId(int new_id){
	m_id = new_id;
}
int Reptil::getId() {
	return m_id;
}

void Reptil::setClasse(QString new_classe) {
	m_classe = new_classe;
}
QString Reptil::getClasse() {
	return m_classe;
}

void Reptil::setNome_cientifico(QString new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
QString Reptil::getNome_cientifico() {
	return m_nome_cientifico;
}

void Reptil::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
char Reptil::getSexo() {
	return m_sexo;
}

void Reptil::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
double Reptil::getTamanho() {
	return m_tamanho;
}

void Reptil::setDieta(QString new_dieta) {
	m_dieta = new_dieta;
}
QString Reptil::getDieta() {
	return m_dieta;
}

void Reptil::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
int Reptil::getVeterinario() {
	return m_veterinario;
}

void Reptil::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
int Reptil::getTratador() {
	return m_tratador;
}

void Reptil::setNome_batismo(QString new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
QString Reptil::getNome_batismo() {
	return m_nome_batismo;
}