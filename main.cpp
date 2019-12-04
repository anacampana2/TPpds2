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
#include "demonio.h"
#include "rei_demonio.h"
#include "roladados.h"

#include "personagem.cpp"
#include "lobo.cpp"
#include "demonio.cpp"
#include "rei_demonio.cpp"
#include "roladados.cpp"

using namespace std;

int main() {
	Personagem jogador1;
	char id='z';
	do {
		cout << endl << endl << endl << " Digite seu id:";
		id = _getche();
		switch (id){
		case '0':
			break;
		case '1':
			cout << endl << endl << endl << " SEU ID EH:" << id << endl;
		    jogador1 = Personagem(id);
			break;
		}
	} while (id != '0');
//historia introdutoria aqui
cout<<"Voce acorda com o grito de mulheres e criancas,pelo cheiro de enxofre presume que sua aldeia foi invadida por demonios "<<endl;
cout<<"Sua primeira reacão é procurar sua filha, mas ela foi levada pelos demonios para completarem mais um ritual"<<endl;
cout<<"Esse ritual acabaria com humanidade, pois ressuscitaria Hitler "<<endl;
cout<<"(Foi a pior pessoa que conseguirmos pensar :))"<<endl;

Personagem jogador1inteiro = jogador1;
//Primeira ação
Lobo lobo1;

cout<<"Voce avistou um lobo,o que voce vai fazer?"<<endl;
cout<<"1. Fugir,afinal, lobo é feioso"<<endl;
cout<<"2. Atacar"<<endl;
cout<<"3.Observar de forma furtiva"<<endl;
int opcao = 0;
cin>> opcao;
if(opcao==1){
	cout<<"O lobo te perseguiu e te atacou pelas costas!!!"<<endl;
	lobo1.fala();
	lobo1.Ataque(jogador1, lobo1);

	while(lobo1.getVida() > 0 && jogador1.getVida() > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(jogador1.getStamina() < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaLobo(jogador1, ataq, lobo1);
			}
		}
		else{
			if(jogador1.getStamina() <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaLobo(jogador1, ataq, lobo1);
			}
		}

		cout <<  "o lobo revidou"<<endl;
		lobo1.fala();
		lobo1.Ataque(jogador1, lobo1);
	}
	if(lobo1.getVida()<= 0){
		cout<<"O lobo foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o lobo,Game over! :("<<endl;
			cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
	}
}
if(opcao==2){
cout<<"Voce atacou o lobo, defina seu tipo de Ataque"<<endl;
cout<<"1. Ataque leve"<< endl;
cout<<"2. Ataque pesado"<<endl;
int ataq;
cin>> ataq;
if(ataq == 1){
	if(jogador1.getStamina() < 2){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			jogador1.AtacaLobo(jogador1, ataq, lobo1);
	}
}
else{
	if(jogador1.getStamina()<6){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			jogador1.AtacaLobo(jogador1, ataq, lobo1);
	}
}
cout<< "O lobo revidou"<< endl;
lobo1.fala();
lobo1.Ataque(jogador1, lobo1);


while(lobo1.getVida() > 0 && jogador1.getVida() > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin>> ataq;
	if(ataq == 1){
		if(jogador1.getStamina() < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaLobo(jogador1, ataq, lobo1);
		}
	}
	else{
		if(jogador1.getStamina() <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaLobo(jogador1, ataq, lobo1);
		}
	}
	cout <<  "o lobo revidou"<<endl;
	lobo1.fala();
	lobo1.Ataque(jogador1, lobo1);
}
if(lobo1.getVida()<= 0){
	cout<<"O lobo foi derrotado, continue sua jornada!"<<endl;
}
else{
	cout<<"Pensei que nao tinha como perder para o lobo,Game over! :("<<endl;
		cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
}
}
if(opcao==3){
	cout<<"O lobo sentiu sua presença e te atacou!!"<<endl;
	lobo1.fala();
	lobo1.Ataque(jogador1, lobo1);
	int k = 0;
	while(lobo1.getVida() > 0 && jogador1.getVida() > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(jogador1.getStamina() < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaLobo(jogador1, ataq, lobo1);
			}
		}
		else{
			if(jogador1.getStamina() <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaLobo(jogador1, ataq, lobo1);
			}
		}
		cout <<  "o lobo revidou"<<endl;
		lobo1.fala();
		lobo1.Ataque(jogador1, lobo1);
		k++;
		if(k%2 == 0){
			jogador1.setStamina(jogador1.getStamina()+1);
		}
	}
	if(lobo1.getVida()<= 0){
		cout<<"O lobo foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o lobo,Game over! :("<<endl;
			cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
	}
}

cout<<"Segunda Parte da Jornada"<<endl;
cout<<"Voce encontrou um castelo abandonado, e precisa de um lugar para descansar e fugir do frio"<<endl;
cout<<"Qual sua decisão?"<< endl;
cout<<"1.Entrar no Castelo"<<endl;
cout<<"2.Passar a noite fora e acender uma fogueira"<<endl;
cout<<"3.Continuar a caminhada e procurar um lugar menos sombrio"<<endl;
Demonio dem;

jogador1.setVida(jogador1inteiro.getVida());
jogador1.setStamina(jogador1inteiro.getStamina());

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
	if(jogador1.getStamina() < 2){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			jogador1.AtacaDemonio(jogador1, ataq, dem);
	}
}
else{
	if(jogador1.getStamina() <6){
		cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			jogador1.AtacaDemonio(jogador1, ataq, dem);
	}
}
cout<< "O demonio revidou"<< endl;
dem.fala();
dem.Ataque(jogador1, dem);
while(dem.getVida() > 0 && jogador1.getVida() > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin>> ataq;
	if(ataq == 1){
		if(jogador1.getStamina() < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaDemonio(jogador1, ataq, dem);
		}
	}
	else{
		if(jogador1.getStamina() <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaDemonio(jogador1, ataq, dem);
		}
	}
	cout <<  "o demonio revidou"<<endl;
	dem.fala();
	dem.Ataque(jogador1, dem);
}
if(dem.vida<= 0){
	cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
}
else{
	cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
		cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
}
}


if(decisao2==2){
	if(jogador1.getDestreza() >= 10){
		int k = 0;
		cout<<"Por possuir um elevado nivel de destreza, voce conseguiu fazer fogueira e se esquentar"<<endl;
		cout<<"No meio da noite você escuta barulhos estranhos e ao investigar encontra uma entidade obscura e por isso precisa atacar"<<endl;
		cout<<"Defina seu tipo de Ataque"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(jogador1.getStamina() < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaDemonio(jogador1, ataq, dem);
			}
		}
		else{
			if(jogador1.getStamina() <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaDemonio(jogador1, ataq, dem);
			}
		}
		cout<< "O demonio revidou"<< endl;
		dem.fala();
		dem.Ataque(jogador1, dem);
		while(dem.getVida() > 0 && jogador1.getVida() > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin>> ataq;
			if(ataq == 1){
				if(jogador1.getStamina() < 2){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						jogador1.AtacaDemonio(jogador1, ataq, dem);
				}
			}
			else{
				if(jogador1.getStamina() <6){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						jogador1.AtacaDemonio(jogador1, ataq, dem);
				}
			}
			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.Ataque(jogador1, dem);
			k++;
			if(k%2 == 0){
				jogador1.setStamina(jogador1.getStamina() + 1);
			}
		}
		if(dem.getVida()<= 0){
			cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
		}
		else{
			cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
				cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
		}
	}
	else{
		cout<<"Voce nao possuiu destreza o suficiente para construir a fogueira e por isso, na escuridão, o sete peles te pegou!"<<endl;
		dem.fala();
		dem.Ataque(jogador1, dem);

		while(dem.getVida() > 0 && jogador1.getVida() > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin>> ataq;
			if(ataq == 1){
				if(jogador1.getStamina() < 2){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						jogador1.AtacaDemonio(jogador1, ataq, dem);
				}
			}
			else{
				if(jogador1.getStamina() <6){
					cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						jogador1.AtacaDemonio(jogador1, ataq, dem);
				}
			}

			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.Ataque(jogador1, dem);
		}
		if(dem.getVida()<= 0){
			cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
		}
		else{
			cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
				cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
		}
	}
	}

if(decisao2==3){
	cout<<"Voce não encontrou abrigo, o frio te abraçou e voce pereceu nos braços da morte"<<endl;
	cout<<"GAME OVER"<<endl;
		cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
}

//HISTORIA ATE CHEGAR NO CHEFAO FINAL
cout<<"Terceira Parte da jornada"<<endl;
cout<<"Após derrotar o tinhoso, ainda confuso em sem esperança, o protagonista (voce no caso) foi para a parte de trás do castelo"<<endl;
cout<<"Lá, voce encontra o mapa que leva ate a localidade em que os cramunhoes realizam o ritual para invocar o supremacista branco"<<endl;

ReiDemonio Rdem;

jogador1.setVida(jogador1inteiro.getVida());
jogador1.setStamina(jogador1inteiro.getStamina());

cout<<"Ao chegar ao seu destino, o terreno tortuoso e sombrio, já denunciava o que lhe esperava"<<endl;
cout<<"O rei demonio, em meio a poeira e àos corvos, surgiu e voce tem que enfrenta-lo"<<endl;
cout<<"Ao analisar as alternativas, e observar o terreno, voce tem que definir sua estrategia"<<endl;
cout<<"1. Ficar de boa, e perguntar ao Rei demonio se está tudo certo"<<endl;
cout<<"2. Se esconder e esperar o melhor momento oportuno para atacar"<<endl;
cout<<"3.Xingar a mãe do demonio"<<endl;

int decisao3=0;
cin>>decisao3;

if(decisao3==1){
	int k=0;
	cout<<"O Rei demonio teve um pessimo dia, e se irritou com sua pergunta.."<<endl;
	cout<<"Por isso, ele te atacou e não te deu tempo de reaçao..."<<endl;
	Rdem.fala();
	Rdem.Ataque(jogador1, Rdem);

	while(Rdem.getVida() > 0 && jogador1.getVida() > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(jogador1.getStamina() < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
			}
		}
		else{
			if(jogador1.getStamina() <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
			}
		}

		cout <<  "O Rei demonio revidou"<<endl;
		Rdem.fala();
		Rdem.Ataque(jogador1, Rdem);
		k++;
		if(k%2 == 0){
			jogador1.setStamina(jogador1.getStamina() +1);
		}
	}
	if(Rdem.vida<= 0){
		cout<<"O Rei demonio foi derrotado!!!!Parabéns!!"<<endl;
	}
	else{
		cout<<"Morreu na Praia! :("<<endl;
			cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
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
		if(jogador1.getStamina() < 2){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
		}
	}
	else{
		if(jogador1.getStamina() <6){
			cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
		}
	}
	cout<< "O Rei demonio revidou"<< endl;
	Rdem.fala();
	Rdem.Ataque(jogador1, Rdem);
	while(Rdem.getVida() > 0 && jogador1.getVida() > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin>> ataq;
		if(ataq == 1){
			if(jogador1.getStamina() < 2){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
			}
		}
		else{
			if(jogador1.getStamina() <6){
				cout << "voce nao tem stamina suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					jogador1.AtacaReiDemonio(jogador1, ataq, Rdem);
			}
		}
		cout <<  "o Rei demonio revidou"<<endl;
		Rdem.fala();
		Rdem.Ataque(jogador1, Rdem);
	}
	if(Rdem.vida<= 0){
				cout<<"O Rei demonio foi derrotado!!!!Parabéns!! Voce salvou sua filha e o mundo :)"<<endl;
	}
	else{
		cout<<"Morreu na praia:("<<endl;
			cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;
	}
}

if(decisao3==3){
	cout<<"Com toda certeza nao é aconselhavel xingar a mae do demonio"<<endl;
	cout<<"Ele ficou irado e te matou em um golpe :("<<endl;
	cout<<"GAME OVER, o demonio torturou sua filha e te fez assistir enquanto ela agonizava e morria,"<<endl;
	cout<<"Ela pegou em sua mao e disse: -Caraca papai voce é muito limitado"<<endl;
	cout<<"O rei demonio invocou Hitler, e junto com Bonoliro eles dominaram o mundo e proibiram o uso de entorpecentes :()"<<endl;


}
	return 0;
}
