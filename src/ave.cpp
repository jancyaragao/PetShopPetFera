#include "../include/ave.h"
using namespace std;

Ave::Ave() { /*empty*/ }
Ave::Ave(double tamanho_do_bico_cm, double envergadura_das_asas):m_tamanho_do_bico_cm(tamanho_do_bico_cm), m_envergadura_das_asas(envergadura_das_asas) { /*empty*/ }
Ave::~Ave() { /*empty*/ }

void Ave::setTamanho_do_bico_cm (double new_tamanho_do_bico) {
	m_tamanho_do_bico_cm = new_Tamanho_do_bico;
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