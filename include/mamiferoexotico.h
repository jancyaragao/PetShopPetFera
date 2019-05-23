#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

class MamiferoExotico : public Mamifero, public AnimalExotico {
    public:
        MamiferoExotico ( void );
        ~MamiferoExotico ( void );
};

#endif