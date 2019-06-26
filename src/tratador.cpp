#include "tratador.h"
//using namespace std;

Tratador::Tratador() { /*empty*/ }
Tratador::Tratador(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade, int nivel_de_seguranca): Funcionario(id, nome, cpf, idade, tipo_sanguineo,
            especialidade), m_nivel_de_seguranca(nivel_de_seguranca) { /*empty*/ }
Tratador::~Tratador() { /*empty*/ }

	void Tratador::setNivel_de_seguranca(int new_nivel_de_seguranca) {
		m_nivel_de_seguranca = new_nivel_de_seguranca;
	}
	int Tratador::getNivel_de_seguranca() {
		return m_nivel_de_seguranca;
	}

void Tratador::setId(int new_id) {
	m_id = new_id;
}
int Tratador::getId() {
	return m_id;
}

void Tratador::setNome(QString new_nome) {
	m_nome = new_nome;
}
QString Tratador::getNome() {
	return m_nome;
}

void Tratador::setCpf(QString new_cpf) {
	m_cpf = new_cpf;
}
QString Tratador::getCpf() {
	return m_cpf;
}

void Tratador::setIdade(short new_idade) {
	m_idade = new_idade;
}
short Tratador::getIdade() {
	return m_idade;
}

void Tratador::setTipo_sanguineo(QString new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
QString Tratador::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}

void Tratador::setEspecialidade(QString new_especialidade) {
	m_especialidade = new_especialidade;
}
QString Tratador::getEspecialidade() {
	return m_especialidade;
}
