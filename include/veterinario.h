#ifndef _VETERINARIO_H_
#define _VETERINARIO_H_

#include <string>

#include "funcionario.h"
/**
 * @file veterinario.h
 * @authors Tiago Jordão, Jâncy Aragão, Louis Arthur
 * @details declaração dos construtores e destrutores,
 * é possível perceber que há o uso de herança dos atributos da Classe Funcionário.
 */
using namespace std;

class Veterinario: public Funcionario {
	protected:
		string m_crmv;
		
		ostream& listarFuncionario(ostream& os) const {
			os <<
			"\nID: " << m_id <<
			"\nNome: " << m_nome <<
			"\nCPF: " << m_cpf <<
			"\nIdade: " << m_idade <<
			"\nTipo Sanguineo: " << m_tipo_sanguineo <<
			"\nEspecialidade: " << m_especialidade <<
			"\nCRMV: " << m_crmv << 
			"\n" << endl;
			return os;
		}
		ofstream& salvarFuncionario(ofstream& out) const {
            out << m_id << ";" << m_nome << ";" << m_cpf << ";" << m_idade << ";" <<
            m_tipo_sanguineo << ";" << m_especialidade << ";" << m_crmv << ";" << endl;
            return out;
        }
	public:
		Veterinario();
		Veterinario(int id, string nome, string cpf, short idade, string tipo_sanguineo,
        string especialidade, string crmv);
		~Veterinario();

		// Getters and Setters
		void setCrmv(string new_crmv);
		string getCrmv();

		// Getters and Setters
		void setNivel_de_seguranca(int new_nivel_de_seguranca);
		int getNivel_de_seguranca();
		void setId(int new_id);
		int getId();
		void setNome(string new_nome);
		string getNome();
		void setCpf(string new_cpf);
		string getCpf();
		void setIdade(short new_idade);
		short getIdade();
		void setTipo_sanguineo(string new_tipo_sanguineo);
		string getTipo_sanguineo();
		void setEspecialidade(string new_especialidade);
		string getEspecialidade();
	
		void imprime (void);

}; /* Veterinario */

#endif
