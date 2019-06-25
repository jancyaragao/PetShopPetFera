#include "../include/anfibioexotico.h"
using namespace std;

AnfibioExotico::AnfibioExotico() {/*empty*/}

AnfibioExotico::AnfibioExotico(int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas, string autorizacao_ibama,
string pais_origem, string cidade_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
nome_batismo, total_de_mudas), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}

AnfibioExotico::~AnfibioExotico() {/*empty*/}