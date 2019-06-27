#include "aveexotico.h"
using namespace std;
/**
 * @file aveexotico.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Ave e AnimalExotico.
 */
AveExotico::AveExotico() { /* empty */ }
/**
 *@brief contrutor paramtrizado utilizando herança da Classe Ave e AnimalExotico
 */
AveExotico::AveExotico(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
    double envergadura_das_asas, string autorizacao_ibama, string pais_origem,string cidade_origem):Ave(id, 
    classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, tamanho_do_bico_cm, 
    envergadura_das_asas), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem) {/*empty*/}
/**
 * @brief destrutor
 */
AveExotico::~AveExotico() { /* empty */ }
/**
 * @brief set da autorizacao ibama do objeto AveExotico
 * @param recebimento da autorizacao ibama para ser "setado"
 */
void AveExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da autorizacao ibama do objeto AveExotico
 * @return retorna da autorizacao ibama
 */
string AveExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set do pais de origem do objeto AveExotico
 * @param recebimento do pais de origem para ser "setado"
 */
void AveExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
/**
 * @brief get do pais de origem do objeto AveExotico
 * @return retorna do pais de origem
 */
string AveExotico::getPais_origem (void) {
    return m_pais_origem;
}
/**
 * @brief set da cidade de origem do objeto AveExotico
 * @param recebimento da cidade de origem para ser "setado"
 */
void AveExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
/**
 * @brief get da cidade de origemdo objeto AveExotico
 * @return retorna do pais da cidade de origem
 */
string AveExotico::getCidade_origem (void) {
    return m_cidade_origem;
}
