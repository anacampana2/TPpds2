#ifndef LOBO_H
#define LOBO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class Lobo : public Personagem
{

    public:
    Lobo();
    virtual ~Lobo();
    void Ataque(Personagem p1, Lobo lobo1);
    void fala();
};

#endif
