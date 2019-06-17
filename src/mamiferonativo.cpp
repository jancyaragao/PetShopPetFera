#include "../include/mamiferonativo.h"
using namespace std;

MamiferoNativo::MamiferoNativo() { /* empty */ }
MamiferoNativo::MamiferoNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
string uf_origem, string autorizacao):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta,
veterinario, tratador, m_nome_batismo, m_cor_pelo), AnimalNativo(uf_origem, autorizacao) {/*empty*/}
MamiferoNativo::~MamiferoNativo() { /* empty */ }