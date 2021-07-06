#ifndef REI_DEMONIO_H
#define REI_DEMONIO_H

class Personagem;

class ReiDemonio : public Personagem
{

    public:
    ReiDemonio();
    
    virtual ~ReiDemonio();
    static void Ataque(Personagem p1, ReiDemonio reiDemonio);
    static void fala();
};

#endif
