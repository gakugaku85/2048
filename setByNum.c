#include "2048.h"

void setByNum(board *ap, int *sp){
    int i;
    
    for(i = 0; i < N; i++){
        ap -> place[i] = sp[i];
    }
}