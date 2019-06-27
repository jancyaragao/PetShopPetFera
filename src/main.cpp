#include <iostream>
#include <map>

// *Alterar Caminho =>
// **Classe s Abstratas
// ***Makefile
// ****

#include "sistema.h"

using namespace std;

int main (void) {
	
	Sistema A;

	A.cadastrar_animal (1, "classe 1", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", "cinza");
	A.cadastrar_animal (1, "classe 1", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", "cinza");
	A.cadastrar_animal (2, "classe 2", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", true, "veneno");
	A.cadastrar_animal (3, "classe 3", "m_nome_cientifico", 'F', 1.4, "dieta", 1, 0, "m_nome_batismo", "azul", "autorizacao", "pais_origem", "cidade_origem");
	A.cadastrar_animal (4, "classe 4", "m_nome_cientifico", 'F', 1.4, "dieta", 1, 0, "m_nome_batismo", "azul", "autorizacao", "pais_origem", "cidade_origem");
	A.cadastrar_animal (5, "classe 5", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", true, "veneno");
	A.cadastrar_animal (6, "classe 6", "noeno", 'M', 1.6, "dieta", 1, 0, "asf", false, "de rato", "string", "pais", "origem");
	A.cadastrar_animal (7, "classe 7", "Nome", 'M', 0.3, "dietaaaaa", 0, 1, "aaa", 3);

	A.cadastrar_funcionario (1, "joao", "123123123",32, "AA", "especial", 9000);
	A.cadastrar_funcionario (2, "joao", "123123123",32, "AA", "especial", "90001");
	A.cadastrar_funcionario (3, "joao", "123123123",32, "AA", "especial", 8000);
	A.cadastrar_funcionario (4, "joao", "123123123",32, "AA", "especial", "80001");

	A.salvarArquivoAnimais();
	A.salvarArquivoFuncionarios();

	A.remover_animal(1);
	A.remover_funcionario(1);

	A.salvarArquivoAnimais();
	A.salvarArquivoFuncionarios();

	A.editar_funcionario(2, "jose", "123123123", 12, "A+", "especial", "9000");

	A.listarAnimais();
	A.listarFuncionarios();

	A.consultarAnimal(5);
	A.consultarFuncionario(2);

	return 0;
}/* main */
