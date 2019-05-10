#ifndef _MAMIFERO_NATIVO_H_
#define _MAMIFERO_NATIVO_H_

class MamiferoNativo : private Mamifero, private AnimalNativo {
    public:
        MamiferoNativo();
        ~MamiferoNativo ();
};

#endif