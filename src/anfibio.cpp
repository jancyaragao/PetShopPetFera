#include "../include/anfibio.h"

using namespace std;

Anfibio::Anfibio(void) { /*empty*/ }

Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta,
				int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas)
				: Animal (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
				nome_batismo), m_total_de_mudas(total_de_mudas)
				{/*empty*/}

Anfibio::~Anfibio(void) { /*empty*/ }

void Anfibio::setTotal_de_mudas(int new_total_de_mudas) {
	m_total_de_mudas = new_total_de_mudas;
}
int Anfibio::getTotal_de_mudas() {
	return m_total_de_mudas;
}
void Anfibio::setId(int new_id){
	m_id = new_id;
}
int Anfibio::getId() {
	return m_id;
}

void Anfibio::setClasse(string new_classe) {
	m_classe = new_classe;
}
string Anfibio::getClasse() {
	return m_classe;
}

void Anfibio::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
string Anfibio::getNome_cientifico() {
	return m_nome_cientifico;
}

void Anfibio::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
char Anfibio::getSexo() {
	return m_sexo;
}

void Anfibio::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
double Anfibio::getTamanho() {
	return m_tamanho;
}

void Anfibio::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
string Anfibio::getDieta() {
	return m_dieta;
}

void Anfibio::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
int Anfibio::getVeterinario() {
	return m_veterinario;
}

void Anfibio::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
int Anfibio::getTratador() {
	return m_tratador;
}

void Anfibio::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
string Anfibio::getNome_batismo() {
	return m_nome_batismo;
}