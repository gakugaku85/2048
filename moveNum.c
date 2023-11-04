#include "2048.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void moveNum(board *bp, int start, int interval,int offset){
	int a,b;

	for(int i=0; i<C; i++){

		a = start + (interval*i);

		for(int j=0; j<C; j++){

			b = a + (offset*j);

			if(bp -> place[b] != 0){

				while(a != b && bp -> place[b-offset] == 0){

					bp -> place[b-offset] = bp -> place[b];

					bp -> place[b] = 0;

					b -= offset;
				}

			}
		}
	}
}