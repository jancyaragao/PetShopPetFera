#include <iostream>
#include <string>

#include "animalsilvestre.h"
/**
 * @file animalsilvestre.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores
 */
AnimalSilvestre::AnimalSilvestre ( void ) {/* empty */ };
AnimalSilvestre::AnimalSilvestre(string autorizacao_ibama):m_autorizacao_ibama(autorizacao_ibama) { /* empty */ }
/**
    @brief destrutor da classe reptil
 */
AnimalSilvestre::~AnimalSilvestre ( void ) { /* empty */ };
