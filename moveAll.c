#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void moveAll(virb *vbp){
    moveUp(vbp);
    moveDown(vbp);
    moveRight(vbp);
    moveLeft(vbp);
}