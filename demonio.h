#ifndef DEMONIO_H
#define DEMONIO_H

class Personagem;

class Demonio : public Personagem
{

    public:
    Demonio();
    virtual ~Demonio();
    void fala();
    void Ataque(Personagem p1, Demonio demonio);
};

#endif
