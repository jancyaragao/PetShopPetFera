#include "../include/reptilexotico.h"
using namespace std;

ReptilExotico::ReptilExotico() { /* empty */ }
ReptilExotico::ReptilExotico (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
QString tipo_veneno, QString autorizacao_ibama, QString pais_origem, QString cidade_origem):Reptil(id, classe, m_nome_cientifico,
sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno),
AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}
ReptilExotico::~ReptilExotico() { /* empty */ }