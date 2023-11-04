#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void moveUp(virb *vbp){
	board b;
	b = vbp -> boards[Center];

	moveLine(&b, 0, 1, 4);

	moveNum(&b, 0, 1, 4);

	vbp -> boards[Up] = b;
}