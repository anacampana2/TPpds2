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

 void ReiDemonio::Ataque(Personagem receb, ReiDemonio reiDemonio){
  int ataque = reiDemonio.getForca() + rolaDados() + reiDemonio.getCarisma();
  int defesa = receb.destreza + receb.agilidade + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void ReiDemonio::fala(){
  cout<< "Tinhoso Master: MUHAHAHAHA,vou te colocar em um espeto!" << endl;
}
