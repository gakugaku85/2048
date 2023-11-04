#include "2048.h"

void initBoard(virb *vbp){
    int i,j;
    
	for(i = 0; i < 5; i++){
        for(j = 0; j < N; j++){
            vbp -> boards[i].place[j] = 0;
        }
    }
}
