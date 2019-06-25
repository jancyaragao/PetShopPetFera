#include <iostream>

#include "../include/sistema.h"

using namespace std;

bool Sistema::verificaIdAnimal(int id) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		return true;
	}
	return false;
}

bool Sistema::verificaIdFuncionario(int id) {
	map<int, Funcionario*>::iterator it;
	it = funcionarios.find(id);
	if (it != funcionarios.end()) {
		return true;
	}
	return false;
}

bool Sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
QString especialidade, int nivel_de_seguranca) {
	Funcionario* novo = new Tratador(id, nome, cpf, idade, tipo_sanguineo, especialidade,
	nivel_de_seguranca);
	funcionarios.insert({id, novo});
	return true;
} /*cadastro tratador*/

bool Sistema::cadastrar_funcionario (int id, QString nome, QString cpf, short idade, QString tipo_sanguineo,
QString especialidade, QString crmv) {
	Funcionario* novo = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, especialidade, crmv);
	funcionarios.insert({id, novo});
	return true;
} /*cadastro veterinario*/

bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo) 
{
	Animal* novo = new Mamifero (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
		m_nome_batismo, m_cor_pelo);
	animais.insert ({id,novo});

	return true;
} /*Cadastro de Mamifero*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo, QString autorizacao,
	QString uf_origem) {

		Animal* novo = new MamiferoNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Nativo*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, QString m_cor_pelo, QString autorizacao,
	QString pais_origem, QString cidade_origem){
		
		Animal* novo = new MamiferoExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Exotico*/

bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno) 
{
	Animal* novo = new Reptil (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
	m_nome_batismo, m_venenoso, tipo_veneno);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Reptil*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno,
	QString autorizacao, QString uf_origem){
		Animal* novo = new ReptilNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Nativo*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, bool m_venenoso, QString tipo_veneno,
	QString autorizacao, QString pais_origem, QString cidade_origem) {
		Animal* novo = new ReptilExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Exotico*/

bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas) 
{
	Animal* novo = new Ave(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Ave*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, QString autorizacao,QString uf_origem){
		Animal* novo = new AveNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Ave Nativa*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
	QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, QString autorizacao, QString pais_origem, QString cidade_origem){
		Animal* novo = new AveExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, pais_origem,
		cidade_origem);

		animais.insert ({id,novo});
		return true;
	} /*Ave Exotica*/

bool Sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas){
	
	Animal* novo = new Anfibio (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
	id_tratador, nome_batismo, total_de_mudas);
	animais.insert ({id,novo});
	return true;
} /*Anfibio*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
	QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas, 
	QString autorizacao, QString uf_origem){
		Animal* novo = new AnfibioNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Nativo*/

	bool Sistema::cadastrar_animal (int id, QString classe, QString nome_cientifico, char sexo, double tamanho,
	QString dieta, int id_veterinario, int id_tratador, QString nome_batismo, int total_de_mudas,
	QString autorizacao, QString pais_origem, QString cidade_origem) {
		Animal* novo = new AnfibioExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, autorizacao, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Exotico*/
