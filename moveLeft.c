#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

void moveLeft(virb *vbp){
	board b;
	b = vbp -> boards[Center];

	moveLine(&b, 0, 4, 1);

	moveNum(&b, 0, 4, 1);

	vbp -> boards[Left] = b;
}