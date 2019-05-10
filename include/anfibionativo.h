#ifndef _ANFIBIO_NATIVO_H_
#define _ANFIBIO_NATIVO_H_

class AnfibioNativo : private Anfibio, private AnimalNativo {
    public:
        AnfibioNativo ();
        ~AnfibioNativo ();
};

#endif