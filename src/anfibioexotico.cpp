#include "anfibioexotico.h"
using namespace std;
/**
 * @file anfibioexotico.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Anfibio e AnimalExotico.
 */
AnfibioExotico::AnfibioExotico() {/*empty*/}
/**
 *@brief contrutor paramtrizado utilizando herança da classe Anfibio e AnimalExotico
 */
AnfibioExotico::AnfibioExotico(int id, string classe, string nome_cientifico, char sexo, double tamanho,
    string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, string autorizacao_ibama,
    string pais_origem, string cidade_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, 
    id_tratador, nome_batismo, total_de_mudas), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}
/**
 * @brief destrutor
 */
AnfibioExotico::~AnfibioExotico() {/*empty*/}
/**
 * @brief set da autorizacao do ibama do objeto AnfibioExotico
 * @param recebimento da autorizacao do ibama para ser "setado"
 */
void AnfibioExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da autorizacao do ibama do objeto AnfibioExotico
 * @return retorna a autorizacao do ibama
 */
string AnfibioExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set do pais de origem do objeto AnfibioExotico
 * @param recebimento do pais de origem para ser "setado"
 */
void AnfibioExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
};
/**
 * @brief get do pais de origem do objeto AnfibioExotico
 * @return retorna do pais de origem
 */
string AnfibioExotico::getPais_origem (void) {
    return m_pais_origem;
}
/**
 * @brief set da cidade de origem do objeto AnfibioExotico
 * @param recebimento da cidade de origem para ser "setada"
 */
void AnfibioExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
/**
 * @brief get da cidade de origem do objeto AnfibioExotico
 * @return retorna da cidade de origem
 */
string AnfibioExotico::getCidade_origem (void) {
    return m_cidade_origem;
}
