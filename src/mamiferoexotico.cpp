#include "../include/mamiferoexotico.h"
using namespace std;

MamiferoExotico::MamiferoExotico() { /* empty */ }
MamiferoExotico::MamiferoExotico (int id, string classe, string m_nome_cientifico, char sexo,
    double tamanho, string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
    string autorizacao_ibama, string pais_origem, string cidade_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
    tratador, m_nome_batismo, m_cor_pelo), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}
MamiferoExotico::~MamiferoExotico() { /* empty */ }

void MamiferoExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
string MamiferoExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}

void MamiferoExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
string MamiferoExotico::getPais_origem (void) {
    return m_pais_origem;
}

void MamiferoExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
string MamiferoExotico::getCidade_origem (void) {
    return m_cidade_origem;
}