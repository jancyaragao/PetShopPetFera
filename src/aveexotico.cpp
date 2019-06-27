#include "aveexotico.h"
using namespace std;

AveExotico::AveExotico() { /* empty */ }
AveExotico::AveExotico(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
    string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
    double envergadura_das_asas, string autorizacao_ibama, string pais_origem,string cidade_origem):Ave(id, 
    classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, tamanho_do_bico_cm, 
    envergadura_das_asas), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem) {/*empty*/}
AveExotico::~AveExotico() { /* empty */ }

void AveExotico::setAutorizacao_ibama (string newAutorizacao_ibama) {
    m_autorizacao_ibama = newAutorizacao_ibama;
}
string AveExotico::getAutorizacao_ibama ( void ) {
    return m_autorizacao_ibama;
}

void AveExotico::setPais_origem (string newPais_origem) {
    m_pais_origem = newPais_origem;
}
string AveExotico::getPais_origem (void) {
    return m_pais_origem;
}

void AveExotico::setCidade_origem (string newCidade_origem) {
    m_cidade_origem = newCidade_origem;
}
string AveExotico::getCidade_origem (void) {
    return m_cidade_origem;
}