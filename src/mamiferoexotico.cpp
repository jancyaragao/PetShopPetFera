#include "mamiferoexotico.h"
using namespace std;
/**
 * @file mamiferoexotico.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details  declaração dos construtores e destrutores, é possível
 * perceber que há o uso de herança dos atributos da classe Animal Exotico e Mamifero.
 */
MamiferoExotico::MamiferoExotico() { /* empty */ }
/**
 * @brief Construtor parametrizado utilizando herança da classe AnimalExotico e Mamifero
 */
MamiferoExotico::MamiferoExotico (int id, string classe, string m_nome_cientifico, char sexo,
    double tamanho, string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
    string autorizacao_ibama, string pais_origem, string cidade_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
    tratador, m_nome_batismo, m_cor_pelo), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}
/**
 * @brief Destrutor
 */
MamiferoExotico::~MamiferoExotico() { /* empty */ }
/**
 * @brief set da Autorizacao do ibama do objeto MamiferoExotico
 * @param recebimento da Autorizacao para ser "setado"
 */
void MamiferoExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da Autorizacao do ibama do objeto MamiferoExotico
 * @return retorna a Autorizacao do ibama
 */
string MamiferoExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set do pais de origem do objeto MamiferoExotico
 * @param recebimento do pais de origem para ser "setado"
 */
void MamiferoExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
/**
 * @brief get do pais de origem do objeto MamiferoExotico
 * @return retorna o pais de origem
 */
string MamiferoExotico::getPais_origem (void) {
    return m_pais_origem;
}
/**
 * @brief set da cidade de origem do objeto MamiferoExotico
 * @param recebimento da cidade de origem para ser "setado"
 */
void MamiferoExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
/**
 * @brief get da cidade de origem do objeto MamiferoExotico
 * @return retorna a cidade de origem
 */
string MamiferoExotico::getCidade_origem (void) {
    return m_cidade_origem;
}
