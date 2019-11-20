#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "roladados.h"

int rolaDados(){
	int dad1,dad2,dad3;
	dad1=1+ rand()%5;
	dad2=1+ rand()%5;
	dad3=1+ rand()%5;
	//printf("aleatorio %d\n",dad1+dad2+dad3);
	return dad1+dad2+dad3;
}
