#include "../include/avenativo.h"
using namespace std;

AveNativo::AveNativo() {/*empty*/}
AveNativo::AveNativo(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas, string autorizacao_ibama, string uf_origem):Ave(id, classe, m_nome_cientifico,
sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas),
AnimalNativo(autorizacao_ibama, uf_origem) {/*empty*/}
AveNativo::~AveNativo() {/*empty*/}