//#include <iostream>
#include <QString>

#include "animalsilvestre.h"

AnimalSilvestre::AnimalSilvestre ( void ) {/* empty */ };
AnimalSilvestre::AnimalSilvestre(QString autorizacao_ibama):m_autorizacao_ibama(autorizacao_ibama) { /* empty */ }
AnimalSilvestre::~AnimalSilvestre ( void ) { /* empty */ };

void AnimalSilvestre::setAutorizacao_ibama (QString newAutorizacao_ibama) {
	m_autorizacao_ibama = newAutorizacao_ibama;
}; /*setAutorizacao_ibama*/

QString AnimalSilvestre::getAutorizacao_ibama ( void ) {
	return m_autorizacao_ibama;
}; /*getAutorizacao_ibama*/
