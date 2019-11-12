#ifndef ARQUEIRO_H
#define ARQUEIRO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class arqueiro:Personagem
{
    public:
    void CriaArqueiro();
    void ataque_distancia();
    void andar();
    void pular();
    void defender();
    
};

#endif 