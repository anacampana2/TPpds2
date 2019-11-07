#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <personagem.h>
#include <personagem.cpp>

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

	return 0;
}