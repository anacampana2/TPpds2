#include <stdlib.h>
#include <string>
#include "REI_DEMONIO_H.h"
#include "personagem.h"

void ReiDemonio::CriaReiDemonio() {
  this->carisma=7;
  this->forca = 15;
  this->constituicao = 100;
  this->destreza = 5;
  this->agilidade = 20;
  this-> vida = 100;
  this->stamina = 10 ;

}

void ReiDemonio::Ataque(Personagem receb){
  int ataque = this->forca + rolaDados() + this-> carisma;
  int defesa = receb.destreza + receb.agilidade + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void ReiDemonio::fala(){
  cout<< "Tinhoso Master: MUHAHAHAHA,vou te colocar em um espeto!" << endl;
}
