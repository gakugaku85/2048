#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 

void moveRight(virb *vbp){
   board b;
   b = vbp -> boards[Center];
   moveLine(&b, 15, -4, -1);
   moveNum(&b, 15, -4, -1);
   vbp->boards[Right] = b;
} 
