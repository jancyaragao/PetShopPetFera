#include <iostream>
#include <string>

#include "../include/animalsilvestre.h"

AnimalSilvestre::AnimalSilvestre ( void ) {/* empty */ };

AnimalSilvestre::~AnimalSilvestre ( void ) { /* empty */ };

void AnimalSilvestre::setAutorizacao_ibama (string newAutorizacao_ibama) {
	autorizacao_ibama = newAutorizacao_ibama;
}; /*setAutorizacao_ibama*/

string AnimalSilvestre::getAutorizacao_ibama ( void ) {
	return autorizacao_ibama;
}; /*getAutorizacao_ibama*/