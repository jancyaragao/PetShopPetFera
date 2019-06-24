#include <iostream>
#include <string>

#include "../include/animalexotico.h"

AnimalExotico::AnimalExotico ( void ) { /*empty*/ }

AnimalExotico::AnimalExotico (string pais_origem, string cidade_origem) {/*empty*/}

AnimalExotico::~AnimalExotico ( void ) { /*empyt*/ }

void AnimalExotico::setPais_origem (string newPais_origem){
	m_pais_origem = newPais_origem;
};
string AnimalExotico::getPais_origem ( void ){
	return m_pais_origem;
};

void AnimalExotico::setCidade_origem (string newCidade_origem){
	m_cidade_origem = newCidade_origem;
}
string AnimalExotico::getCidade_origem (void){
	return m_cidade_origem;
}