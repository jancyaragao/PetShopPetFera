#include "tratador.h"
using namespace std;
/**
 * @file tratador.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Funcionário.
 */
Tratador::Tratador() { /*empty*/ }
/**
 *@brief contrutor paramtrizado utilizando herança da classe funcionário
 */
Tratador::Tratador(int id, string nome, string cpf, short idade, string tipo_sanguineo,
            string especialidade, int nivel_de_seguranca): Funcionario(id, nome, cpf, idade, tipo_sanguineo,
            especialidade), m_nivel_de_seguranca(nivel_de_seguranca) { /*empty*/ }
/**
 * @brief destrutor
 */
Tratador::~Tratador() { /*empty*/ }
/**
 * @brief set do nível de segurança do objeto tratador
 * @param recebimento do nível de segurança para ser "setado"
 */
void Tratador::setNivel_de_seguranca(int new_nivel_de_seguranca) {
    m_nivel_de_seguranca = new_nivel_de_seguranca;
}
/**
 * @brief get do nível de segurança do objeto tratador
 * @return retorna o crmv
 */
int Tratador::getNivel_de_seguranca() {
    return m_nivel_de_seguranca;
}
/**
 * @brief set do ID do objeto tratador
 * @param recebimento do ID para ser "setado"
 */
void Tratador::setId(int new_id) {
	m_id = new_id;
}
/**
* @brief get do ID do objeto tratador
* @return retorna o ID
*/
int Tratador::getId() {
	return m_id;
}
/**
 * @brief set do nome do objeto tratador
 * @param recebimento do nome para ser "setado"
 */
void Tratador::setNome(string new_nome) {
	m_nome = new_nome;
}
/**
 * @brief get do nome do objeto tratador
 * @return retorna o nome
 */
string Tratador::getNome() {
	return m_nome;
}
/**
 * @brief set do CPF do objeto tratador
 * @param recebimento do CPF para ser "setado"
 */
void Tratador::setCpf(string new_cpf) {
	m_cpf = new_cpf;
}
/**
 * @brief get do CPF do objeto tratador
 * @return retorna o CPF
 */
string Tratador::getCpf() {
	return m_cpf;
}
/**
 * @brief set da idade do objeto tratador
 * @param recebimento da idade para ser "setado"
 */
void Tratador::setIdade(short new_idade) {
	m_idade = new_idade;
}
/**
 * @brief get da idade do objeto tratador
 * @return retorna a idade
 */
short Tratador::getIdade() {
	return m_idade;
}
/**
 * @brief set do tipo sanguíneo do objeto tratador
 * @param recebimento do tipo sanguíneo para ser "setado"
 */
void Tratador::setTipo_sanguineo(string new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
/**
 * @brief get do tipo sanguíneo do objeto tratador
 * @return retorna o tipo sanguíneo
 */
string Tratador::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}
/**
 * @brief set da especilidade do objeto tratador
 * @param recebimento da especilidade para ser "setado"
 */
void Tratador::setEspecialidade(string new_especialidade) {
	m_especialidade = new_especialidade;
}
/**
 * @brief get da especialidade do objeto tratador
 * @return retorna a especilidade
 */
string Tratador::getEspecialidade() {
	return m_especialidade;
}
/**
 * @brief declarando a funcionalidade da sobrecarga de listagem.
 */
void Tratador::imprime(void){
	cout << m_id << m_nome << m_cpf << m_idade <<  m_tipo_sanguineo << m_especialidade <<
	m_nivel_de_seguranca << endl;
}
