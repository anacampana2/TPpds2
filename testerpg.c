#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "jogo.h"
void troca(Guerreiro v[]){
	Guerreiro aux=v[0];
	v[0]=v[1];
	v[1]=aux;
}
void main(){
	Guerreiro g1,g2,v[2];
	srand(time((NULL)));
	criaGuerreiro(&g1,1);
	criaGuerreiro(&g2,2);
	v[0]=g1;
	v[1]=g2;


ataca(&v[0],&v[1]);
	while(v[0].pontos_vida>0 && v[1].pontos_vida>0){
		ataca(&v[0],&v[1]);
		troca(v);
	}
	if(v[1].pontos_vida>0){
	printf("ganhador: %d",v[1].id_jogador);
	}
	else{
		printf("ganhador: %d",v[2].id_jogador);
	}
}
