#include "animal.h"
#include <string>
using namespace std;

Animal::Animal() { /*empty*/ }
Animal::Animal(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, 
    int id_tratador, string nome_batismo):m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico), m_sexo(sexo), 
    m_tamanho(tamanho), m_dieta(dieta), m_veterinario(id_veterinario), m_tratador(id_tratador), 
    m_nome_batismo(nome_batismo) {/* empty */}
Animal::~Animal() { /*empty*/ }