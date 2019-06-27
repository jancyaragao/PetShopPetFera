#include "mamifero.h"
#include <string>
using namespace std;
/**
 * @file mamifero.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Animal.
 */
Mamifero::Mamifero() { /*empty*/ }
/**
 * @brief Construtor parametrizado utilizando herança da classe Animal
 */
Mamifero::Mamifero(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string cor_pelo)
				: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
				m_nome_batismo),
				m_cor_pelo(cor_pelo)
{ /*empty*/ }
/**
 * @brief Destrutor
 */
Mamifero::~Mamifero() { /*empty*/ }
/**
 * @brief set da cor do pelo do objeto mamifero
 * @param recebimento da cor de pele para ser "setado"
 */
void Mamifero::setCor_pelo(string new_cor_pelo) {
	m_cor_pelo = new_cor_pelo;
}
/**
 * @brief get da cor de pele do objeto mamifero
 * @return retorna a cor do pelo
 */
string Mamifero::getCor_pelo() {
	return m_cor_pelo;
}
/**
 * @brief set do ID do objeto mamifero
 * @param recebimento do ID para ser "setado"
 */
void Mamifero::setId(int new_id){
	m_id = new_id;
}
/**
 * @brief get do ID do objeto mamifero
 * @return retorna do ID
 */
int Mamifero::getId() {
	return m_id;
}
/**
 * @brief set da classe do objeto mamifero
 * @param recebimento da classe para ser "setado"
 */
void Mamifero::setClasse(string new_classe) {
	m_classe = new_classe;
}
/**
 * @brief get da classe do objeto mamifero
 * @return retorna da classe
 */
string Mamifero::getClasse() {
	return m_classe;
}
/**
 * @brief set do nome cientifico do objeto mamifero
 * @param recebimento do nome cientifico para ser "setado"
 */
void Mamifero::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
/**
 * @brief get do nome cientifico mamifero
 * @return retorna do nome cientifico
 */
string Mamifero::getNome_cientifico() {
	return m_nome_cientifico;
}
/**
 * @brief set do sexo do objeto mamifero
 * @param recebimento do sexo para ser "setado"
 */
void Mamifero::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
/**
 * @brief get do sexo do mamifero
 * @return retorna do sexo
 */
char Mamifero::getSexo() {
	return m_sexo;
}
/**
 * @brief set do Tamanho do objeto mamifero
 * @param recebimento do Tamanho para ser "setado"
 */
void Mamifero::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
/**
 * @brief get do Tamanho do mamifero
 * @return retorna do Tamanho
 */
double Mamifero::getTamanho() {
	return m_tamanho;
}
/**
 * @brief set da dieta do objeto mamifero
 * @param recebimento do Tamanho para ser "setado"
 */
void Mamifero::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
/**
 * @brief get da dieta do mamifero
 * @return retorna do Tamanho
 */
string Mamifero::getDieta() {
	return m_dieta;
}
/**
 * @brief set do veterinario do objeto mamifero
 * @param recebimento do veterinario para ser "setado"
 */
void Mamifero::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
/**
 * @brief get do veterinario do mamifero
 * @return retorna do veterinario
 */
int Mamifero::getVeterinario() {
	return m_veterinario;
}
/**
 * @brief set do Tratador do objeto mamifero
 * @param recebimento do Tratador para ser "setado"
 */
void Mamifero::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
/**
 * @brief get do Tratador do mamifero
 * @return retorna do Tratador
 */
int Mamifero::getTratador() {
	return m_tratador;
}
/**
 * @brief set do Nome de batismo do objeto mamifero
 * @param recebimento do Nome de batismo para ser "setado"
 */
void Mamifero::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
/**
 * @brief get do Nome de batismo do mamifero
 * @return retorna do Nome de batismo
 */
string Mamifero::getNome_batismo() {
	return m_nome_batismo;
}
/**
 * @brief Declaração da funcionalidade de listagem de mamifero através de uma sobrecarga
 */
void Mamifero::imprime (void){
	cout << m_id << m_classe << m_nome_cientifico << m_sexo << 
    m_tamanho << m_dieta << m_veterinario << m_tratador << 
    m_nome_batismo << m_cor_pelo << endl;
}
