#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

#include "./mamifero.h"
#include "animalnativo.h"

class MamiferoNativo : public Mamifero, public AnimalNativo {
    public:
        MamiferoNativo( void );
        ~MamiferoNativo ( void );
};

#endif