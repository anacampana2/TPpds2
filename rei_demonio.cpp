#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>

#include "personagem.h"
#include "rei_demonio.h"
#include "roladados.h"

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

 void ReiDemonio::Ataque(Personagem p1, ReiDemonio reiDemonio)
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
