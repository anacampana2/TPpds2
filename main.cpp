#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#include "personagem.h"
#include "lobo.h"
#include "demonio.h"
#include "rei_demonio.h"

using namespace std;



int main() {

	char id='z';
	do {
		cout << endl << endl << endl << " Digite seu id:";
		id = _getche();
		switch (id){
		case '0':
			break;
		case '1':
			cout << endl << endl << endl << " SEU ID EH:" << id << endl;
			Personagem j1 = Personagem(id);
			break;
		}
	} while (id != '0');
//historia introdutoria aqui




//Primeira ação
Lobo a;

cout<<"Voce avistou um minion,o que voce vai fazer?"<<endl;
cout<<"1. Fugir,afinal, minion é feios"<<endl;
cout<<"2. Atacar"<<endl;
cout<<"3.Observar de forma furtiva"<<endl;
int l =0;
cin>> l;
if(l==1){
	cout<<"O minion te perseguiu e te atacou pelas costas!!!"<<endl;
	a.fala();
	a.Ataque(j1);

	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(j1.stamina < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(a, ataq);
			}
		}
		else{
			if(j1.stamina <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(a, ataq);
			}
		}

		cout <<  "o minion revidou"<<endl;
		a.fala();
		a.Ataque(j1);
	}
	if(a.vida<= 0){
		cout<<"O minion foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
	}
}
if(l==2){
cout<<"Voce atacou o minion, defina seu tipo de Ataque"<<endl;
cout<<"1. Ataque leve"<< endl;
cout<<"2. Ataque pesado"<<endl;
int ataq;
cin>> ataq;
if(ataq == 1){
	if(j1.stamina < 2){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.Ataque(a, ataq);
	}
}
else{
	if(j1.stamina <6){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.Ataque(a, ataq);
	}
}
cout<< "O minion revidou"<< endl;
a.fala();
a.Ataque(j1);
while(a.vida > 0 && j1.vida > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin>> ataq;
	if(ataq == 1){
		if(j1.stamina < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(a, ataq);
		}
	}
	else{
		if(j1.stamina <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(a, ataq);
		}
	}
	cout <<  "o minion revidou"<<endl;
	a.fala();
	a.Ataque(j1);
}
if(a.vida<= 0){
	cout<<"O lobo foi derrotado, continue sua jornada!"<<endl;
}
else{
	cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
}
}
if(l==3){
	cout<<"O lobo sentiu sua presença e te atacou!!"<<endl;
	a.fala();
	a.Ataque(j1);
int k;
	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(j1.stamina < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(a, ataq);
			}
		}
		else{
			if(j1.stamina <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(a, ataq);
			}
		}
		cout <<  "o lobo revidou"<<endl;
		a.fala();
		a.Ataque(j1);
		k++;
		if(k%2 == 0){
			j1.stamina = j1.stamina +1;
		}
	}
	if(a.vida<= 0){
		cout<<"O lobo foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
	}
}

cout<<"Segunda Parte da Jornada"<<endl;
cout<<"Voce encontrou um castelo abandonado, e precisa de um lugar para descansar e fugir do frio"<<endl;
cout<<"Qual sua decisão?"<< endl;
cout<<"1.Entrar no Castelo"<<endl;
cout<<"2.Passar a noite fora e acender uma fogueira"<<endl;
cout<<"3.Continuar a caminhada e procurar um lugar menos sombrio"<<endl;
demonio dem;
j1.vida = j1.vida + 10;
int decisao2 = 0;
cin >> decisao2;
if(decisao2==1){
cout<<"Ao subir as escadarias da estrutura, uma entidade obscura se manifesta e voce precisa atacar para defender sua pele"<<endl;
cout<<"Defina seu tipo de Ataque"<<endl;
cout<<"1. Ataque leve"<< endl;
cout<<"2. Ataque pesado"<<endl;
int ataq;
cin>> ataq;
if(ataq == 1){
	if(j1.stamina < 2){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.Ataque(dem, ataq);
	}
}
else{
	if(j1.stamina <6){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.Ataque(dem, ataq);
	}
}
cout<< "O demonio revidou"<< endl;
dem.fala();
dem.Ataque(j1);
while(dem.vida > 0 && j1.vida > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin>> ataq;
	if(ataq == 1){
		if(j1.stamina < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(dem, ataq);
		}
	}
	else{
		if(j1.stamina <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(dem, ataq);
		}
	}
	cout <<  "o demonio revidou"<<endl;
	dem.fala();
	dem.Ataque(j1);
}
if(dem.vida<= 0){
	cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
}
else{
	cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
}
}


if(decisao2==2){
	if(j1.destreza>= 10){
		cout<<"Por possuir um elevado nivel de destreza, voce conseguiu fazer fogueira e se esquentar"<<endl;
		cout<<"No meio da noite você escuta barulhos estranhos e ao investigar encontra uma entidade obscura e por isso precisa atacar"<<endl;
		cout<<"Defina seu tipo de Ataque"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(j1.stamina < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(dem, ataq);
			}
		}
		else{
			if(j1.stamina <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(dem, ataq);
			}
		}
		cout<< "O demonio revidou"<< endl;
		dem.fala();
		dem.Ataque(j1);
		while(dem.vida > 0 && j1.vida > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin>> ataq;
			if(ataq == 1){
				if(j1.stamina < 2){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.Ataque(dem, ataq);
				}
			}
			else{
				if(j1.stamina <6){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.Ataque(dem, ataq);
				}
			}
			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.Ataque(j1);
			k++;
			if(k%2 == 0){
				j1.stamina = j1.stamina +1;
			}
		}
		if(dem.vida<= 0){
			cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
		}
		else{
			cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
		}
	}
	else{
		cout<<"Voce nao possuiu destreza o suficiente para construir a fogueira e por isso, na escuridão, o sete peles te pegou!"<<endl;
		dem.fala();
		dem.Ataque(j1);

		while(dem.vida > 0 && j1.vida > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin>> ataq;
			if(ataq == 1){
				if(j1.stamina < 2){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.Ataque(dem, ataq);
				}
			}
			else{
				if(j1.stamina <6){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.Ataque(dem, ataq);
				}
			}

			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.Ataque(j1);
		}
		if(dem.vida<= 0){
			cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
		}
		else{
			cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
		}
	}
	}

if(decisao2==3){
	cout<<"Voce não encontrou abrigo, o frio te abraçou e voce pereceu nos braços da morte"<<endl;
	cout<<"GAME OVER"<<endl;
}

//HISTORIA ATE CHEGAR NO CHEFAO FINAL
cout<<"Terceira Parte da jornada"<<endl;
cout<<"Após derrotar o tinhoso, ainda confuso em sem esperança, o protagonista voce foi para a parte de trás do castelo"<<endl;

ReiDemonio Rdem;

j1.vida = j1.vida + 10;

cout<<"Ao chegar ao seu destino, o terreno tortuoso e sombrio, já denunciava o que lhe esperava"<<endl;
cout<<"O rei demonio, em meio a poeira e àos corvos, surgiu e voce tem que enfrenta-lo"<<endl;
cout<<"Ao analisar as alternativas, e observar o terreno, voce tem que definir sua estrategia"<<endl;
cout<<"1. Ficar de boa, e perguntar ao Rei demonio se está tudo certo"<<endl;
cout<<"2. Se esconder e esperar o melhor momento oportuno para atacar"<<endl;
cout<<"3.Xingar a mãe do demonio"<<endl;

int decisao3=0;
cin>>decisao3;

if(decisao3==1){
	cout<<"O Rei demonio teve um pessimo dia, e se irritou com sua pergunta.."<<endl;
	cout<<"Por isso, ele te atacou e não te deu tempo de reaçao..."<<endl;
	Rdem.fala();
	Rdem.Ataque(j1);

	while(Rdem.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(j1.stamina < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(Rdem, ataq);
			}
		}
		else{
			if(j1.stamina <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(Rdem, ataq);
			}
		}

		cout <<  "O Rei demonio revidou"<<endl;
		Rdem.fala();
		Rdem.Ataque(j1);
		k++;
		if(k%2 == 0){
			j1.stamina = j1.stamina +1;
		}
	}
	if(Rdem.vida<= 0){
		cout<<"O Rei demonio foi derrotado!!!!Parabéns!!"<<endl;
	}
	else{
		cout<<"Morreu na Praia! :("<<endl;
	}
}





if(decisao3==2){
	cout<<"O rei demonio já havia te visto, mas achou engraçado sua reação e te deu a oportunidade de começar atacando"<<endl;
	cout<<"Defina seu tipo de Ataque"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin>> ataq;
	if(ataq == 1){
		if(j1.stamina < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(Rdem, ataq);
		}
	}
	else{
		if(j1.stamina <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.Ataque(Rdem, ataq);
		}
	}
	cout<< "O Rei demonio revidou"<< endl;
	Rdem.fala();
	Rdem.Ataque(j1);
	while(Rdem.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(j1.stamina < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(Rdem, ataq);
			}
		}
		else{
			if(j1.stamina <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.Ataque(Rdem, ataq);
			}
		}
		cout <<  "o Rei demonio revidou"<<endl;
		Rdem.fala();
		Rdem.Ataque(j1);
	}
	if(Rdem.vida<= 0){
				cout<<"O Rei demonio foi derrotado!!!!Parabéns!!"<<endl;
	}
	else{
		cout<<"Morreu na praia:("<<endl;
	}
}

if(decisao3==3){
	cout<<"Com toda certeza nao é aconselhavel xingar a mae do demonio"<<endl;
	cout<<"Ele ficou irado e te matou em um golpe :("<<endl;
	cout<<"GAME OVER"<<endl;


}









	return 0;
}
