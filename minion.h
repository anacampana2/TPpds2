#ifndef MINION_H
#define MINION_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class minion:Personagem
{

    public:
    void CriaMinion();
    void ataque();
    void andar();
    void pular();
    void defender();
};

#endif