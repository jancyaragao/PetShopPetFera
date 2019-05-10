#ifndef _MAMIFERO_EXOTICO_H_
#define _MAMIFERO_EXOTICO_H_

class MamiferoExotico : private Mamifero, private AnimalExotico {
    public:
        MamiferoExotico ();
        ~MamiferoExotico ();
};

#endif