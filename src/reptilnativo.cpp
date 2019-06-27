#include "reptilnativo.h"
using namespace std;

ReptilNativo::ReptilNativo() { /* empty */ }
ReptilNativo::ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
    string tipo_veneno, string autorizacao_ibama, string uf_origem):Reptil(id, classe, m_nome_cientifico, sexo,
    tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), 
    AnimalNativo (autorizacao_ibama, uf_origem){/*empty*/}
ReptilNativo::~ReptilNativo() { /* empty */ }

void ReptilNativo::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
string ReptilNativo::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}

void ReptilNativo::setUF_origem (string newUForigem) {
    m_uf_origem = newUForigem;
}
string ReptilNativo::getUF_origem ( void ) {
    return m_uf_origem;
}