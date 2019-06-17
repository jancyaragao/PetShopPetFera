#ifndef _AVE_H_
#define _AVE_H_

#include "animal.h"

using namespace std;

class Ave : public Animal {
    protected:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
        
        // Getters and Setters
        void setTamanho_do_bico_cm (double new_Tamanho_do_bico);
        double getTamanho_do_bico_cm ( void );
        void setEnvergaruda_das_asas (double new_Envergadura_das_asas);
        double getEnvergadura_das_asas ( void );
    public:
        Ave ();
        Ave(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
        string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
        double envergadura_das_asas);
        ~Ave ();
};/* ave */
#endif