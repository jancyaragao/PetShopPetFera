#include "ave.h"
using namespace std;
/**
 * @file ave.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Animal.
 */
Ave::Ave() { /*empty*/ }
/**
 *@brief contrutor paramtrizado utilizando herança da classe Animal
 */
Ave::Ave(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
        string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
        double envergadura_das_asas) : Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
        veterinario, tratador, m_nome_batismo), m_tamanho_do_bico_cm(tamanho_do_bico_cm),
        m_envergadura_das_asas(envergadura_das_asas)
        { /*empty*/ }
/**
 * @brief destrutor
 */
Ave::~Ave() { /*empty*/ }
/**
 * @brief set do Tamanho do bico em CM do objeto Ave
 * @param recebimento do Tamanho do bico em CM para ser "setado"
 */
void Ave::setTamanho_do_bico_cm (double new_tamanho_do_bico) {
	m_tamanho_do_bico_cm = new_tamanho_do_bico;
}
/**
 * @brief get do Tamanho do bico em CM do objeto Ave
 * @return retorna o Tamanho do bico em CM
 */
double Ave::getTamanho_do_bico_cm () {
	return m_tamanho_do_bico_cm;
}
/**
 * @brief set da envergadura das asas do objeto Ave
 * @param recebimento da envergadura das asas para ser "setado"
 */
void Ave::setEnvergaruda_das_asas (double new_envergadura_das_asas) {
	m_envergadura_das_asas = new_envergadura_das_asas;
}
/**
 * @brief get do envergadura das asas do objeto Ave
 * @return retorna o envergadura das asas
 */
double Ave::getEnvergadura_das_asas () {
	return m_envergadura_das_asas;
}
/**
 * @brief set do ID do objeto Ave
 * @param recebimento do ID para ser "setado"
 */
void Ave::setId(int new_id){
	m_id = new_id;
}
/**
 * @brief get do ID do objeto Ave
 * @return retorna o ID
 */
int Ave::getId() {
	return m_id;
}
/**
 * @brief set da Classe do objeto Ave
 * @param recebimento da Classe para ser "setado"
 */
void Ave::setClasse(string new_classe) {
	m_classe = new_classe;
}
/**
 * @brief get da Classe do objeto Ave
 * @return retorna o Classe
 */
string Ave::getClasse() {
	return m_classe;
}
/**
 * @brief set do nome cientifico do objeto Ave
 * @param recebimento do nome cientifico para ser "setado"
 */
void Ave::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
/**
 * @brief get do nome cientifico do objeto Ave
 * @return retorna do nome cientifico
 */
string Ave::getNome_cientifico() {
	return m_nome_cientifico;
}
/**
 * @brief set do sexo do objeto Ave
 * @param recebimento do sexo para ser "setado"
 */
void Ave::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
/**
 * @brief get do sexo do objeto Ave
 * @return retorna do sexo
 */
char Ave::getSexo() {
	return m_sexo;
}
/**
 * @brief set do Tamanho do objeto Ave
 * @param recebimento do Tamanho para ser "setado"
 */
void Ave::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
/**
 * @brief get do Tamanho do objeto Ave
 * @return retorna o Tamanho
 */
double Ave::getTamanho() {
	return m_tamanho;
}
/**
 * @brief set da dieta do objeto Ave
 * @param recebimento da dieta para ser "setado"
 */
void Ave::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
/**
 * @brief get da dieta do objeto Ave
 * @return retorna da dieta
 */
string Ave::getDieta() {
	return m_dieta;
}
/**
 * @brief set do veterinario do objeto Ave
 * @param recebimento do veterinario para ser "setado"
 */
void Ave::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
/**
 * @brief get do veterinario do objeto Ave
 * @return retorna do veterinario
 */
int Ave::getVeterinario() {
	return m_veterinario;
}
/**
 * @brief set do Tratador do objeto Ave
 * @param recebimento do Tratador para ser "setado"
 */
void Ave::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
/**
 * @brief get do Tratador do objeto Ave
 * @return retorna do Tratador
 */
int Ave::getTratador() {
	return m_tratador;
}
/**
 * @brief set do Nome de batismo do objeto Ave
 * @param recebimento do Nome de batismo para ser "setado"
 */
void Ave::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
/**
 * @brief get do nome de batismo do objeto Ave
 * @return retorna do nome de batismo
 */
string Ave::getNome_batismo() {
	return m_nome_batismo;
}
/**
 * @brief declarando a funcionalidade da sobrecarga de operador para listagem.
 */
void Ave::imprime (void){
	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho << m_dieta <<
	m_veterinario << m_tratador <<  m_nome_batismo << m_tamanho_do_bico_cm << 
	m_envergadura_das_asas << endl;
}
