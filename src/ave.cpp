#include "ave.h"
using namespace std;

Ave::Ave() { /*empty*/ }
Ave::Ave(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
        string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
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

void Ave::setClasse(string new_classe) {
	m_classe = new_classe;
}
string Ave::getClasse() {
	return m_classe;
}

void Ave::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
string Ave::getNome_cientifico() {
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

void Ave::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
string Ave::getDieta() {
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

void Ave::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
string Ave::getNome_batismo() {
	return m_nome_batismo;
}

void Ave::imprime (void){
	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho << m_dieta <<
	m_veterinario << m_tratador <<  m_nome_batismo << m_tamanho_do_bico_cm << 
	m_envergadura_das_asas << endl;
}