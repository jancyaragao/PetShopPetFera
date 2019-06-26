#include "reptilnativo.h"
//using namespace std;

ReptilNativo::ReptilNativo() { /* empty */ }
ReptilNativo::ReptilNativo (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
    QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso,
    QString tipo_veneno, QString autorizacao_ibama, QString uf_origem):Reptil(id, classe, m_nome_cientifico, sexo,
    tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), 
    AnimalNativo (autorizacao_ibama, uf_origem){/*empty*/}
ReptilNativo::~ReptilNativo() { /* empty */ }
