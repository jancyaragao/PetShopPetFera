#include "../include/anfibionativo.h"
using namespace std;

AnfibioNativo::AnfibioNativo() {/*empty*/}
AnfibioNativo::AnfibioNativo (int id, string classe, string nome_cientifico, char sexo, double tamanho,
    string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
    string autorizacao_ibama, string uf_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta,
    id_veterinario, id_tratador, nome_batismo, total_de_mudas), AnimalNativo(autorizacao_ibama, uf_origem){/*empty*/}
AnfibioNativo::~AnfibioNativo() {/*empty*/}