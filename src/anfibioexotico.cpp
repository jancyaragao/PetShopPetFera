#include "../include/anfibioexotico.h"
using namespace std;

AnfibioExotico::AnfibioExotico() {/*empty*/}

AnfibioExotico::AnfibioExotico(int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
string pais_origem):Anfibio(id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
nome_batismo, total_de_mudas), AnimalExotico(pais_origem){/*empty*/}

AnfibioExotico::~AnfibioExotico() {/*empty*/}