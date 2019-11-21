#include <stdlib.h>
#include <string>
#include "personagem.h"
#include "demonio.h"

void Demonio::CriaDemonio() {
  this->carisma=5;
  this->forca = 20;
  this->constituicao = 100;
  this->destreza = 1;
  this->agilidade = 15
  this-> vida = 100;
  this->stamina = 10 ;

}

void Demonio::Ataque(Personagem receb){
  int ataque = this->forca + rolaDados() + this-> carisma;
  int defesa = receb.destreza + receb.agilidade + rolaDados();
   receb.vida = receb.vida - (ataque-defesa);
  cout<< "voce recebeu" << ataque-defesa<< " de dano" << endl;
  cout<< "sua vida é igual a "<< receb.vida<< endl;
}

void Demonio::fala(){
  cout<< "EU SOU O DEMONIO!! OUÇO O DISCO DA XUXA AO CONTRARIO NAS HORAS VAGAS!" << endl;
}
