#ifndef _AVE_H_
#define _AVE_H_

using namespace std;

class Ave {
    protected:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
        
        // Getters and Setters
        void setTamanho_do_bico_cm (double new_Tamanho_do_bico);
        double getTamanho_do_bico_cm ();
        void setEnvergaruda_das_asas (double new_Envergadura_das_asas);
        double getEnvergadura_das_asas ();
    public:
        Ave ();
        ~Ave ();
};

#endif