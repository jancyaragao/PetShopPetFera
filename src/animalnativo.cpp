//#include <iostream>
#include <QString>

#include "animalnativo.h"

AnimalNativo::AnimalNativo ( void ) { /*empty*/ };
AnimalNativo::AnimalNativo (QString autorizacao_ibama, QString uf_origem):
	AnimalSilvestre(autorizacao_ibama), m_uf_origem(uf_origem) {/*empty*/};
AnimalNativo::~AnimalNativo ( void ) { /*empty*/ };

void AnimalNativo::setUF_origem (QString newUForigem){
	m_uf_origem = newUForigem;
};
QString AnimalNativo::getUF_origem (){
	return m_uf_origem;
};
