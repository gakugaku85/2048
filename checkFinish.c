#include "2048.h"

int checkFinish(virb *vbp){

	board *bp;
	bp = vbp -> boards;
	int flag = 0;

	for(int i=0; i<N; i++){
		if(bp->place[i] == 2048){
			flag = 1;
		}
	}

	if(isEquals(bp, bp + 1) == 1 &&
	   isEquals(bp, bp + 2) == 1 &&
	   isEquals(bp, bp + 3) == 1 &&
	   isEquals(bp, bp + 4) == 1 
	   ){
		   return 1;
	}else if(flag == 1){
		return 2;
	}
	   return 0;
}