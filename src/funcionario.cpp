#include "../include/funcionario.h"
#include <string>
using namespace std;

Funcionario::Funcionario(){ /*empty*/ }
Funcionario::Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo, char fator_rh, string especialidade):m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), m_tipo_sanguineo(tipo_sanguineo), m_fator_rh(fator_rh), m_especialidade(especialidade) { /*empty*/ }
Funcionario::~Funcionario(){ /*empty*/ }

void Funcionario::setId(int new_id) {
	m_id = new_id;
}
int Funcionario::getId() {
	return m_id;
}

void Funcionario::setNome(string new_nome) {
	m_nome = new_nome;
}
string Funcionario::getNome() {
	return m_nome
}

void Funcionario::setCpf(string new_cpf) {
	m_cpf = new_cpf;
}
string Funcionario::getCpf() {
	m_cpf;
}

void Funcionario::setIdade(short new_idade) {
	m_idade = new_idade;
}
short Funcionario::getIdade() {
	return m_idade;
}

void Funcionario::setTipo_sanguineo(short new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
short Funcionario::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}

void Funcionario::setFator_rh(char new_fator_rh) {
	m_fator_rh = new_fator_rh;
}
char Funcionario::getFator_rh() {
	return m_fator_rh;
}

void Funcionario::setEspecialidade(string new_especialidade) {
	m_especialidade = new_especialidade;
}
string Funcionario::getEspecialidade() {
	return m_especialidade;
}