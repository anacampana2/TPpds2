#ifndef LOBO_H
#define LOBO_H

class Personagem;

class Lobo : public Personagem
{

    public:
    Lobo();
    virtual ~Lobo();
    void Ataque(Personagem p1, Lobo lobo1);
    void fala();
};

#endif
