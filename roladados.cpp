#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include "roladados.h"

static int rolaDados()
{
	srand(time(NULL));
	int d1, d2, d3;
	d1 = rand()%5;
	d2 = rand()%5;
	d3 = rand()%5;
	return d1+d2+d3;
}
