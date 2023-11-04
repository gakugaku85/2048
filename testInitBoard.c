#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testInitBoard(){
	int count = 0;
	virb myboard;
	board c;
	board u;
	board d;
	board l;
	board r;

	initBoard(&myboard);

	c = myboard.boards[Center];
	u = myboard.boards[Up];
	d = myboard.boards[Down];
	l = myboard.boards[Left];
	r = myboard.boards[Right];

	testStart("initBoard");
	for (int i = 0; i < N ; i++){
		if (c.place[i]!=0){
			count++;
		}
	}
	for (int i = 0; i < N ; i++){
		if (u.place[i]!=0){
			count++;
		}
	}
	for (int i = 0; i < N ; i++){
		if (d.place[i]!=0){
			count++;
		}
	}
	for (int i = 0; i < N ; i++){
		if (l.place[i]!=0){
			count++;
		}
	}
	for (int i = 0; i < N ; i++){
		if (r.place[i]!=0){
			count++;
		}
	}

	assertEqualsInt(count, 0);
}
