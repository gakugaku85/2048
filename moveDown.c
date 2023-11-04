#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void moveDown(virb *vbp){
	board b;
	b = vbp -> boards[Center];

	moveLine(&b, 15, -1, -4);

	moveNum(&b, 15, -1, -4);

	vbp -> boards[Down] = b;
}