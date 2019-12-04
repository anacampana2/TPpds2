#include <iostream>
#include <stdlib.h>
#include <string>
#include "rei_demonio.h"
#include "personagem.h"
#include "roladados.cpp"


using namespace std;

 ReiDemonio::ReiDemonio() 
 {
  
  setCarisma(7);
  float carisma = getCarisma();

  setForca(15);  
  float forca = getForca();

  setConstituicao(100);
  float constituicao = getConstituicao();
  
  setDestreza(5);
  float destreza = getDestreza();

  setAgilidade(20);
  float agilidade = getAgilidade();

  setVida(100);
  float vida = getVida();

  setStamina(10);
  float stamina = getStamina();
  
}

 void ReiDemonio::Ataque(ReiDemonio reiDemonio, Personagem p1)
 {
  int attRDemo = reiDemonio.getForca() + rolaDados() + reiDemonio.getCarisma();
  int defesaPerso = p1.getDestreza() + p1.getAgilidade() + rolaDados();
  float vidaPerso = p1.getVida() - (attRDemo-defesaPerso);
  p1.setVida(vidaPerso);
  cout<< "voce recebeu" << attRDemo-defesaPerso<< " de dano" << endl;
  cout<< "sua vida é igual a "<< p1.getVida()<< endl;
}

void ReiDemonio::fala(){
  cout<< "Tinhoso Master: MUHAHAHAHA,vou te colocar em um espeto!" << endl;
}
