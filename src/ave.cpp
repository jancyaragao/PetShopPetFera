#include "../include/ave.h"
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