#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

#include "reptil.h"
#include "animalexotico.h"

class ReptilExotico : public Reptil, public AnimalExotico {
    public:
        ReptilExotico ( void );
        ~ReptilExotico ( void );
};

#endif