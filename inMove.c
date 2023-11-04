#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
 void inMove(virb *vbp, int direction){
 	board b;

 	switch(direction){
 		case Right:
 			b = vbp -> boards[Right];
 			break;

 		case Left:
 			b = vbp -> boards[Left];
 			break;

 		case Up:
 			b = vbp -> boards[Up];
 			break;

 		case Down:
 			b = vbp -> boards[Down];
 		
 		}
 	 vbp-> boards[Center] = b;
 	}



