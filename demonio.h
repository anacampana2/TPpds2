#ifndef DEMONIO_H
#define DEMONIO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class Demonio:Personagem
{

    public:
    Demonio();
    void fala();
    void Ataque(Personagem receb);
};

#endif
