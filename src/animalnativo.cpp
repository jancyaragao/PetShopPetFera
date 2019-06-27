#include <iostream>
#include <string>

#include "animalnativo.h"

AnimalNativo::AnimalNativo ( void ) { /*empty*/ };
AnimalNativo::AnimalNativo (string autorizacao_ibama, string uf_origem):AnimalSilvestre(autorizacao_ibama), 
	m_uf_origem(uf_origem) {/*empty*/};
AnimalNativo::~AnimalNativo ( void ) { /*empty*/ };