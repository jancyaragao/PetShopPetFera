#include "../include/sistema.h"

using namespace std;

void Sistema::initScript (void){

}

void Sistema::salvarArquivoAnimais(void){
	ofstream animaisFile;
	animaisFile.open ("data/animais.csv");

	for(auto it = animais.begin(); it != animais.end(); ++it){
		animaisFile << *it->second << endl;
	}

	animaisFile.close();
	cout << "Dados de animais salvo!!!\n";
}

void Sistema::salvarArquivoFuncionarios(void){
	ofstream funcionariosFile;
	funcionariosFile.open ("data/funcionarios.csv");

	for (auto it = funcionarios.begin() ; it != funcionarios.end(); ++it){
		funcionariosFile << *it->second << endl;
	}

	funcionariosFile.close();
	cout << "Dados de funcionarios salvo!!!\n";
}

bool Sistema::verificaIdFuncionario(int id) {
	map<int, Funcionario*>::iterator it;
	it = funcionarios.find(id);
	if (it != funcionarios.end()) {
		return true;
	}
	return false;
}

bool Sistema::verificaIdAnimal(int id) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		return true;
	}
	return false;
}

bool Sistema::cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
string especialidade, int nivel_de_seguranca) {
	Funcionario* novo = new Tratador(id, nome, cpf, idade, tipo_sanguineo, especialidade,
	nivel_de_seguranca);
	funcionarios.insert({id, novo});
	return true;
} /*cadastro tratador*/

bool Sistema::cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
string especialidade, string crmv) {
	Funcionario* novo = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, especialidade, crmv);
	funcionarios.insert({id, novo});
	return true;
} /*cadastro veterinario*/

bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo) {
		Animal* novo = new Mamifero (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
			m_nome_batismo, m_cor_pelo);
		animais.insert ({id,novo});
	return true;
} /*Cadastro de Mamifero*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string autorizacao,
	string uf_origem) {

		Animal* novo = new MamiferoNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, string m_cor_pelo, string autorizacao,
	string pais_origem, string cidade_origem){
		
		Animal* novo = new MamiferoExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, m_nome_batismo, m_cor_pelo, autorizacao, pais_origem, cidade_origem);
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
	string autorizacao, string uf_origem){
		Animal* novo = new ReptilNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso, string tipo_veneno,
	string autorizacao, string pais_origem, string cidade_origem) {
		Animal* novo = new ReptilExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, m_venenoso, tipo_veneno, autorizacao, pais_origem, cidade_origem);
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
	double envergadura_das_asas, string autorizacao,string uf_origem){
		Animal* novo = new AveNativo (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Ave Nativa*/

	bool Sistema::cadastrar_animal (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string autorizacao, string pais_origem, string cidade_origem){
		Animal* novo = new AveExotico (id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, m_nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao, pais_origem,
		cidade_origem);

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
	string autorizacao, string uf_origem){
		Animal* novo = new AnfibioNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, autorizacao, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas,
	string autorizacao, string pais_origem, string cidade_origem) {
		Animal* novo = new AnfibioExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario,
		id_tratador, nome_batismo, total_de_mudas, autorizacao, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Exotico*/

bool Sistema::remover_funcionario(int id) {
	map<int, Funcionario*>::iterator it;
	it = funcionarios.find(id);
	if (it != funcionarios.end()) {
		funcionarios.erase(it);
		return true;
	}
	return false;
} /* Remover Funcionário */

bool Sistema::remover_animal(int id) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		animais.erase(it);
		return true;
	}
	return false;
} /* Remover Animal */