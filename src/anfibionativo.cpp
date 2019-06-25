#include "../include/anfibionativo.h"
using namespace std;

AnfibioNativo::AnfibioNativo() {/*empty*/}
AnfibioNativo::AnfibioNativo (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
    QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
    QString autorizacao_ibama, QString uf_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta,
    id_veterinario, id_tratador, nome_batismo, total_de_mudas), AnimalNativo(autorizacao_ibama, uf_origem){/*empty*/}
AnfibioNativo::~AnfibioNativo() {/*empty*/}