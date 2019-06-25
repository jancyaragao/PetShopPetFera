#include <iostream>
#include <QString>

#include "../include/animalexotico.h"

AnimalExotico::AnimalExotico ( void ) { /*empty*/ }
AnimalExotico::AnimalExotico (QString autorizacao_ibama, QString pais_origem, QString cidade_origem):
	AnimalSilvestre(autorizacao_ibama), m_pais_origem(pais_origem), m_cidade_origem(cidade_origem)  {/*empty*/}
AnimalExotico::~AnimalExotico ( void ) { /*empyt*/ }

void AnimalExotico::setPais_origem (QString newPais_origem){
	m_pais_origem = newPais_origem;
};
QString AnimalExotico::getPais_origem ( void ){
	return m_pais_origem;
};

void AnimalExotico::setCidade_origem (QString newCidade_origem){
	m_cidade_origem = newCidade_origem;
}
QString AnimalExotico::getCidade_origem (void){
	return m_cidade_origem;
}