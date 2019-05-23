#include <iostream>
#include <ofstream>


class Sistem {
	private:

	public:
// Construtores e Destrutores
		Sistem( void );
		~Sistem( void );
// Metodos para Animais
		cadastro_animal (); /*Cadastro de Animais*/
		remocao_animal (); /*Remove um animal após*/
		alteracao_animal (); /*Alteracao de dados de um animal*/
		consultar_animal (); /*Consultar dados de um determinado animal ou classe*/
		consultar_animais_de_funcionario (); /*Consultar animais sob a responsabilidade de um determinado funcionario*/
// Metodos para Funcionarios
		// Veterinarios
			cadastro_veterinario ();
			remocao_veterinario ();
		// Tratadores
			cadastro_tratador ();
			remocao_tratador ();
};