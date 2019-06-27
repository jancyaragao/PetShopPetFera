#include <iostream>
#include <string>

#include "animalnativo.h"
/**
 * @file ranimanativo.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores, é possível perceber que há o uso de herança dos atributos da classe Animal
 */
AnimalNativo::AnimalNativo ( void ) { /*empty*/ };
/**
 * @brief declaração do construtor parametrizado
 */
AnimalNativo::AnimalNativo (string autorizacao_ibama, string uf_origem):AnimalSilvestre(autorizacao_ibama), 
	m_uf_origem(uf_origem) {/*empty*/};
/**
 * @brief declaração do destrutor
 */
AnimalNativo::~AnimalNativo ( void ) { /*empty*/ };
