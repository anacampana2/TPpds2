#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <stdlib.h>
#include <string>


class Personagem
{
public:

    
    Personagem(int id);
    ~Personagem();
    void CriaAleatorio();
    void CriaManual();
    void Ficha();
    void Ataque(Personagem p1, int i);
    void fala();
    void rolaDados();
    
   
    
     void setId(int id);
    void setForca(float forca);
    void setConstituicao(float constituicao);
    void setDestreza(float destreza);
    void setAgilidade(float agilidade);
    void setCarisma(float carisma);
    void setVida(float vida);
    void setStamina(float stamina);

    int getId();
    float getForca();
    float getConstituicao();    
    float getDestreza();
    float getAgilidade();
    float getCarisma();
    float getVida();
    float getStamina();

    

    private:
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
