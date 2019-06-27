#include <iostream>
#include <string>
/**
 * @file animalexotico.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores
 */
#include "animalexotico.h"

AnimalExotico::AnimalExotico ( void ) { /*empty*/ }
/**
 * @brief contrutor parametrizado
 */
AnimalExotico::AnimalExotico (string autorizacao_ibama, string pais_origem, string cidade_origem):AnimalSilvestre(autorizacao_ibama), 
	m_pais_origem(pais_origem), m_cidade_origem(cidade_origem)  {/*empty*/}
/**
 * @brief destrutor
 */
AnimalExotico::~AnimalExotico ( void ) { /*empyt*/ }
