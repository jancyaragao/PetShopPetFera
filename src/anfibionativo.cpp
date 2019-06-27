#include "anfibionativo.h"
using namespace std;
/**
 * @file anfibionativo.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores, é possível perceber que há o uso de herança dos atributos da classe Anfibio e AnimalNativo
 */
AnfibioNativo::AnfibioNativo() {/*empty*/}
/**
 * @brief contrutor parametrizado com herança de classe de Anfibio e AnimalNativo
 */
AnfibioNativo::AnfibioNativo (int id, string classe, string nome_cientifico, char sexo, double tamanho,
    string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
    string autorizacao_ibama, string uf_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta,
    id_veterinario, id_tratador, nome_batismo, total_de_mudas), AnimalNativo(autorizacao_ibama, uf_origem){/*empty*/}
/**
 * @brief destrutor
 */
AnfibioNativo::~AnfibioNativo() {/*empty*/}
/**
 * @brief set da autorizacao do ibama do objeto AnfibioNativo
 * @param recebimento da autorizacao do ibama para ser "setado"
 */
void AnfibioNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
/**
 * @brief get da autorizacao do ibama do objeto AnfibioNativo
 * @return retorna a autorizacao do ibama
 */
string AnfibioNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}
/**
 * @brief set da UF de origem do objeto AnfibioNativo
 * @param recebimento da UF de origem para ser "setado"
 */
void AnfibioNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}
/**
 * @brief get da UF de origem do objeto AnfibioNativo
 * @return retorna a UF de origem
 */
string AnfibioNativo::getUF_origem ( void ) {
    return m_uf_origem;
}
