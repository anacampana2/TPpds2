#ifndef PERSONAGEM_H
#define PERSONAGEM_H

class Lobo;
class Demonio;
class ReiDemonio;

class Personagem
{
public:

    
    Personagem();
    Personagem(int id);
    ~Personagem();
    void CriaAleatorio();
    void CriaManual();
    void Ficha();
    void AtacaLobo(Personagem p1, int i, Lobo lobo1);
    void AtacaDemonio(Personagem p1, int i, Demonio d1);
    void AtacaReiDemonio(Personagem p1, int i, ReiDemonio RD1); 
    void fala();
    
   
    
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

    float vida;

    private:
    int id;
    float forca;
    float constituicao;
    float destreza;
    float agilidade;
    float carisma;
    float stamina;

};

#endif
