#include <iostream>
#include <string>

#include "../include/animalnativo.h"

AnimalNativo::AnimalNativo ( void ) { /*empty*/ };

AnimalNativo::~AnimalNativo ( void ) { /*empty*/ };

void AnimalNativo::setUF_origem (string newUForigem){
	m_uf_origem = newUForigem;
};
string AnimalNativo::getUF_origem (){
	return m_uf_origem;
};
void AnimalNativo::setAutorizacao (string newAutorizacao){
	m_autorizacao = newAutorizacao;
};
string AnimalNativo::getAutorizacao (){
	return m_autorizacao;
};