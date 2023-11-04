#ifdef __CYGWIN__
#include <curses.h>
#elif _WIN64
#include "curses.h"
#elif _WIN32
#include "curses.h"
#else
#include <curses.h>
#endif

#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testDisplayBoard(){

	testStart("displayBoard");

	initscr();
    noecho();
    cbreak();
    keypad(stdscr, TRUE);

	board x[3];
	virb z;

	int c1[N] = {16, 8, 4, 8,
			   8, 0, 4, 8,
			   8, 8, 4, 4,
			   2, 0, 2, 0};

	int c2[N] = {32, 64, 128, 256,
			   	0, 2, 512, 1024,
			   	64, 32, 16, 0,
			   	1024, 1024, 512, 0};

	int c3[N] = {0, 2, 1024, 512,
			   	 0, 4, 8, 512,
			   	 256, 256, 0, 0,
			   	 8, 4, 2, 0};

	setByNum(&x[0], c1);
	setByNum(&x[1], c2);
	setByNum(&x[2], c3);

	for (int i = 0; i < 3; i++){
		z.boards[Center] = x[i];
		displayBoard(&z);
		int ch = getch();
		if(ch == 'q'){
			break;
		}
	}

	echo();
    nocbreak();
    endwin();

}