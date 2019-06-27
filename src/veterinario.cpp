#include "veterinario.h"
#include <string>
using namespace std;
/**
 * @file veterinario.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details  declaração dos construtores e destrutores, é possível
 * perceber que há o uso de herança dos atributos da classe Funcionário.
 */
Veterinario::Veterinario() { /*empty*/ }
/**
 * @brief construtor parametrizado com herança da classe funcionário
 */
Veterinario::Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
            string especialidade, string crmv) : Funcionario(id, nome, cpf, idade, tipo_sanguineo,
            especialidade), m_crmv(crmv) { /*empty*/ }
Veterinario::~Veterinario() { /*empty*/ }
/**
 * @brief set do crmv do objeto veterinário
 * @param recebimento da novo código de crmv para ser "setado"
 */
void Veterinario::setCrmv(string new_crmv) {
    m_crmv = new_crmv;
}
/**
 * @brief get do crmv do objeto veterinário
 * @return retorna o crmv
 */
string Veterinario::getCrmv() {
    return m_crmv;
}
/**
 * @brief set do id do objeto veterinário
 * @param recebimento da novo id para ser "setado"
 */
void Veterinario::setId(int new_id) {
	m_id = new_id;
}
/**
 * @brief get do id do objeto veterinário
 * @return retorna o id
 */
int Veterinario::getId() {
	return m_id;
}
/**
 * @brief set do nome do objeto veterinário
 * @param recebimento da novo nome para ser "setado"
 */
void Veterinario::setNome(string new_nome) {
	m_nome = new_nome;
}
/**
 * @brief get do nome do objeto veterinário
 * @return retorna o nome
 */
string Veterinario::getNome() {
	return m_nome;
}
/**
 * @brief set do cpf do objeto veterinário
 * @param recebimento da novo cpf para ser "setado"
 */
void Veterinario::setCpf(string new_cpf) {
	m_cpf = new_cpf;
}
/**
 * @brief get do nome do objeto veterinário
 * @return retorna o nome
 */
string Veterinario::getCpf() {
	return m_cpf;
}
/**
 * @brief set da idade do objeto veterinário
 * @param recebimento da nova idade para ser "setada"
 */

void Veterinario::setIdade(short new_idade) {
	m_idade = new_idade;
}
/**
 * @brief get da idade do objeto veterinário
 * @return retorna a idade
 */
short Veterinario::getIdade() {
	return m_idade;
}
/**
 * @brief set do tipo sanguineo do objeto veterinário
 * @param recebimento do tipo sanguineo para ser "setado"
 */
void Veterinario::setTipo_sanguineo(string new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
/**
 * @brief get do tipo sanguineo do objeto veterinário
 * @return retorna o tipo sanguineo
 */
string Veterinario::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}
/**
 * @brief set da especilidade do objeto veterinário
 * @param recebimento da especilidade para ser "setada"
 */
void Veterinario::setEspecialidade(string new_especialidade) {
	m_especialidade = new_especialidade;
}
/**
  * @brief get da especialidade do objeto veterinário
  * @return retorna a especialidade
  */
string Veterinario::getEspecialidade() {
	return m_especialidade;
}
/**
 * @brief declarando a funcionalidade da sobrecarga de operador para listagem.
 */
void Veterinario::imprime(void){
	cout << m_id << m_nome << m_cpf << m_idade <<  m_tipo_sanguineo << m_especialidade << m_crmv << endl;
}
