#include <stdio.h>
#include "2048.h"

int main(){

		initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);

    makeBoard();
    initBoard();

 while(1){

 	displayBoard();

    moveAll();

    checkFinish();

    if(checkFinish == 1){
    	printf("GAME OVER\n");
    	break;
    }

    do{
    moveAll();

    isEquals();
		}while(isEquals == 0);

	inMove();
	
	apperNumber();	



	}
}