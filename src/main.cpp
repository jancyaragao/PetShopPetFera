#include <iostream>
#include <map>

#include "../include/sistema.h"

using namespace std;

int main (void) {
	
	map <int, Animal*> animais;


	Sistema A;

	A.cadastrar_animal (1, "classe", "nome_cientifico", 'M', 1.4, "comida", 0, 1, "seu_joao", true, "veneno");

	return 0;
}/* main */
