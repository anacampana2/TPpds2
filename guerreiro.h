#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class guerreiro:Personagem
{
    public:
    void CriaGuerreiro();
    void ataque();
    void andar();
    void pular();
    void defender();
};

#endif