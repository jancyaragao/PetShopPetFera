#include "../include/funcionario.h"
#include <string>
using namespace std;

Funcionario::Funcionario(){ /*empty*/ }
Funcionario::Funcionario(int id, string nome, string cpf, short idade, short tipo_sanguineo,
            string especialidade):m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), 
            m_tipo_sanguineo(tipo_sanguineo), m_especialidade(especialidade) 
            { /*empty*/ }
Funcionario::~Funcionario(){ /*empty*/ }