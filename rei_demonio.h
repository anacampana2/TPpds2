#ifndef REI_DEMONIO_H
#define REI_DEMONIO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class ReiDemonio:Personagem
{

    public:
    void CriaReiDemonio();
    void ataque();
    void fala();
};

#endif
