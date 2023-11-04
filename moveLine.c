#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void moveLine(board *bp, int start, int interval, int offset){
    int a,b = 0;
    int i,j,k = 0;

for(i = 0; i < C; i++){
  a = start + (interval * i);
    for(j = 0; j < C-1; j++){
      b = a + offset;
        for(k = j + 1; k < C; k++){
          if(bp -> place[a] == bp -> place[b]){
              bp -> place[a] *= 2;
              bp -> place[b] = 0;
              break;
        }
          if(bp -> place[b] != 0){
              break;
          }
            b += offset;
            }
        a += offset;
       }
    }
}