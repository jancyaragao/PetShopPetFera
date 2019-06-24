#include "../include/reptilexotico.h"
using namespace std;

ReptilExotico::ReptilExotico() { /* empty */ }
ReptilExotico::ReptilExotico (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
string tipo_veneno, string pais_origem, string cidade_origem):Reptil(id, classe, m_nome_cientifico,
sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno),
AnimalExotico(pais_origem, cidade_origem){/*empty*/}
ReptilExotico::~ReptilExotico() { /* empty */ }