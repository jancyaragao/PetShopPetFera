#include "../include/sistema.h"

using namespace std;

// Construtores e Destrutores
	Sistema::Sistema () {

	}; /*Sistema*/
	Sistema::~Sistema () {

	};/*~Sistema*/
// Metodos para Animais
	bool Sistema::cadastro_animal (int id, string classe, string nome_animal, string nome_cientifico, char sexo, double tamanho, string dieta, int id_veterinario, int id_tratador, string nome_batismo) {
	
	};/*Cadastro Animal*/
	bool Sistema::remocao_animal () {

	};/*Remocao Animal*/
	bool Sistema::alteracao_animal () {

	};/*Alteracao Animal*/

// STUB ==>
	// Sistema::consultar_animal () {

	// };/*Consultar Animal*/
	// Sistema::consultar_animais_de_funcionario () {

	// };/*Consultar Animais de Funcionarios*/
// <=== ENDSTUB
		
// Metodos para Funcionarios
	// Veterinarios
		bool Sistema::cadastro_funcionario (int id, string funcao, string nome, string cpf, int idade, string tipo_sanguineo, char fator_RH, string espacialidade, string crmv, int nivel_seguranca) {

		};/*Cadastro de Funcionario*/
		bool Sistema::remocao_funcionario () {

		};/*Remocao de Funcionario*/