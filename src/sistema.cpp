#include <iostream>

#include "../include/sistema.h"

using namespace std;

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo) 
{
	// Animal* novo = new Animal (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
	// tratador, m_nome_batismo, "preto");

	// animais.insert ({id,novo});

	return true;
} /*Cadastro de Animal = Abstract Class*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo) 
{
	Animal* novo = new Mamifero (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
		m_nome_batismo, m_cor_pelo);
	animais.insert ({id,novo});

	return true;
} /*Cadastro de Mamifero*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string uf_origem,
	string autorizacao) {

		Animal* novo = new MamiferoNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, uf_origem, autorizacao);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string pais_origem){
		
		Animal* novo = new MamiferoExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, pais_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Exotico*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno) 
{
	Animal* novo = new Reptil (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
	m_nome_batismo, m_venenoso, tipo_veneno);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Reptil*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno,
	string uf_origem, string autorizacao){
		Animal* novo = new ReptilNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, uf_origem, autorizacao);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno,
	string pais_origem) {
		Animal* novo = new ReptilExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, pais_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Exotico*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas) 
{
	Animal* novo = new Ave(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Ave*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string uf_origem, string autorizacao){
		Animal* novo = new AveNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, uf_origem, autorizacao);
		animais.insert ({id,novo});
		return true;
	} /*Ave Nativa*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string pais_origem){
		Animal* novo = new AveExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, pais_origem);
		animais.insert ({id,novo});
		return true;
	} /*Ave Exotica*/

bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas){
	
	Animal* novo = new Anfibio (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
	id_tratador, nome_batismo, total_de_mudas);
	animais.insert ({id,novo});
	return true;
} /*Anfibio*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
	string uf_origem, string autorizacao){
		Animal* novo = new AnfibioNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, uf_origem, autorizacao);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
	string pais_origem) {
		Animal* novo = new AnfibioExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, pais_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Exotico*/
