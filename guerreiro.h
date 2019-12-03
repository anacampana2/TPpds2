#ifndef GUERREIRO_H
#define GUERREIRO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class Guerreiro: public Personagem
{
    public:
    void CriaGuerreiro();
    void CriaGuerreiro(int id);
    void ataque(int i, Personagem per);
    void andar();
    void pular();
    void defender();
};

#endif
