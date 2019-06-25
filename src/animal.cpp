#include "../include/animal.h"
#include <QString>
using namespace std;

Animal::Animal() { /*empty*/ }
Animal::Animal(int id, QString classe, QString nome_cientifico, char sexo, double tamanho, QString dieta, int id_veterinario, int id_tratador, QString nome_batismo)
:m_id(id), m_classe(classe), m_nome_cientifico(nome_cientifico), m_sexo(sexo), m_tamanho(tamanho), m_dieta(dieta), m_veterinario(id_veterinario), m_tratador(id_tratador), m_nome_batismo(nome_batismo)
{
 /*code...*/ 
}
Animal::~Animal() { /*empty*/ }