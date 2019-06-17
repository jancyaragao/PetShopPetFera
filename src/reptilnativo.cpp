#include "../include/reptilnativo.h"
using namespace std;

ReptilNativo::ReptilNativo() { /* empty */ }
ReptilNativo::ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
string tipo_veneno, string uf_origem, string autorizacao):Reptil(id, classe, m_nome_cientifico, sexo,
tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno), AnimalNativo (uf_origem,
autorizacao){/*empty*/}
ReptilNativo::~ReptilNativo() { /* empty */ }