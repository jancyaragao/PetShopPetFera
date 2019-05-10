#ifndef _ANFIBIO_EXOTICO_H_
#define _ANFIBIO_EXOTICO_H_

class AnfibioExotico : private Anfibio, private AnimalExotico {
    public:
        AnfibioExotico ();
        ~AnfibioExotico ();
};

#endif