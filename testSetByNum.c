#include "test2048.h"
#include "testCommon.h"
#include <stdio.h>
void testSetByNum(){


	board myboard;
	int a[16] = {
		2,4,0,2,
		2,2,0,2,
		2,0,0,2,
		4,2,4,2
	};

testStart("setByNum");
setByNum(&myboard, a);

	assertEqualsInt(myboard.place[0], 2);
	assertEqualsInt(myboard.place[1], 4);
	assertEqualsInt(myboard.place[2], 0);
	assertEqualsInt(myboard.place[14], 4);
	assertEqualsInt(myboard.place[10], 0);


	int b[16] = {
		8,4,8,8,
		2,4,8,0,
		2,4,2,0,
		2,4,8,4
	};
	
	setByNum(&myboard, b);
	assertEqualsInt(myboard.place[4] ,2);
	assertEqualsInt(myboard.place[5] ,4);
	assertEqualsInt(myboard.place[6] ,8);
	assertEqualsInt(myboard.place[7] ,0);
	assertEqualsInt(myboard.place[12] ,2);


	
	int c[16] = {
	2,8,16,4,
	2,2,4,4,
	32,64,2,2,
	128,8,2,4
	};

	setByNum(&myboard, c);
	assertEqualsInt(myboard.place[3] ,4);
	assertEqualsInt(myboard.place[8] ,32);
	assertEqualsInt(myboard.place[9] ,64);
	assertEqualsInt(myboard.place[11] ,2);
	assertEqualsInt(myboard.place[15] , 4);
	
	}

