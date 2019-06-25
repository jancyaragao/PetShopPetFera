#include "../include/veterinario.h"
#include <string>
using namespace std;

Veterinario::Veterinario() { /*empty*/ }
Veterinario::Veterinario(int id, string nome, string cpf, short idade, short tipo_sanguineo,
            char fator_rh, string especialidade, string crmv) : Funcionario(id, nome, cpf, idade, tipo_sanguineo,
            fator_rh, especialidade), m_crmv(crmv) { /*empty*/ }
Veterinario::~Veterinario() { /*empty*/ }

	void Veterinario::setCrmv(string new_crmv) {
		m_crmv = new_crmv;
	}
	string Veterinario::getCrmv() {
		return m_crmv;
	}

void Veterinario::setId(int new_id) {
	m_id = new_id;
}
int Veterinario::getId() {
	return m_id;
}

void Veterinario::setNome(string new_nome) {
	m_nome = new_nome;
}
string Veterinario::getNome() {
	return m_nome;
}

void Veterinario::setCpf(string new_cpf) {
	m_cpf = new_cpf;
}
string Veterinario::getCpf() {
	return m_cpf;
}

void Veterinario::setIdade(short new_idade) {
	m_idade = new_idade;
}
short Veterinario::getIdade() {
	return m_idade;
}

void Veterinario::setTipo_sanguineo(short new_tipo_sanguineo) {
	m_tipo_sanguineo = new_tipo_sanguineo;
}
short Veterinario::getTipo_sanguineo() {
	return m_tipo_sanguineo;
}

void Veterinario::setFator_rh(char new_fator_rh) {
	m_fator_rh = new_fator_rh;
}
char Veterinario::getFator_rh() {
	return m_fator_rh;
}

void Veterinario::setEspecialidade(string new_especialidade) {
	m_especialidade = new_especialidade;
}
string Veterinario::getEspecialidade() {
	return m_especialidade;
}