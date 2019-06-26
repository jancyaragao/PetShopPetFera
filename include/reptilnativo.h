#ifndef _REPTIL_NATIVO_H
#define _REPTIL_NATIVO_H

#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
	private:
		ostream& listarAnimal(ostream& os) const {
            return os << m_id << ";" << m_classe << ";" << m_nome_cientifico << ";" << m_sexo << ";" <<
            m_tamanho << ";" << m_dieta << ";" << m_veterinario << ";" << m_tratador << ";" << 
            m_nome_batismo << ";" << m_venenoso << ";" << m_tipo_veneno << ";" <<
            m_autorizacao_ibama << ";" << m_uf_origem << ";" << endl;
        }
    public:
        ReptilNativo ( void );
        ReptilNativo (int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
		string dieta, int veterinario, int tratador, string m_nome_batismo, bool m_venenoso,
		string tipo_veneno, string autorizacao_ibama, string uf_origem);
        ~ReptilNativo ( void );
};

#endif