#include "../include/mamiferoexotico.h"
using namespace std;

MamiferoExotico::MamiferoExotico() { /* empty */ }
MamiferoExotico::MamiferoExotico (int id, string classe, string m_nome_cientifico, char sexo,
double tamanho, string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
string pais_origem, string cidade_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
tratador, m_nome_batismo, m_cor_pelo),AnimalExotico(pais_origem, cidade_origem){/*empty*/}
MamiferoExotico::~MamiferoExotico() { /* empty */ }