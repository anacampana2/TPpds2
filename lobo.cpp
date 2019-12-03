#include <iostream>
#include <stdlib.h>
#include <string>
#include "personagem.h"
#include "lobo.h"

using namespace std;

 Lobo ::Lobo() {

   setCarisma(0);
   float carisma = getCarisma();

   setForca(10);
   float forca = getForca();

   setConstituicao(100);
   float constituicao = getConstituicao();

   setDestreza(0);
   float destreza = getDestreza();

   setAgilidade(20);
   float agilidade = getAgilidade();

   setVida(100);
   float vida = getVida();

   setStamina(10);
   float stamina = getStamina();

}

void Lobo::Ataque(Personagem receb, Lobo lobo){
  int ataque = lobo.getForca() + rolaDados() + lobo.getCarisma();
  int defesa = receb.getDestreza() + receb.getAgilidade() + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void Lobo::fala(){
  cout<< "Lobo: Grrrrrrrrrrrr AU!AU!AU!" << endl;
}
}
