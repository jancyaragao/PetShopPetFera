#include "funcionario.h"
#include <QString>
//using namespace std;

Funcionario::Funcionario(){ /*empty*/ }
Funcionario::Funcionario(int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
            QString especialidade):m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), 
            m_tipo_sanguineo(tipo_sanguineo), m_especialidade(especialidade) { /*empty*/ }
Funcionario::~Funcionario(){ /*empty*/ }
