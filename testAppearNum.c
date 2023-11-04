#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testAppearNum(){
	int count = 0;
	virb myboard;
	board b;

	initBoard(&myboard);
	appearNum(&myboard);
	b = myboard.boards[Center];

	testStart("appearNum");
	for (int i = 0; i < N ; i++){
		if (b.place[i]!=0){
			count++;
		}
	}

	assertEqualsInt(count, 1);

	appearNum(&myboard);
	b = myboard.boards[Center];

	count = 0;
	for (int i = 0; i < N ; i++){
		if (b.place[i]!=0){
			count++;
		}
	}
	assertEqualsInt(count, 2);

	appearNum(&myboard);
	b = myboard.boards[Center];

	count = 0;
	for (int i = 0; i < N ; i++){
		if (b.place[i]!=0){
			count++;
		}
	}
	assertEqualsInt(count, 3);
}
