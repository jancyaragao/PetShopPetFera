#include "../include/veterinario.h"
#include <QString>
using namespace std;

Veterinario::Veterinario() { /*empty*/ }
Veterinario::Veterinario(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade, QString crmv) : Funcionario(id, nome, cpf, idade, tipo_sanguineo,
            especialidade), m_crmv(crmv) { /*empty*/ }
Veterinario::~Veterinario() { /*empty*/ }

	void Veterinario::setCrmv(QString new_crmv) {
		m_crmv = new_crmv;
	}
	QString Veterinario::getCrmv() {
		return m_crmv;
	}

void Veterinario::setId(int new_id) {
	m_id = new_id;
}
int Veterinario::getId() {
	return m_id;
}

void Veterinario::setNome(QString new_nome) {
	m_nome = new_nome;
}
QString Veterinario::getNome() {
	return m_nome;
}

void Veterinario::setCpf(QString new_cpf) {
	m_cpf = new_cpf;
}
QString Veterinario::getCpf() {
	return m_cpf;
}

void Veterinario::setIdade(short new_idade) {
	m_idade = new_idade;
}
short Veterinario::getIdade() {
	return m_idade;
}

void Veterinario::setTipo_sanguineo(QString new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
QString Veterinario::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}

void Veterinario::setEspecialidade(QString new_especialidade) {
	m_especialidade = new_especialidade;
}
QString Veterinario::getEspecialidade() {
	return m_especialidade;
}