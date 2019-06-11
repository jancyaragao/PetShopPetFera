#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

#include "./mamifero.h"
#include "./animalexotico.h"

class MamiferoExotico : public Mamifero, public AnimalExotico {
    public:
        MamiferoExotico ( void );
        ~MamiferoExotico ( void );
};

#endif