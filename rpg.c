#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

typedef struct Guerreiro{
	int ataque;
	int defesa;
	int carisma;
	int pontos_vida;
	int id_jogador
}Guerreiro;
int rolaDados(){
	int dad1,dad2,dad3;
	dad1=1+ rand()%5;
	dad2=1+ rand()%5;
	dad3=1+ rand()%5;
	//printf("aleatorio %d\n",dad1+dad2+dad3);
	return dad1+dad2+dad3;
}
void criaGuerreiro(Guerreiro *gue, int id){

	gue->ataque=rolaDados();
	printf("ataque %d\n",gue->ataque);
	gue->defesa=rolaDados();
	printf("defesa %d\n",gue->defesa);
	gue->carisma=rolaDados();
	printf("carisma %d\n",gue->carisma);
	int cont=0;
	cont=cont+rolaDados();
	cont=cont+rolaDados();
	cont=cont+rolaDados();
	gue->pontos_vida=cont;
	printf("vida %d\n",gue->pontos_vida);
	gue->id_jogador=id;
	printf("id %d\n",gue->id_jogador);
}
int bonusCarisma(Guerreiro gue){
	if(gue.carisma==3){
		//printf("bonus -3\n");
		return -3;
	}
	else if(gue.carisma==4 || gue.carisma==5){
		//printf("bonus -2\n");
		return -2;
	}
	else if(gue.carisma==6 || gue.carisma==7){
		//printf("bonus -1\n");
		return -1;
	}
	else if(gue.carisma==14 || gue.carisma==15){
		//printf("bonus 1\n");
		return 1;
	}
	else if(gue.carisma==16 || gue.carisma==17){
		//printf("bonus 2\n");
		return 2;
	}
	else if(gue.carisma==18){
		//printf("bonus 3\n");
		return 3;
	}
	else if(gue.carisma>7 && gue.carisma<14){
		//printf("bonus 3\n");
		return 0;
	}
}
void ataca(Guerreiro *g1, Guerreiro *g2){
	int golpe,escudo,dano;
	golpe=rolaDados()+g1->ataque+bonusCarisma(*g1);

	//printf("golpe %d\n",golpe);
	escudo=rolaDados()+g2->defesa+bonusCarisma(*g2);
	//printf("escudo %d\n",escudo);
	dano=golpe-escudo;
	//printf("dano %d\n",dano);
	if(dano>0){
		//printf("teve dano\n");
		g2->pontos_vida=g2->pontos_vida-dano;
	}
}



	
