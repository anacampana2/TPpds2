#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <stdlib.h>
#include <string>


class Personagem
{
public:

    Personagem(int id);
    void CriaAleatorio();
    void CriaManual();
    void Ficha();
    int id;
    float forca;
    float constituicao;
    float destreza;
    float agilidade;
    float carisma;
    float vida;
    float stamina;
    
};

#endif