#include "mamiferonativo.h"
using namespace std;
/**
 * @file mamiferonativo.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores, é possível perceber que há o uso de herança dos atributos da classe Mamifero e Animal Nativo
 */
MamiferoNativo::MamiferoNativo() { /* empty */ }
/**
 * @brief contrutor parametrizado utilizando herança da classe Mamifero e AnimalNativo
 */
MamiferoNativo::MamiferoNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string autorizacao_ibama,
    string uf_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
    veterinario, tratador, m_nome_batismo, m_cor_pelo), AnimalNativo(autorizacao_ibama, uf_origem) {/*empty*/}
/**
 * @brief Declaração da funcionalidade dos métodos getters e setters
 * destrutor da classe MamiferoNativo
 */
MamiferoNativo::~MamiferoNativo() { /* empty */ }
/**
 * @brief set do Autorizacao do ibama do MamiferoNativo
 * @param recebe autorizacao do ibama
 */
void MamiferoNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da Autorizacao do ibama do objeto MamiferoNativo
 * @return retorna a autorizacao do ibama
 */
string MamiferoNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set da UF de origem do MamiferoNativo
 * @param recebe UF de origem
 */
void MamiferoNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}/**
  * @brief get da UF de origem do objeto MamiferoNativo
  * @return retorna UF de origem
  */
string MamiferoNativo::getUF_origem ( void ) {
    return m_uf_origem;
}
