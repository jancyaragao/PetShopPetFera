#include "../include/reptilexotico.h"
using namespace std;

ReptilExotico::ReptilExotico() { /* empty */ }
ReptilExotico::ReptilExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno, 
    string autorizacao_ibama, string pais_origem, string cidade_origem):Reptil(id, classe, m_nome_cientifico, 
    sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), AnimalExotico(autorizacao_ibama, 
    pais_origem, cidade_origem) {/*empty*/}
ReptilExotico::~ReptilExotico() { /* empty */ }

void ReptilExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
string ReptilExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}

void ReptilExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
string ReptilExotico::getPais_origem (void) {
    return m_pais_origem;
}

void ReptilExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
string ReptilExotico::getCidade_origem (void) {
    return m_cidade_origem;
}