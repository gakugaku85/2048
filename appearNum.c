#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void appearNum(virb *vbp){

    board *bp = vbp -> boards;
    int a = 0;
    int b = 0;
    int num = 0;

    while(1){
    	a = rand() % 16;
    	b = rand() % 10;
    	if(b <= 2){
    		num = 4;
    	}else{
    		num = 2;
    	}
    	if (bp -> place[a] == 0){
    		bp -> place[a] = num;
    		break;
    	}
    }
}