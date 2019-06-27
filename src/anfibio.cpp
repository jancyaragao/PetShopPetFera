#include "anfibio.h"

using namespace std;

Anfibio::Anfibio(void) { /*empty*/ }
/**
 * @brief contrutor parametrizado utilizando herança da classe Animal
 */
Anfibio::Anfibio(int id, string classe, string nome_cientifico, char sexo, double tamanho, string dieta,
				int id_veterinario, int id_tratador, string nome_batismo, int total_de_mudas)
				: Animal (id, classe, nome_cientifico, sexo, tamanho, dieta, id_veterinario, id_tratador,
				nome_batismo), m_total_de_mudas(total_de_mudas)
				{/*empty*/}
/**
 * @brief Declaração da funcionalidade dos métodos getters e setters
 * destrutor da classe Anfibio
 */
Anfibio::~Anfibio(void) { /*empty*/ }
/**
 * @brief set do Total de mudas do Anfibio
 * @param recebe o Total de mudas
 */
void Anfibio::setTotal_de_mudas(int new_total_de_mudas) {
	m_total_de_mudas = new_total_de_mudas;
}
/**
 * @brief get do Total de Mudas do objeto Anfibio
 * @return retorna o Total de Mudas
 */
int Anfibio::getTotal_de_mudas() {
	return m_total_de_mudas;
}
/**
 * @brief set do ID do Anfibio
 * @param recebe o ID
 */
void Anfibio::setId(int new_id){
	m_id = new_id;
}
/**
 * @brief get do ID do objeto Anfibio
 * @return retorna o ID
 */
int Anfibio::getId() {
	return m_id;
}
/**
 * @brief set da CLASSE do Anfibio
 * @param recebe a CLASSE
 */
void Anfibio::setClasse(string new_classe) {
	m_classe = new_classe;
}
/**
 * @brief get da CLASSE do objeto Anfibio
 * @return retorna a CLASSE
 */
string Anfibio::getClasse() {
	return m_classe;
}
/**
 * @brief set do NOME CIENTIFICO do Anfibio
 * @param recebe NOME CIENTIFICO
 */
void Anfibio::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
/**
 * @brief get do Nome cientifico do objeto Anfibio
 * @return retorna o Nome cientifico
 */
string Anfibio::getNome_cientifico() {
	return m_nome_cientifico;
}
/**
 * @brief set do sexo do Anfibio
 * @param recebe sexo
 */
void Anfibio::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
/**
 * @brief get do sexo do objeto Anfibio
 * @return retorna o sexo
 */
char Anfibio::getSexo() {
	return m_sexo;
}
/**
 * @brief set do tamanho do Anfibio
 * @param recebe tamanho
 */
void Anfibio::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
/**
 * @brief get do tamanho do objeto Anfibio
 * @return retorna o tamanho
 */
double Anfibio::getTamanho() {
	return m_tamanho;
}
/**
 * @brief set da dieta do Anfibio
 * @param recebe dieta
 */
void Anfibio::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
/**
 * @brief get da dieta do objeto Anfibio
 * @return retorna a dieta
 */
string Anfibio::getDieta() {
	return m_dieta;
}
/**
 * @brief set do veterinario do Anfibio
 * @param recebe verterinario
 */
void Anfibio::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
/**
 * @brief get do veterinario do objeto Anfibio
 * @return retorna o veterinario
 */
int Anfibio::getVeterinario() {
	return m_veterinario;
}
/**
 * @brief set do tratador do Anfibio
 * @param recebe tratador
 */
void Anfibio::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
/**
 * @brief get do tratador do objeto Anfibio
 * @return retorna o tratador
 */
int Anfibio::getTratador() {
	return m_tratador;
}
/**
 * @brief set do nome de batismo do Anfibio
 * @param recebe nome de batismo
 */
void Anfibio::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
/**
 * @brief get do nome de batismo do objeto Anfibio
 * @return retorna o nome de batismo
 */
string Anfibio::getNome_batismo() {
	return m_nome_batismo;
}
/**
 * @brief declaração da funcionalidade de sobrecarga de impressão
 */
void Anfibio::imprime (void){
	cout << m_id << m_classe << m_nome_cientifico << m_sexo << m_tamanho << m_dieta <<
	m_veterinario << m_tratador <<  m_nome_batismo << m_total_de_mudas << endl;
}
