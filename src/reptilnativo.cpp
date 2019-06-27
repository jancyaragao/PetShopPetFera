#include "reptilnativo.h"
using namespace std;
/**
 * @file reptilnativo.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe AnimalNativo e reptil.
 */
ReptilNativo::ReptilNativo() { /* empty */ }
/**
 * @brief contrutor parametrizado com herança de classe de Reptíl e AnimalNativo
 */
ReptilNativo::ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
    string tipo_veneno, string autorizacao_ibama, string uf_origem):Reptil(id, classe, m_nome_cientifico, sexo,
    tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), 
    AnimalNativo (autorizacao_ibama, uf_origem){/*empty*/}
/**
 * @brief destrutor
 */
ReptilNativo::~ReptilNativo() { /* empty */ }
/**
 * @brief set da autorizacao do ibama do objeto ReptilNativo
 * @param recebimento da autorizacao ibama para ser "setado"
 */
void ReptilNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da autorizacao do ibama do objeto ReptilNativo
 * @return retorna autorizacao ibama
 */
string ReptilNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set da UF de origem do objeto ReptilNativo
 * @param recebimento da UF de origem para ser "setado"
 */
void ReptilNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}
/**
 * @brief get da UF de origem do objeto ReptilNativo
 * @return retorna autorizacao UF de origem
 */
string ReptilNativo::getUF_origem ( void ) {
    return m_uf_origem;
}
