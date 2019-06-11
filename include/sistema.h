#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <string>
#include <map>

#include "animal.h"
#include "animalexotico.h"
#include "mamifero.h"
#include "reptil.h"

using namespace std;

class Sistema {
	private:
		map <int, Animal*> animais;
	public:
		
		bool cadastrar_funcionario ();
		/*Construtor Padrão*/

		bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo );
		/*Cadastro Animal*/

		bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo);
		/*Cadastrar Mamifero*/

		bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno);
		/*Cadastrar Reptil*/





		// remocao_animal ();
		// alteracao_dados_animal ();
		// consultar_animal ();
		// consultar_animal_por_func ();
		// STUB ===>
};


#endif