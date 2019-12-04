#ifndef REI_DEMONIO_H
#define REI_DEMONIO_H

#include <stdlib.h>
#include <string>
#include "personagem.h"

class ReiDemonio : public Personagem
{

    public:
    ReiDemonio();
    
    virtual ~ReiDemonio();
    static void Ataque(ReiDemonio reiDemonio, Personagem p1);
    static void fala();
};

#endif
