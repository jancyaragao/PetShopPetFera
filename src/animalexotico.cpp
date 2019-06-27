#include <iostream>
#include <string>

#include "animalexotico.h"

AnimalExotico::AnimalExotico ( void ) { /*empty*/ }
AnimalExotico::AnimalExotico (string autorizacao_ibama, string pais_origem, string cidade_origem):AnimalSilvestre(autorizacao_ibama), 
	m_pais_origem(pais_origem), m_cidade_origem(cidade_origem)  {/*empty*/}
AnimalExotico::~AnimalExotico ( void ) { /*empyt*/ }