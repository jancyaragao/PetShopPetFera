#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <string>
#include <fstream>
#include <map>
#include <exception>
#include <stdexcept>

#include "funcionario.h"
#include "tratador.h"
#include "veterinario.h"

#include "animal.h"
#include "animalexotico.h"
#include "animalnativo.h"

#include "mamifero.h"
#include "mamiferoexotico.h"
#include "mamiferonativo.h"

#include "reptil.h"
#include "reptilexotico.h"
#include "reptilnativo.h"

#include "ave.h"
#include "avenativo.h"
#include "aveexotico.h"

#include "anfibio.h"
#include "anfibionativo.h"
#include "anfibioexotico.h"

using namespace std;
/**
 * @file sistema.h
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief classe sistema
 */
class Sistema {
	private:
		/*Container contendo todos os animais*/
    /**
     * @brief container que recebe todos animais com suas respectivas keys
     */
		map <int, Animal*> animais; 
		/*Container contendo todos os funcionários*/
    /**
     * @brief container que recebe todos funcionarios com suas respectivas keys
     */
		map <int, Funcionario*> funcionarios;

	public:
    /**
     * @brief contém todos os métodos da classe sistema
     */

		void initScript (void);
    /**
     * @brief Salvar dados dos animais no arquivo
     */
		void salvarArquivoAnimais (void);
    /**
     * @brief listando os animais
     */
		void listarAnimais(void);
    /**
     * @brief Salvar dados dos Funcionarios no arquivo
     */
		void salvarArquivoFuncionarios(void);
    /**
     * @brief listando os Funcionários através de um iterator
     */
		void listarFuncionarios(void);
    /**
     * @brief Verificador de id de um funcionários para evitar ambiguidade de id(chave)
     */

		bool verificaIdFuncionario(int id);
		/*Verifica id existe em Animal*/
    /**
     * @brief Verificador de id de um animal para evitar ambiguidade de id(chave)
     */
		bool verificaIdAnimal(int id);
		/*Verifica id existe em Animal*/
    /**
     * @brief cadastro de um funcionário - TRATADOR,e com metodo sobrecarregado
     */
		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca);
		/*Cadastro Tratador*/
    /**
     * @brief cadastro de um funcionário - VETERINÁRIO, e com metodo sobrecarregado
     */
		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv);
		/*Cadastro Veterinario*/
    /**
     * @brief cadastro de um Animal - Anfibio, utilizando tratamento de exceção e com metodo sobrecarregado
     */
		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		/*Cadastrar Anfibio*/
    /**
     * @brief cadastro de um Animal -Anfibio Nativo, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string uf_origem);
			/*Cadastrar Anfibio Nativio*/
    /**
     * @brief cadastro de um Animal - Anfibio Exótico, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Anfibio Exotico*/
    /**
     * @brief cadastro de um Animal - Ave, utilizando tratamento de exceção e com método sobrecarregado
     */
		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas);
		/*Cadastrar Ave*/
    /**
     * @brief cadastro de um Animal - Ave Nativa, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
			/*Cadastrar Ave Nativa*/
    /**
     * @brief cadastro de um Animal - Ave Exótica, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Ave Exotica*/
    /**
     * @brief cadastro de um Animal - Mamifero, utilizando tratamento de exceção e com método sobrecarregado
     */
		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo);
		/*Cadastrar Mamifero*/
    /**
     * @brief cadastro de um Animal -Mamifero Nativo, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string uf_origem);
			/*Cadastrar Mamifero Nativo*/
    /**
     * @brief cadastro de um Animal - Mamifero Exotico, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Mamifero Exotico*/
    /**
     * @brief cadastro de um Animal - Reptil, utilizando tratamento de exceção e com método sobrecarregado
     */
		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno);
		/*Cadastrar Reptil*/
    /**
     * @brief cadastro de um Animal - Reptil Nativo, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string uf_origem);
			/*Cadastrar Reptil Nativo*/
    /**
     * @brief cadastro de um Animal - Reptil Exótico, utilizando tratamento de exceção e com método sobrecarregado
     */
			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Reptil Exotico*/		
    /**
     * @brief Remove um funcionário
     */
		bool remover_funcionario(int id);
		/* Remover Funcionário */
    /**
     * @brief Remove um animal
     */
		bool remover_animal(int id);
		/* Remover Animal */
    /**
     * @brief Edita funcionário com iterator e metódo sobrecarregado
     */
		bool editar_funcionario(int id);
		/* Editar Funcionário */
    /**
     * @brief Edita funcionário com iterator e metódo sobrecarregado, Tratador
     */
		bool editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca);
		/* Editar Tratador */
    /**
     * @brief Edita funcionário com iterator e metódo sobrecarregado, Veterinario
     */
		bool editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv);
		/* Editar Veterinario */
    /**
     * @brief Edita animal - Anfibio com iterator e metódo sobrecarregado.
     */
		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		/* Editar Anfibio*/
    /**
     * @brief Edita animal - Anfibio Nativo com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string uf_origem);
			/* Editar Anfibio Nativio*/
    /**
     * @brief Edita animal - Anfibio Exótico com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Anfibio Exotico*/
    /**
     * @brief Edita animal - Ave com iterator e metódo sobrecarregado.
     */
		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas);
		/* Editar Ave*/
    /**
     * @brief Edita animal - Ave Nativa com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
			/* Editar Ave Nativa*/
    /**
     * @brief Edita animal - Ave Exótica com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Ave Exotica*/
    /**
     * @brief Edita animal - Mamifero com iterator e metódo sobrecarregado.
     */

		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo);
		/* Editar Mamifero*/
    /**
     * @brief Edita animal - Mamifero Nativo com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string uf_origem);
			/* Editar Mamifero Nativo*/
    /**
     * @brief Edita animal - Mamifero Exótico com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Mamifero Exotico*/
    /**
     * @brief Edita animal - Réptil com iterator e metódo sobrecarregado.
     */
		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno);
		/* Editar Reptil*/
    /**
     * @brief Edita animal - Nativo com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string uf_origem);
			/* Editar Reptil Nativo*/
    /**
     * @brief Edita animal - Réptil Exótico com iterator e metódo sobrecarregado.
     */
			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Reptil Exotico*/
    /**
     * @brief Consultar Animal - utilizando iterator
     */
		void consultarAnimal(int id);
    /**
     * @brief Consultar funcionário - utilizando iterator
     */
		void consultarFuncionario(int id);
};


#endif
