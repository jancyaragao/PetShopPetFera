#ifndef _REPTIL_EXOTICO_H_
#define _REPTIL_EXOTICO_H_

class ReptilExotico : private Reptil, private AnimalExotico {
    public:
        ReptilExotico ();
        ~ReptilExotico ();
};

#endif