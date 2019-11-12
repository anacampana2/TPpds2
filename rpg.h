typedef struct Guerreiro{
	int ataque;
	int defesa;
	int carisma;
	int pontos_vida;
	int id_jogador;
}Guerreiro;
int rolaDados();
void criaGuerreiro(Guerreiro *gue, int id);
int bonusCarisma(Guerreiro gue);
void ataca(Guerreiro *g1, Guerreiro *g2);


	
