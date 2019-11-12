#ifndef BOSS_H
#define BOSS_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class boss:Personagem
{

    public:
    void CriaBoss();
    void ataque();
    void andar();
    void pular();
    void defender();
};

#endif