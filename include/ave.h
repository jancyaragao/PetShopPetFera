#ifndef _AVE_H_
#define _AVE_H_

using namespace std;

class Ave {
    protected:
        double m_tamanho_do_bico_cm;
        double m_envergadura_das_asas;
        
        // Getters and Setters
<<<<<<< HEAD
        void setTamanho_do_bico_cm (double new_Tamanho_do_bico);
        double getTamanho_do_bico_cm ( void );
        void setEnvergaruda_das_asas (double new_Envergadura_das_asas);
        double getEnvergadura_das_asas ( void );
    public:
        Ave ( void );
        ~Ave ( void );
};/* ave */
=======
        void setTamanho_do_bico_cm (double new_tamanho_do_bico);
        double getTamanho_do_bico_cm ();
        void setEnvergaruda_das_asas (double new_envergadura_das_asas);
        double getEnvergadura_das_asas ();
        
    public:
        Ave ();
        Ave(double tamanho_do_bico_cm, double envergadura_das_asas);
        ~Ave ();
        
}; /* Ave */
>>>>>>> 770dcaadfacfa40410cbcbca2624b7ef5428f28e

#endif