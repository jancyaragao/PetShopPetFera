#ifndef AVE_H_
#define AVE_H_

#include "animal.h"

//using namespace std;

class Ave : public Animal {
    protected:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
    public:
        Ave ();
        Ave(int id, QString classe, QString m_nome_cientifico, char sexo, double tamanho,
        QString dieta, int veterinario, int tratador, QString m_nome_batismo, double tamanho_do_bico_cm,
        double envergadura_das_asas);
        ~Ave ();

        /*Animal Get and Set*/
            void setId(int new_id);
            int getId();
            void setClasse(QString new_classe);
            QString getClasse();
            void setNome_cientifico(QString new_nome_cientifico);
            QString getNome_cientifico();
            void setSexo(char new_sexo);
            char getSexo();
            void setTamanho(double new_tamanho);
            double getTamanho();
            void setDieta(QString new_dieta);
            QString getDieta();
            void setVeterinario(int new_veterinario);
            int getVeterinario();
            void setTratador(int new_tratador);
            int getTratador();
            void setNome_batismo(QString new_nome_batismo);
            QString getNome_batismo();

        // Getters and Setters
        void setTamanho_do_bico_cm (double new_Tamanho_do_bico);
        double getTamanho_do_bico_cm ( void );
        void setEnvergaruda_das_asas (double new_Envergadura_das_asas);
        double getEnvergadura_das_asas ( void );

};/* ave */
#endif
