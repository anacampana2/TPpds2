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
minion a;
a.CriaMinion();
cout<<"Voce avistou um minion,o que voce vai fazer?"<<endl;
cout<<"1. Fugir,afinal, minion é feios"<<endl;
cout<<"2. Atacar"<<endl;
cout<<"3.Observar de forma furtiva"<<endl;
int l =0;
cin>> l;
if(l==1){
	cout<<"O minion te perseguiu e te atacou pelas costas!!!"<<endl;
	a.atacar(j1);

	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque a distancia"<< endl;
		cout<<"2. Ataque corpo a corpo"<<endl;
		int ataq;
		cin<< ataq;
		j1.ataque(ataq,a);
		cout <<  "o minion revidou"<<endl;
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
cout<<"1. Ataque a distancia"<< endl;
cout<<"2. Ataque corpo a corpo"<<endl;
int ataq;
cin<< ataq;
j1.ataque(ataq,a);
cout<< "O minion revidou"<< endl;
a.ataque(j1);
while(a.vida > 0 && j1.vida > 0){
	cout<<" Você precisa revidar!"<<endl;
	cout<<"1. Ataque a distancia"<< endl;
	cout<<"2. Ataque corpo a corpo"<<endl;
	int ataq;
	cin<< ataq;
	j1.ataque(ataq,a);
	cout <<  "o minion revidou"<<endl;
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
	a.atacar(j1);

	while(a.vida > 0 && j1.vida > 0){
		cout<<" Você precisa revidar!"<<endl;
		cout<<"1. Ataque a distancia"<< endl;
		cout<<"2. Ataque corpo a corpo"<<endl;
		int ataq;
		cin<< ataq;
		j1.ataque(ataq,a);
		cout <<  "o minion revidou"<<endl;
		a.ataque(j1);
	}
	if(a.vida<= 0){
		cout<<"O minion foi derrotado, continue sua jornada!"<<endl;
	}
	else{
		cout<<"Pensei que nao tinha como perder para o minion,Game over! :("<<endl;
	}
}

cout<<"Segunda Parte da Jornada"<<endl;









	return 0;
}
