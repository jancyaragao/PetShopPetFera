#include "funcionario.h"
#include <string>
using namespace std;
/**
 * @file funcionario.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @betails Arquivo CPP da classe funcionário, declaração dos construtores e destrutor.
 */
Funcionario::Funcionario(){ /*empty*/ }
/**
 *@brief Construtor parametrizado
 */
Funcionario::Funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
            string especialidade):m_id(id), m_nome(nome), m_cpf(cpf), m_idade(idade), 
            m_tipo_sanguineo(tipo_sanguineo), m_especialidade(especialidade) { /*empty*/ }
/**
 *@brief Destrutor
 */
Funcionario::~Funcionario(){ /*empty*/ }
