#ifndef DEMONIO_H
#define DEMONIO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class Demonio : public Personagem
{

    public:
    Demonio();
    virtual ~Demonio();
    void fala();
    void Ataque(Personagem receb, Demonio demonio);
    void recebAtaque(Personagem receb);
};

#endif
