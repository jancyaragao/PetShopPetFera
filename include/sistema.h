#ifndef _SISTEMA_H_
#define _SISTEMA_H_

#include <string>
#include <map>

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

		bool verificaIdAnimal(int id);
		/*Verifica id existe em Animal*/

		bool verificaIdFuncionario(int id);
		/*Verifica id existe em Animal*/

		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca);
		/*Cadastro Tratador*/

		bool cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv);
		/*Cadastro Veterinario*/

			bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo);
			/*Cadastrar Mamifero*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
				string autorizacao_ibama, string uf_origem);
				/*Cadastrar Mamifero Nativo*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo,
				string autorizacao_ibama, string pais_origem, string cidade_origem);
				/*Cadastrar Mamifero Exotico*/

			bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno);
			/*Cadastrar Reptil*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
				string tipo_veneno, string autorizacao_ibama, string uf_origem);
				/*Cadastrar Reptil Nativo*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
				string tipo_veneno, string autorizacao_ibama, string pais_origem, string cidade_origem);
				/*Cadastrar Reptil Exotico*/		

			bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
			string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
			double envergadura_das_asas);
			/*Cadastrar Ave*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
				double envergadura_das_asas, string autorizacao_ibama, string uf_origem);
				/*Cadastrar Ave Nativa*/

				bool cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
				string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
				double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem);
				/*Cadastrar Ave Exotica*/

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

		// STUB ===>
		// remocao_animal ();
		// alteracao_dados_animal ();
		// consultar_animal ();
		// consultar_animal_por_func ();
		// STUB <===
};


#endif