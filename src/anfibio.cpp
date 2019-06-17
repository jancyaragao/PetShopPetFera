#include "../include/anfibio.h"

using namespace std;

Anfibio::Anfibio(void) { /*empty*/ }

Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta,
				int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas)
				: Animal (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
				nome_batismo), m_total_de_mudas(total_de_mudas)
				{/*empty*/}

Anfibio::~Anfibio(void) { /*empty*/ }

void Anfibio::setTotal_de_mudas(int new_total_de_mudas) {
	m_total_de_mudas = new_total_de_mudas;
}
int Anfibio::getTotal_de_mudas() {
	return m_total_de_mudas;
}