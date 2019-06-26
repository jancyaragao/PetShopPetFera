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
} /*cadastrar Tratador*/

bool Sistema::cadastrar_funcionario (int id, string nome, string cpf, short idade, string tipo_sanguineo,
string especialidade, string crmv) {
	Funcionario* novo = new Veterinario(id, nome, cpf, idade, tipo_sanguineo, especialidade, crmv);
	funcionarios.insert({id, novo});
	return true;
} /*cadastrar Veterinario*/

bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas) {
	Animal* novo = new Anfibio (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, total_de_mudas);
	animais.insert ({id,novo});
	return true;
} /*Anfibio*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas, 
	string autorizacao_ibama, string uf_origem) {
		Animal* novo = new AnfibioNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, autorizacao_ibama, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas,
	string autorizacao_ibama, string pais_origem, string cidade_origem) {
		Animal* novo = new AnfibioExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, total_de_mudas, autorizacao_ibama, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Anfibio Exotico*/

bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas) {
	Animal* novo = new Ave(id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
	tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Ave*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string autorizacao_ibama,string uf_origem) {
		Animal* novo = new AveNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao_ibama, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Ave Nativa*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem) {
		Animal* novo = new AveExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, tamanho_do_bico_cm, envergadura_das_asas, autorizacao_ibama, pais_origem,
		cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Ave Exotica*/

bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo) {
	Animal* novo = new Mamifero (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
	nome_batismo, cor_pelo);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Mamifero*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo, string autorizacao_ibama,
	string uf_origem) {
		Animal* novo = new MamiferoNativo (id, classe, nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, nome_batismo, cor_pelo, autorizacao_ibama, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo, string autorizacao_ibama,
	string pais_origem, string cidade_origem){
		Animal* novo = new MamiferoExotico (id, classe, nome_cientifico, sexo, tamanho, dieta,
		veterinario, tratador, nome_batismo, cor_pelo, autorizacao_ibama, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Mamifero Exotico*/

bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno) {
	Animal* novo = new Reptil (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario, tratador,
	nome_batismo, venenoso, tipo_veneno);
	animais.insert ({id,novo});
	return true;
} /*Cadastro de Reptil*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno,
	string autorizacao_ibama, string uf_origem) {
		Animal* novo = new ReptilNativo (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno, autorizacao_ibama, uf_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Nativo*/

	bool Sistema::cadastrar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno,
	string autorizacao_ibama, string pais_origem, string cidade_origem) {
		Animal* novo = new ReptilExotico (id, classe, nome_cientifico, sexo, tamanho, dieta, veterinario,
		tratador, nome_batismo, venenoso, tipo_veneno, autorizacao_ibama, pais_origem, cidade_origem);
		animais.insert ({id,novo});
		return true;
	} /*Reptil Exotico*/

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

bool Sistema::editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, int nivel_de_seguranca) {
			map<int, Funcionario*>::iterator it;
			it = funcionarios.find(id);
			if (it != funcionarios.end()) {
				it->second->setNome(nome);
				it->second->setCpf(cpf);
				it->second->setIdade(idade);
				it->second->setTipo_sanguineo(tipo_sanguineo);
				it->second->setEspecialidade(especialidade);
				dynamic_cast<Tratador*>(it->second)->setNivel_de_seguranca(nivel_de_seguranca);
				return true;
			}
			return false;
}

bool Sistema::editar_funcionario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
		string especialidade, string crmv) {
			map<int, Funcionario*>::iterator it;
			it = funcionarios.find(id);
			if (it != funcionarios.end()) {
				it->second->setNome(nome);
				it->second->setCpf(cpf);
				it->second->setIdade(idade);
				it->second->setTipo_sanguineo(tipo_sanguineo);
				it->second->setEspecialidade(especialidade);
				dynamic_cast<Veterinario*>(it->second)->setCrmv(crmv);
				return true;
			}
			return false;
}

bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		it->second->setClasse(classe);
		it->second->setNome_cientifico(nome_batismo);
		it->second->setSexo(sexo);
		it->second->setTamanho(tamanho);
		it->second->setDieta(dieta);
		it->second->setVeterinario(veterinario);
		it->second->setTratador(tratador);
		it->second->setNome_batismo(nome_batismo);
		dynamic_cast<Anfibio*>(it->second)->setTotal_de_mudas(total_de_mudas);
		return true;
	}
	return false;
} /*Anfibio*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas, 
	string autorizacao_ibama, string uf_origem) {
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Anfibio*>(it->second)->setTotal_de_mudas(total_de_mudas);
			// dynamic_cast<AnfibioNativo*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<AnfibioNativo*>(it->second)->setUf_origem(uf_origem);
			return true;
		}
		return false;
	} /*Anfibio Nativo*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, int total_de_mudas,
	string autorizacao_ibama, string pais_origem, string cidade_origem) {
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Anfibio*>(it->second)->setTotal_de_mudas(total_de_mudas);
			// dynamic_cast<AnfibioExotico*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<AnfibioExotico*>(it->second)->setPais_origem(pais_origem);
			// dynamic_cast<AnfibioExotico*>(it->second)->setCidade_origem(cidade_origem);
			return true;
		}
		return false;
	} /*Anfibio Exotico*/

bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
double envergadura_das_asas) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		it->second->setClasse(classe);
		it->second->setNome_cientifico(nome_batismo);
		it->second->setSexo(sexo);
		it->second->setTamanho(tamanho);
		it->second->setDieta(dieta);
		it->second->setVeterinario(veterinario);
		it->second->setTratador(tratador);
		it->second->setNome_batismo(nome_batismo);
		dynamic_cast<Ave*>(it->second)->setTamanho_do_bico_cm(tamanho_do_bico_cm);
		dynamic_cast<Ave*>(it->second)->setEnvergaruda_das_asas(envergadura_das_asas);
		return true;
	}
	return false;
} /*Cadastro de Ave*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string autorizacao_ibama,string uf_origem){
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Ave*>(it->second)->setTamanho_do_bico_cm(tamanho_do_bico_cm);
			dynamic_cast<Ave*>(it->second)->setEnvergaruda_das_asas(envergadura_das_asas);
			// dynamic_cast<AveNativa*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<AveNativa*>(it->second)->setUf_origem(uf_origem);
			return true;
		}
		return false;
	} /*Ave Nativa*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, double tamanho_do_bico_cm,
	double envergadura_das_asas, string autorizacao_ibama, string pais_origem, string cidade_origem){
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Ave*>(it->second)->setTamanho_do_bico_cm(tamanho_do_bico_cm);
			dynamic_cast<Ave*>(it->second)->setEnvergaruda_das_asas(envergadura_das_asas);
			// dynamic_cast<AveExotico*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<AveExotico*>(it->second)->setPais_origem(pais_origem);
			// dynamic_cast<AveExotico*>(it->second)->setCidade_origem(cidade_origem);
			return true;
		}
		return false;
	} /*Ave Exotica*/

bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo) {
			map<int, Animal*>::iterator it;
			it = animais.find(id);
			if (it != animais.end()) {
				it->second->setClasse(classe);
				it->second->setNome_cientifico(nome_batismo);
				it->second->setSexo(sexo);
				it->second->setTamanho(tamanho);
				it->second->setDieta(dieta);
				it->second->setVeterinario(veterinario);
				it->second->setTratador(tratador);
				it->second->setNome_batismo(nome_batismo);
				dynamic_cast<Mamifero*>(it->second)->setCor_pelo(cor_pelo);
				return true;
			}
			return false;
} /*Cadastro de Mamifero*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo, string autorizacao_ibama,
	string uf_origem) {
				map<int, Animal*>::iterator it;
				it = animais.find(id);
				if (it != animais.end()) {
					it->second->setClasse(classe);
					it->second->setNome_cientifico(nome_batismo);
					it->second->setSexo(sexo);
					it->second->setTamanho(tamanho);
					it->second->setDieta(dieta);
					it->second->setVeterinario(veterinario);
					it->second->setTratador(tratador);
					it->second->setNome_batismo(nome_batismo);
					dynamic_cast<Mamifero*>(it->second)->setCor_pelo(cor_pelo);
					//dynamic_cast<MamiferoNativo*>(it->second)->setAutorizacao_ibama;
					//dynamic_cast<MamiferoNativo*>(it->second)->setUf_origem;
					return true;
				}
				return false;
	} /*Mamifero Nativo*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, string cor_pelo, string autorizacao_ibama,
	string pais_origem, string cidade_origem){
				map<int, Animal*>::iterator it;
				it = animais.find(id);
				if (it != animais.end()) {
					it->second->setClasse(classe);
					it->second->setNome_cientifico(nome_batismo);
					it->second->setSexo(sexo);
					it->second->setTamanho(tamanho);
					it->second->setDieta(dieta);
					it->second->setVeterinario(veterinario);
					it->second->setTratador(tratador);
					it->second->setNome_batismo(nome_batismo);
					dynamic_cast<Mamifero*>(it->second)->setCor_pelo(cor_pelo);
					//dynamic_cast<MamiferoExotico*>(it->second)->setAutorizacao_ibama;
					//dynamic_cast<MamiferoExotico*>(it->second)->setPais_origem;
					//dynamic_cast<MamiferoExotico*>(it->second)->setCidade_origem;
					return true;
				}
				return false;
	} /*Mamifero Exotico*/

bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno) {
	map<int, Animal*>::iterator it;
	it = animais.find(id);
	if (it != animais.end()) {
		it->second->setClasse(classe);
		it->second->setNome_cientifico(nome_batismo);
		it->second->setSexo(sexo);
		it->second->setTamanho(tamanho);
		it->second->setDieta(dieta);
		it->second->setVeterinario(veterinario);
		it->second->setTratador(tratador);
		it->second->setNome_batismo(nome_batismo);
		dynamic_cast<Reptil*>(it->second)->setVenenoso(venenoso);
		dynamic_cast<Reptil*>(it->second)->setTipo_veneno(tipo_veneno);
		return true;
	}
	return false;
} /*Cadastro de Reptil*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno,
	string autorizacao_ibama, string uf_origem){
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Reptil*>(it->second)->setVenenoso(venenoso);
			dynamic_cast<Reptil*>(it->second)->setTipo_veneno(tipo_veneno);
			// dynamic_cast<ReptilNativo*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<ReptilNativo*>(it->second)->setUf_origem(uf_origem);
			return true;
		}
		return false;
	} /*Reptil Nativo*/

	bool Sistema::editar_animal (int id, string classe, string nome_cientifico, char sexo, double tamanho,
	string dieta, int veterinario, int tratador, string nome_batismo, bool venenoso, string tipo_veneno,
	string autorizacao_ibama, string pais_origem, string cidade_origem) {
		map<int, Animal*>::iterator it;
		it = animais.find(id);
		if (it != animais.end()) {
			it->second->setClasse(classe);
			it->second->setNome_cientifico(nome_batismo);
			it->second->setSexo(sexo);
			it->second->setTamanho(tamanho);
			it->second->setDieta(dieta);
			it->second->setVeterinario(veterinario);
			it->second->setTratador(tratador);
			it->second->setNome_batismo(nome_batismo);
			dynamic_cast<Reptil*>(it->second)->setVenenoso(venenoso);
			dynamic_cast<Reptil*>(it->second)->setTipo_veneno(tipo_veneno);
			// dynamic_cast<ReptilExotico*>(it->second)->setAutorizacao_ibama(autorizacao_ibama);
			// dynamic_cast<ReptilExotico*>(it->second)->setPais_origem(pais_origem);
			// dynamic_cast<ReptilExotico*>(it->second)->setCidade_origem(cidade_origem);
			return true;
		}
		return false;
	} /*Reptil Exotico*/