#include "../include/ave.h"
using namespace std;

Ave::Ave() { /*empty*/ }
Ave::Ave(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
        QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
        double envergadura_das_asas) : Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
        veterinario, tratador, m_nome_batismo), m_tamanho_do_bico_cm(tamanho_do_bico_cm),
        m_envergadura_das_asas(envergadura_das_asas)
        { /*empty*/ }

Ave::~Ave() { /*empty*/ }

void Ave::setTamanho_do_bico_cm (double new_tamanho_do_bico) {
	m_tamanho_do_bico_cm = new_tamanho_do_bico;
}
double Ave::getTamanho_do_bico_cm () {
	return m_tamanho_do_bico_cm;
}

void Ave::setEnvergaruda_das_asas (double new_envergadura_das_asas) {
	m_envergadura_das_asas = new_envergadura_das_asas;
}
double Ave::getEnvergadura_das_asas () {
	return m_envergadura_das_asas;
}

void Ave::setId(int new_id){
	m_id = new_id;
}
int Ave::getId() {
	return m_id;
}

void Ave::setClasse(QString new_classe) {
	m_classe = new_classe;
}
QString Ave::getClasse() {
	return m_classe;
}

void Ave::setNome_cientifico(QString new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
QString Ave::getNome_cientifico() {
	return m_nome_cientifico;
}

void Ave::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
char Ave::getSexo() {
	return m_sexo;
}

void Ave::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
double Ave::getTamanho() {
	return m_tamanho;
}

void Ave::setDieta(QString new_dieta) {
	m_dieta = new_dieta;
}
QString Ave::getDieta() {
	return m_dieta;
}

void Ave::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
int Ave::getVeterinario() {
	return m_veterinario;
}

void Ave::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
int Ave::getTratador() {
	return m_tratador;
}

void Ave::setNome_batismo(QString new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
QString Ave::getNome_batismo() {
	return m_nome_batismo;
}