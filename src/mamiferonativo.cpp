#include "mamiferonativo.h"
//using namespace std;

MamiferoNativo::MamiferoNativo() { /* empty */ }
MamiferoNativo::MamiferoNativo (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo, QString autorizacao_ibama,
QString uf_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
veterinario, tratador, m_nome_batismo, m_cor_pelo), AnimalNativo(autorizacao_ibama, uf_origem) {/*empty*/}
MamiferoNativo::~MamiferoNativo() { /* empty */ }
