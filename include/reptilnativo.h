#ifndef _REPTIL_NATIVO_H
#define _REPTIL_NATIVO_H

#include "reptil.h"
#include "animalnativo.h"

class ReptilNativo : public Reptil, public AnimalNativo {
    public:
        ReptilNativo ( void );
        ~ReptilNativo ( void );
};

#endif