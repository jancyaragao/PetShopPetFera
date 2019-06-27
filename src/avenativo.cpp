#include "avenativo.h"
using namespace std;
/**
 * @file avenativo.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Ave e AnimalNativo.
 */
AveNativo::AveNativo() {/*empty*/}
/**
 *@brief contrutor paramtrizado utilizando herança da classe AnimalNativo e Ave
 */
AveNativo::AveNativo(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
    double envergadura_das_asas, string autorizacao_ibama, string uf_origem):Ave(id, classe, m_nome_cientifico,
    sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
    AnimalNativo(autorizacao_ibama, uf_origem) {/*empty*/}
/**
 * @brief destrutor
 */
AveNativo::~AveNativo() {/*empty*/}
/**
 * @brief set da Autorizacao do Ibama do objeto AveNativo
 * @param recebimento da Autorizacao do Ibama para ser "setado"
 */
void AveNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da Autorizacao do Ibama do objeto AveNativo
 * @return retorna a Autorizacao do Ibama
 */
string AveNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set da UF de origem do objeto AveNativo
 * @param recebimento da UF de origem para ser "setado"
 */
void AveNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}
/**
 * @brief get da UF de origemdo objeto AveNativo
 * @return retorna a UF de origem
 */
string AveNativo::getUF_origem ( void ) {
    return m_uf_origem;
}
