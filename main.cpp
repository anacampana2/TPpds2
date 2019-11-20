#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

#include "personagem.h"

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
lobo a;
a.CriaLobo();
cout<<"Voce avistou um minion,o que voce vai fazer?"<<endl;
cout<<"1. Fugir,afinal, minion é feios"<<endl;
cout<<"2. Atacar"<<endl;
cout<<"3.Observar de forma furtiva"<<endl;
int l =0;
cin>> l;
if(l==1){
	cout<<"O minion te perseguiu e te atacou pelas costas!!!"<<endl;
	a.fala();
	a.atacar(j1);

	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin<< ataq;
		if(ataq == 1){
			if(j1.constituicao < 2){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(a, ataq);
			}
		}
		else{
			if(j1.constituicao <6){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(a, ataq);
			}
		}

		cout <<  "o minion revidou"<<endl;
		a.fala();
		a.ataque(j1);
	}
	if(a.vida<= 0){
		cout<<"O minion foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
	}
}
if(l==2){
cout<<"Voce atacou o minion, defina seu tipo de ataque"<<endl;
cout<<"1. Ataque leve"<< endl;
cout<<"2. Ataque pesado"<<endl;
int ataq;
cin<< ataq;
if(ataq == 1){
	if(j1.constituicao < 2){
		cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.ataque(a, ataq);
	}
}
else{
	if(j1.constituicao <6){
		cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.ataque(a, ataq);
	}
}
cout<< "O minion revidou"<< endl;
a.fala();
a.ataque(j1);
while(a.vida > 0 && j1.vida > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin<< ataq;
	if(ataq == 1){
		if(j1.constituicao < 2){
			cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.ataque(a, ataq);
		}
	}
	else{
		if(j1.constituicao <6){
			cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.ataque(a, ataq);
		}
	}
	cout <<  "o minion revidou"<<endl;
	a.fala();
	a.ataque(j1);
}
if(a.vida<= 0){
	cout<<"O minion foi derrotado, continue sua jornada!"<<endl;
}
else{
	cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
}
}
if(l==3){
	cout<<"O minion sentiu sua presença e te atacou!!"<<endl;
	a.fala();
	a.atacar(j1);

	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin<< ataq;
		if(ataq == 1){
			if(j1.constituicao < 2){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(a, ataq);
			}
		}
		else{
			if(j1.constituicao <6){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(a, ataq);
			}
		}
		cout <<  "o minion revidou"<<endl;
		a.fala();
		a.ataque(j1);
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
demo.CriaDemonio();
int decisão2 = 0;
cin >> decisao2;
if(decisão2==1){
cout<<"Ao subir as escadarias da estrutura, uma entidade obscura se manifesta e voce precisa atacar para defender sua pele"<<endl;
cout<<"Defina seu tipo de ataque"<<endl;
cout<<"1. Ataque leve"<< endl;
cout<<"2. Ataque pesado"<<endl;
int ataq;
cin<< ataq;
if(ataq == 1){
	if(j1.constituicao < 2){
		cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.ataque(dem, ataq);
	}
}
else{
	if(j1.constituicao <6){
		cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
	}
	else{
			j1.ataque(dem, ataq);
	}
}
cout<< "O demonio revidou"<< endl;
dem.fala();
dem.ataque(j1);
while(dem.vida > 0 && j1.vida > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque leve"<< endl;
	cout<<"2. Ataque pesado"<<endl;
	int ataq;
	cin<< ataq;
	if(ataq == 1){
		if(j1.constituicao < 2){
			cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.ataque(dem, ataq);
		}
	}
	else{
		if(j1.constituicao <6){
			cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
		}
		else{
				j1.ataque(dem, ataq);
		}
	}
	cout <<  "o demonio revidou"<<endl;
	dem.fala();
	dem.ataque(j1);
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
		cout<<"Defina seu tipo de ataque"<<endl;
		cout<<"1. Ataque leve"<< endl;
		cout<<"2. Ataque pesado"<<endl;
		int ataq;
		cin<< ataq;
		if(ataq == 1){
			if(j1.constituicao < 2){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(dem, ataq);
			}
		}
		else{
			if(j1.constituicao <6){
				cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
			}
			else{
					j1.ataque(dem, ataq);
			}
		}
		cout<< "O demonio revidou"<< endl;
		dem.fala();
		dem.ataque(j1);
		while(dem.vida > 0 && j1.vida > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin<< ataq;
			if(ataq == 1){
				if(j1.constituicao < 2){
					cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.ataque(dem, ataq);
				}
			}
			else{
				if(j1.constituicao <6){
					cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.ataque(dem, ataq);
				}
			}
			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.ataque(j1);
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
		dem.atacar(j1);

		while(dem.vida > 0 && j1.vida > 0){
			cout<<" Você precisa revidar!"<<endl;
			cout<<"1. Ataque leve"<< endl;
			cout<<"2. Ataque pesado"<<endl;
			int ataq;
			cin<< ataq;
			if(ataq == 1){
				if(j1.constituicao < 2){
					cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.ataque(dem, ataq);
				}
			}
			else{
				if(j1.constituicao <6){
					cout << "voce nao tem constituicao suficiente para atacar, voce perdeu a rodada"<< endl;
				}
				else{
						j1.ataque(dem, ataq);
				}
			}

			cout <<  "o demonio revidou"<<endl;
			dem.fala();
			dem.ataque(j1);
		}
		if(dem.vida<= 0){
			cout<<"O demonio foi derrotado, continue sua jornada!"<<endl;
		}
		else{
			cout<<"Demonios são fortes na escuridao... GAME OVER! :("<<endl;
		}
	}
	}
}
if(decisao2==3){
	cout<<"Voce não encontrou abrigo, o frio te abraçou e voce pereceu nos braços da morte"<<endl;
	cout<<"GAME over"<<endl;
}


cout<<"Terceira Parte da jornada"<<endl;













	return 0;
}
