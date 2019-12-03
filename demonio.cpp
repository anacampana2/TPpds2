#include <iostream>
#include <stdlib.h>
#include <string>
#include "personagem.h"
#include "demonio.h"

using namespace std;

 Demonio::Demonio() {

  setCarisma(5);
  float carisma = getCarisma();

  setForca(20);
  float forca = getForca();

  setConstituicao(100);
  float constituicao = getConstituicao();

  setDestreza(1);
  float destreza = getDestreza();

  setAgilidade(15);
  float agilidade = getAgilidade();

  setVida(100);
  float vida = getVida();

  setStamina(10);
  float stamina = getStamina();

}

void Demonio::Ataque(Personagem receb, Demonio demonio){
  int ataque = demonio.getForca() + rolaDados() + demonio.getCarisma();
  int defesa = receb.getDestreza() + receb.getAgilidade() + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void Demonio::fala(){
  cout<< "EU SOU O DEMONIO!! OUÇO O DISCO DA XUXA AO CONTRARIO NAS HORAS VAGAS!" << endl;
}
