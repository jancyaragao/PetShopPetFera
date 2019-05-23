#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <iostream>
#include <ofstream>
#include <string>
#include <map>

#include "../include/animal.h"

using namespace std;

class Sistema {
	private:

	public:
// Construtores e Destrutores
		Sistema( void );
		~Sistema( void );
// Metodos para Animais
		bool cadastro_animal (int id, string classe, string nome_animal, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo); /*Cadastro de Animais*/
		bool remocao_animal (); /*Remove um animal*/
		bool alteracao_animal (); /*Alteracao de dados de um animal*/
		// STUB ==> consultar_animal (); /*Consultar dados de um determinado animal ou classe*/
		// STUB ==> consultar_animais_de_funcionario (); /*Consultar animais sob a responsabilidade de um determinado funcionario*/
// Metodos para Funcionarios
		// Veterinarios
			bool cadastro_funcionario (int id, string funcao, string nome, string cpf, int idade, string tipo_sanguineo, char fator_RH, string espacialidade, string crmv, int nivel_seguranca);
			bool remocao_funcionario ();
};

#endif