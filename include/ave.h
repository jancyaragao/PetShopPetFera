#ifndef _AVE_H_
#define _AVE_H_

#include "animal.h"

using namespace std;

class Ave : public Animal {
    protected:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
    public:
        Ave ();
        Ave(int id, string classe, string m_nome_cientifico, char sexo, double tamanho,
        string dieta, int veterinario, int tratador, string m_nome_batismo, double tamanho_do_bico_cm,
        double envergadura_das_asas);
        ~Ave ();

        /*Animal Get and Set*/
            void setId(int new_id);
            int getId();
            void setClasse(string new_classe);
            string getClasse();
            void setNome_cientifico(string new_nome_cientifico);
            string getNome_cientifico();
            void setSexo(char new_sexo);
            char getSexo();
            void setTamanho(double new_tamanho);
            double getTamanho();
            void setDieta(string new_dieta);
            string getDieta();
            void setVeterinario(int new_veterinario);
            int getVeterinario();
            void setTratador(int new_tratador);
            int getTratador();
            void setNome_batismo(string new_nome_batismo);
            string getNome_batismo();

        // Getters and Setters
        void setTamanho_do_bico_cm (double new_Tamanho_do_bico);
        double getTamanho_do_bico_cm ( void );
        void setEnvergaruda_das_asas (double new_Envergadura_das_asas);
        double getEnvergadura_das_asas ( void );

};/* ave */
#endif