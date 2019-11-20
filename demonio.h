#ifndef DEMONIO_H
#define DEMONIO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class boss:Personagem
{

    public:
    void CriaDemonio();
    void fala();
    void Ataque();
};

#endif
