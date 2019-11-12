#ifndef MAGO_H
#define MAGO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class mago:Personagem
{

public:
    void CriaMago();
    void ataque_distancia();
    void andar();
    void pular();
    void defender();
};

#endif