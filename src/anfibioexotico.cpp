#include "anfibioexotico.h"
//using namespace std;

AnfibioExotico::AnfibioExotico() {/*empty*/}

AnfibioExotico::AnfibioExotico(int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas, QString autorizacao_ibama,
QString pais_origem, QString cidade_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
nome_batismo, total_de_mudas), AnimalExotico(autorizacao_ibama, pais_origem, cidade_origem){/*empty*/}

AnfibioExotico::~AnfibioExotico() {/*empty*/}
