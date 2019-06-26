#include "aveexotico.h"
//using namespace std;

AveExotico::AveExotico() { /* empty */ }
AveExotico::AveExotico(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas, QString autorizacao_ibama, QString pais_origem,QString cidade_origem):Ave(id, classe, m_nome_cientifico,
sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem)
{/*empty*/}
AveExotico::~AveExotico() { /* empty */ }
