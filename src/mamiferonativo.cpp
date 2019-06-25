#include "../include/mamiferonativo.h"
using namespace std;

MamiferoNativo::MamiferoNativo() { /* empty */ }
MamiferoNativo::MamiferoNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string autorizacao_ibama,
string uf_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
veterinario, tratador, m_nome_batismo, m_cor_pelo), AnimalNativo(autorizacao_ibama, uf_origem) {/*empty*/}
MamiferoNativo::~MamiferoNativo() { /* empty */ }