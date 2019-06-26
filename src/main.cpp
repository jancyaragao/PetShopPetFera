#include <iostream>
#include <map>

// *Alterar Caminho =>
// **Classes Abstratas
// ***Makefile
// ****

#include "../include/sistema.h"

using namespace std;

int main (void) {
	
	Sistema A;

	A.cadastrar_animal (1, "classe", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", "cinza");
	A.cadastrar_animal (2, "classe", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", true, "veneno");
	A.cadastrar_animal (3, "classe", "m_nome_cientifico", 'F', 1.4, "dieta", 1, 0, "m_nome_batismo", "azul", "autorizacao", "pais_origem", "cidade_origem");

	return 0;
}/* main */
