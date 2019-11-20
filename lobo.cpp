#include <stdlib.h>
#include <string>
#include "personagem.h"
#include "lobo.h"

void lobo::CriaLobo() {
  this->carisma=0;
  this->forca = 10;
  this->constituicao = 100;
  this->destreza = 0;
  this->agilidade = 15
  this-> vida = 100;
  this->stamina = 10 ;

}

void lobo::Ataque(Personagem receb){
  int ataque = this->forca + rolaDados() + this-> carisma;
  int defesa = receb.destreza + receb.agilidade + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void lobo::fala(){
  cout<< "Lobo: Grrrrrrrrrrrr AU!AU!AU!" << endl;
}
