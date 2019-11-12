#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "personagem.h"

using namespace std;


 Personagem::Personagem(int id) {
	this->id = id;
	this->forca = 0;
	this->constituicao = 0;
	this->destreza = 0;
	this->agilidade = 0;
	this->carisma = 0;
	this->vida = 0;
	this->stamina = 0;
	int escolha=0;
	char nav = 'z';
	system("cls");
	cout << " ___      __         __       __    __       __         __    __" << endl;
	cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
	cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
	cout << "Criar Personagem Automaticamente" << endl << "Criar Personagem Manualmente" << endl;
	do {
		nav = _getch();
		if (nav == 'w') {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "* Criar Personagem Automaticamente" << endl << "Criar Personagem Manualmente" << endl;
			escolha = 1;
		}
		if (nav == 's') {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Criar Personagem Automaticamente " << endl << "* Criar Personagem Manualmente" << endl;
			escolha = 2;
		}
	} while (nav != 'e');

	if (escolha == 1) {
		CriaAleatorio();
	}
	if (escolha == 2) {
		CriaManual();
	}

}

void Personagem::CriaAleatorio() {

	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		float j = rand() % 7;
		if (j >= 0 && j < 1 && this->forca < 10)
			this->forca++;
		else if (j >= 1 && j < 2 && this->constituicao < 10)
			this->constituicao++;
		else if (j >= 2 && j < 3 && this->destreza < 10)
			this->destreza++;
		else if (j >= 3 && j < 4 && this->agilidade < 10)
			this->agilidade++;
		else if (j >= 4 && j < 5 && this->carisma < 10)
			this->carisma++;
		else if (j >= 5 && j < 6 && this->vida < 10)
			this->vida++;
		else if (j >= 6 && j < 7 && this->stamina < 10)
			this->stamina++;
		else
			i--;

	}

	Ficha();
}

void Personagem::CriaManual() {
	system("cls");
	cout << " ___      __         __       __    __       __         __    __" << endl;
	cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
	cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
	cout << "Voce tem 50 pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
	cout << "Forca:         " << endl;
	cout << "Constituicao:  " << endl;
	cout << "Destreza:      " << endl;
	cout << "Agilidade:     " << endl;
	cout << "Carisma:       " << endl;
	cout << "Vida:          " << endl;
	cout << "Stamina:       " << endl;

	char i = 254;	
	char nav = 'z';
	int navaux = 0;
	int pontos = 0;
	do {
		
		if (navaux == 0) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "*  Forca:        |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 1) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "*  Constituicao: |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 2) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "*  Destreza:     |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 3) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "*  Agilidade:    |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 4) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "*  Carisma:      |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 5) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "*  Vida:         |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "Stamina:         |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		if (navaux == 6) {
			system("cls");
			cout << " ___      __         __       __    __       __         __    __" << endl;
			cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
			cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
			cout << "Voce tem " << (50 - pontos) << " pontos para distribuir entre todos os atributos abaixo, escolha sabiamente:" << endl;
			cout << "Forca:           |";
			for (int j = 0; j < this->forca; j++)
				cout << i << " ";
			cout << endl << "Constituicao:    |";
			for (int j = 0; j < this->constituicao; j++)
				cout << i << " ";
			cout << endl << "Destreza:        |";
			for (int j = 0; j < this->destreza; j++)
				cout << i << " ";
			cout << endl << "Agilidade:       |";
			for (int j = 0; j < this->agilidade; j++)
				cout << i << " ";
			cout << endl << "Carisma:         |";
			for (int j = 0; j < this->carisma; j++)
				cout << i << " ";
			cout << endl << "Vida:            |";
			for (int j = 0; j < this->vida; j++)
				cout << i << " ";
			cout << endl << "*  Stamina:      |";
			for (int j = 0; j < this->stamina; j++)
				cout << i << " ";
			cout << endl;
		}
		nav = 'z';
		nav = _getch();
		if (nav == 'w') {
			if (navaux != 0)
				navaux--;
		}
		if (nav == 's') {
			if (navaux != 6)
				navaux++;
		}
		if (nav == 'd') {
			if (navaux == 0 && forca < 10 && pontos < 50) {
				this->forca++;
				pontos++;
			}
			if (navaux == 1 && constituicao < 10 && pontos < 50) {
				this->constituicao++;
				pontos++;
			}
			if (navaux == 2 && destreza < 10 && pontos < 50) {
				this->destreza++;
				pontos++;
			}
			if (navaux == 3 && agilidade < 10 && pontos < 50) {
				this->agilidade++;
				pontos++;
			}
			if (navaux == 4 && carisma < 10 && pontos < 50) {
				this->carisma++;
				pontos++;
			}
			if (navaux == 5 && vida < 10 && pontos < 50) {
				this->vida++;
				pontos++;
			}
			if (navaux == 6 && stamina < 10 && pontos < 50) {
				this->stamina++;
				pontos++;
			}
		}
		if (nav == 'a') {
			if (navaux == 0 && forca > 0 && pontos > 0){
				this->forca--;
				pontos--;
			}
			if (navaux == 1 && constituicao > 0 && pontos > 0){
				this->constituicao--;
				pontos--;
			}
			if (navaux == 2 && destreza > 0 && pontos > 0){
				this->destreza--;
				pontos--;
			}
			if (navaux == 3 && agilidade > 0 && pontos > 0){
				this->agilidade--;
				pontos--;
			}
			if (navaux == 4 && carisma > 0 && pontos > 0){
				this->carisma--;
				pontos--;
			}
			if (navaux == 5 && vida > 0 && pontos > 0){
				this->vida--;
				pontos--;
			}
			if (navaux == 6 && stamina > 0 && pontos > 0){
				this->stamina--;
				pontos--;
			}
		}
	} while (nav != 'e');

	Ficha();
}

void Personagem::Ficha() {
	system("cls");
	cout << " ___      __         __       __    __       __         __    __" << endl;
	cout << "|_    |  |    |__|  |__|     |  \\  |  |     |    |__|  |__|  |__| " << endl;
	cout << "|     |  |__  |  |  |  |     |__/  |__|     |__  |  |  |  |  | \\ " << endl << endl << endl;
	cout << "Id:            " << this->id << endl << endl;
	cout << "Forca:         " << this->forca << endl;
	cout << "Constituicao:  " << this->constituicao << endl;
	cout << "Destreza:      " << this->destreza << endl;
	cout << "Agilidade:     " << this->agilidade << endl;
	cout << "Carisma:       " << this->carisma << endl;
	cout << "Vida:          " << this->vida << endl;
	cout << "Stamina:       " << this->stamina << endl;
}