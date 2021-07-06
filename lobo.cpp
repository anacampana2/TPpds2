#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string>

#include "personagem.h"
#include "lobo.h"
#include "roladados.h"

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

void Lobo::Ataque(Personagem p1, Lobo lobo1){
  int ataqueLobo = lobo1.getForca() + rolaDados() + lobo1.getCarisma();
  int defesaPersonagem = p1.getDestreza() + p1.getAgilidade() + rolaDados();
  float vidaPerso = p1.getVida() - (ataqueLobo-defesaPersonagem);
  setVida(vidaPerso);
  cout<< "voce recebeu" << ataqueLobo-defesaPersonagem<< " de dano" << endl;
  cout<< "sua vida é igual a "<< vidaPerso << endl;
}

void Lobo::fala(){
  cout<< "Lobo: Grrrrrrrrrrrr AU!AU!AU!" << endl;
}

