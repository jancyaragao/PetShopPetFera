#include "reptil.h"
#include <string>
using namespace std;
/**
 * @file reptil.cpp
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @brief declaração dos construtores e destrutores, é possível perceber que há o uso de herança dos atributos da classe Animal
 */
Reptil::Reptil() { /*empty*/ }
/**
 * @brief contrutor parametrizado utilizando herança da classe nimal
 */
Reptil::Reptil(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool venenoso, string tipo_veneno)
		: Animal(id, classe, m_nome_cientifico, sexo, tamanho, dieta, veterinario, tratador, m_nome_batismo),
		m_venenoso(venenoso), m_tipo_veneno(tipo_veneno)
{ /*empty*/ }
/**
 * @brief Declaração da funcionalidade dos métodos getters e setters
 * destrutor da classe reptil
 */
Reptil::~Reptil() { /*empty*/ }
/**
 * @brief set do venenoso do reptil
 * @param recebe o venenoso 
 */
void Reptil::setVenenoso(bool new_venenoso) {
	m_venenoso = new_venenoso;
}
/**
 * @brief get venenoso do objeto reptil
 * @return retorna venenoso
 */
bool Reptil::getVenenoso() {
	return m_venenoso;
}
/**
 * @brief set do tipo do veneno do reptil
 * @param recebe o tipo do veneno 
 */
void Reptil::setTipo_veneno(string new_tipo_veneno) {
	m_tipo_veneno = new_tipo_veneno;
}
/**
 * @brief get do tipo do veneno do objeto reptil
 * @return retorna o tipo do veneno
 */
string Reptil::getTipo_veneno() {
	return m_tipo_veneno;
}
/**
 * @brief set do ID do reptil
 * @param recebe o ID
 */
void Reptil::setId(int new_id){
	m_id = new_id;
}
/**
 * @brief get do ID do objeto reptil
 * @return retorna o ID
 */
int Reptil::getId() {
	return m_id;
}
/**
 * @brief set da CLASSE do reptil
 * @param recebe a CLASSE
 */
void Reptil::setClasse(string new_classe) {
	m_classe = new_classe;
}
/**
 * @brief get da CLASSE do objeto reptil
 * @return retorna a CLASSE
 */
string Reptil::getClasse() {
	return m_classe;
}
/**
 * @brief set do NOME CIENTIFICO do reptil
 * @param recebe NOME CIENTIFICO
 */
void Reptil::setNome_cientifico(string new_nome_cientifico) {
	m_nome_cientifico = new_nome_cientifico;
}
/**
 * @brief get do Nome cientifico do objeto reptil
 * @return retorna o Nome cientifico
 */
string Reptil::getNome_cientifico() {
	return m_nome_cientifico;
}
/**
 * @brief set do sexo do reptil
 * @param recebe sexo
 */
void Reptil::setSexo(char new_sexo) {
	m_sexo = new_sexo;
}
/**
 * @brief get do sexo do objeto reptil
 * @return retorna o sexo
 */
char Reptil::getSexo() {
	return m_sexo;
}
/**
 * @brief set do tamanho do reptil
 * @param recebe tamanho
 */
void Reptil::setTamanho(double new_tamanho) {
	m_tamanho = new_tamanho;
}
/**
 * @brief get do tamanho do objeto reptil
 * @return retorna o tamanho
 */
double Reptil::getTamanho() {
	return m_tamanho;
}
/**
 * @brief set da dieta do reptil
 * @param recebe dieta
 */
void Reptil::setDieta(string new_dieta) {
	m_dieta = new_dieta;
}
/**
 * @brief get da dieta do objeto reptil
 * @return retorna a dieta
 */
string Reptil::getDieta() {
	return m_dieta;
}
/**
 * @brief set do veterinario do reptil
 * @param recebe verterinario
 */
void Reptil::setVeterinario(int new_veterinario) {
	m_veterinario = new_veterinario;
}
/**
 * @brief get do veterinario do objeto reptil
 * @return retorna o veterinario
 */
int Reptil::getVeterinario() {
	return m_veterinario;
}
/**
 * @brief set do tratador do reptil
 * @param recebe tratador
 */
void Reptil::setTratador(int new_tratador) {
	m_tratador = new_tratador;
}
/**
 * @brief get do tratador do objeto reptil
 * @return retorna o tratador
 */
int Reptil::getTratador() {
	return m_tratador;
}
/**
 * @brief set do nome de batismo do reptil
 * @param recebe nome de batismo
 */
void Reptil::setNome_batismo(string new_nome_batismo) {
	m_nome_batismo = new_nome_batismo;
}
/**
 * @brief get do nome de batismo do objeto reptil
 * @return retorna o nome de batismo
 */
string Reptil::getNome_batismo() {
	return m_nome_batismo;
}
/**
 * @brief declaração da funcionalidade de sobrecarga de impressão
 */
void Reptil::imprime (void){
	cout << m_id << m_classe << m_nome_cientifico << m_sexo << 
            m_tamanho << m_dieta << m_veterinario << m_tratador << 
            m_nome_batismo << m_venenoso << m_tipo_veneno << endl;
}
