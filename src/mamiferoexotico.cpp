#include "mamiferoexotico.h"
//using namespace std;

MamiferoExotico::MamiferoExotico() { /* empty */ }
MamiferoExotico::MamiferoExotico (int id, QString classe, QString m_nome_cientifico, char sexo,
    double tamanho, QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo,
    QString autorizacao_ibama, QString pais_origem, QString cidade_origem):Mamifero(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
    tratador, m_nome_batismo, m_cor_pelo), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}
MamiferoExotico::~MamiferoExotico() { /* empty */ }
