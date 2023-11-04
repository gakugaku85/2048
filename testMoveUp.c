#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testMoveUp(){
	board x, y;
	virb z;

	testStart("moveUp");

	int c1[N]={ 2, 0, 0, 0,
			    2, 0, 0, 8,
			    2, 0, 4, 4,
			    0, 2, 2, 0 };

	int ans1[N]={ 4, 2, 4, 8,
			      2, 0, 2, 4,
			      0, 0, 0, 0,
			      0, 0, 0, 0 };

	setByNum(&x, c1);
	z.boards[Center] = x;
	setByNum(&y, ans1);
	moveUp(&z);
	assertEqualsInt(isEquals(&z.boards[Up], &y), 1);

	int c2[N]={ 16, 8, 4, 8,
			   	 8, 0, 4, 8,
			   	 8, 8, 4, 4,
			   	 2, 0, 2, 0};

	int ans2[N]={ 16, 16, 8, 16,
			   	  16,  0, 4,  4,
			   	   2,  0, 2,  0,
			   	   0,  0, 0,  0};

	setByNum(&x, c2);
	z.boards[Center] = x;
	setByNum(&y, ans2);
	moveUp(&z);
	assertEqualsInt(isEquals(&z.boards[Up], &y), 1);

	int c3[N]={ 2, 2, 0, 16,
			    2, 2, 0,  8,
			    4, 2, 8,  8,
			    0, 0, 8,  0 };

	int ans3[N]={ 4, 4, 16, 16,
			      4, 2,  0, 16,
			      0, 0,  0,  0,
			      0, 0,  0,  0 };

	setByNum(&x, c3);
	z.boards[Center] = x;
	setByNum(&y, ans3);
	moveUp(&z);
	assertEqualsInt(isEquals(&z.boards[Up], &y), 1);

	int c4[N]={ 32, 32, 4,  8,
			   	 8,  8, 0, 16,
			   	 0,  8, 4,  4,
			   	 8,  0, 2,  0 };

	int ans4[N]={ 32, 32, 8,  8,
			   	  16, 16, 2, 16,
			   	   0,  0, 0,  4,
			   	   0,  0, 0,  0 };

	setByNum(&x, c4);
	z.boards[Center] = x;
	setByNum(&y, ans4);
	moveUp(&z);
	assertEqualsInt(isEquals(&z.boards[Up], &y), 1);




}
