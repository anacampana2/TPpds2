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
    void Ataque(Personagem receb, Lobo lobo1);
    void fala();
    void recebAtaque(Personagem receb);
};

#endif
