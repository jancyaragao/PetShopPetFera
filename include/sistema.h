#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <string>
#include <fstream>
#include <map>
#include <exception>
#include <stdexcept>

#include "./funcionario.h"
#include "./tratador.h"
#include "./veterinario.h"

#include "./animal.h"
#include "./animalexotico.h"
#include "./animalnativo.h"

#include "./mamifero.h"
#include "./mamiferoexotico.h"
#include "./mamiferonativo.h"

#include "./reptil.h"
#include "./reptilexotico.h"
#include "./reptilnativo.h"

#include "./ave.h"
#include "./avenativo.h"
#include "./aveexotico.h"

#include "./anfibio.h"
#include "./anfibionativo.h"
#include "./anfibioexotico.h"

using namespace std;

class Sistema {
	private:
		/*Container contendo todos os animais*/
		map <int, Animal*> animais; 
		/*Container contendo todos os funcionários*/
		map <int, Funcionario*> funcionarios;

	public:

		void initScript (void);

		void salvarArquivoAnimais (void);
		void listarAnimais(void);
		void salvarArquivoFuncionarios(void);
		void listarFuncionarios(void);

		bool verificaIdFuncionario(int id);
		/*Verifica id existe em Animal*/

		bool verificaIdAnimal(int id);
		/*Verifica id existe em Animal*/

		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca);
		/*Cadastro Tratador*/

		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv);
		/*Cadastro Veterinario*/

		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		/*Cadastrar Anfibio*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string uf_origem);
			/*Cadastrar Anfibio Nativio*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Anfibio Exotico*/

		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas);
		/*Cadastrar Ave*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
			/*Cadastrar Ave Nativa*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Ave Exotica*/

		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo);
		/*Cadastrar Mamifero*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string uf_origem);
			/*Cadastrar Mamifero Nativo*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Mamifero Exotico*/

		bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno);
		/*Cadastrar Reptil*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string uf_origem);
			/*Cadastrar Reptil Nativo*/

			bool cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/*Cadastrar Reptil Exotico*/		

		bool remover_funcionario(int id);
		/* Remover Funcionário */
		
		bool remover_animal(int id);
		/* Remover Animal */

		bool editar_funcionario(int id);
		/* Editar Funcionário */

		bool editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca);
		/* Editar Tratador */

		bool editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv);
		/* Editar Veterinario */

		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas);
		/* Editar Anfibio*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string uf_origem);
			/* Editar Anfibio Nativio*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Anfibio Exotico*/

		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
		double envergadura_das_asas);
		/* Editar Ave*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
			/* Editar Ave Nativa*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Ave Exotica*/

		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo);
		/* Editar Mamifero*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string uf_origem);
			/* Editar Mamifero Nativo*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo,
			string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Mamifero Exotico*/

		bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno);
		/* Editar Reptil*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string uf_origem);
			/* Editar Reptil Nativo*/

			bool editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso,
			string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
			/* Editar Reptil Exotico*/

		// STUB ===>
		// consultar_animal ();
		// consultar_animal_por_func ();
		// STUB <===
};


#endif