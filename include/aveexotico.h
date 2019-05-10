#ifndef _AVE_EXOTICO_H_
#define _AVE_EXOTICO_H_

// Herda Atributos da Classe Ave e AnimalExotico
class AveExotico : private Ave, private AnimalExotico {
    public:
        AveExotico ();
        ~AveExotico ();
};/* AveExotico */

#endif