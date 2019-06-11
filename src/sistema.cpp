#include <iostream>

#include "../include/sistema.h"

using namespace std;

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo) 
{
	// Animal* novo = new Animal (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, "preto");

	// animais.insert ({id,novo});

	return true;
} /*Cadastro de Animal*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo) 
{
	Animal* novo = new Mamifero (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_cor_pelo);

	animais.insert ({id,novo});

	return true;
} /*Cadastro de Mamifero*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno) 
{
	Animal* novo = new Reptil (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo, m_venenoso, tipo_veneno);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Reptil*/