#include "../include/anfibionativo.h"
using namespace std;

AnfibioNativo::AnfibioNativo() {/*empty*/}
AnfibioNativo::AnfibioNativo (int id, string classe, string nome_cientifico, char sexo, double tamanho,
    string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
    string autorizacao_ibama, string uf_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta,
    id_veterinario, id_tratador, nome_batismo, total_de_mudas), AnimalNativo(autorizacao_ibama, uf_origem){/*empty*/}
AnfibioNativo::~AnfibioNativo() {/*empty*/}

void AnfibioNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
string AnfibioNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}

void AnfibioNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}
string AnfibioNativo::getUF_origem ( void ) {
    return m_uf_origem;
}