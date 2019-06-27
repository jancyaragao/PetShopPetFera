#include "reptilexotico.h"
using namespace std;
/**
 * @file reptilexotico.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe AnimalExotico e Reptil.
 */
ReptilExotico::ReptilExotico() { /* empty */ }
/**
 * @brief Construtor parametrizado utilizando herança da classe Reptil e AnimalExotico
 */
ReptilExotico::ReptilExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno, 
    string autorizacao_ibama, string pais_origem, string cidade_origem):Reptil(id, classe, m_nome_cientifico, 
    sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), AnimalExotico(autorizacao_ibama, 
    pais_origem, cidade_origem) {/*empty*/}
/**
 * @brief Destrutor
 */
ReptilExotico::~ReptilExotico() { /* empty */ }
/**
 * @brief set da autorizacao do ibama do objeto ReptilExotico
 * @param recebimento da autorizacao do ibama para ser "setado"
 */
void ReptilExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da autorizacao do ibama do objeto ReptilExotico
 * @return retorna a autorizacao do ibama
 */
string ReptilExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set do pais de origem do objeto ReptilExotico
 * @param recebimento do pais de origem para ser "setado"
 */
void ReptilExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
/**
 * @brief get do pais de origem do objeto ReptilExotico
 * @return retorna do pais de origem
 */
string ReptilExotico::getPais_origem (void) {
    return m_pais_origem;
}
/**
 * @brief set da cidade de origem do objeto ReptilExotico
 * @param recebimento da cidade de origem para ser "setada"
 */
void ReptilExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
/**
 * @brief get da cidade de origem do objeto ReptilExotico
 * @return retorna da cidade de origem
 */
string ReptilExotico::getCidade_origem (void) {
    return m_cidade_origem;
}
