
#include <iostream>
#include <stdlib.h>
#include <string>
#include "personagem.h"
#include "guerreiro.h"

using namespace std;

Guerreiro :: Guerreiro()
{
    setCarisma(x);
    float carisma = getCarisma();

    setForca(x);
    float forca = getForca();

    setConstituicao(x);
    float constituicao = getConstituicao();

    setDestreza(x);
    float destreza = getDestreza();

    setAgilidade(x);
    float agilidade = getAgilidade();

    setVida(x);
    float vida = getVida();

    setStamina(x);
    float stamina = getStamina();
}




void Guerreiro::ataque(int i, Personagem per) {
    if(i == 1){

    }
}

