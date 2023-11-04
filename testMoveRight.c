#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testMoveRight(){
	virb av;
	board x,y;

	int	a[N]= { 2, 2, 2, 2,
			    0, 4, 0, 2,
			    0, 0, 0, 0,
		        2, 2, 0, 0 };

	int ans[N]={ 0, 0, 4, 4,
				0, 0, 4, 2,
				0, 0, 0, 0,
				0, 0, 0, 4 };

	testStart("moveRight");

	setByNum(&x, a);
	setByNum(&y, ans);
	av.boards[Center] = x;
	moveRight(&av);
	assertEqualsInt(isEquals(&av.boards[Right] ,&y), 1);


	int	b[N]= { 64, 64, 2, 2,
			    0, 4, 8, 2,
			    0, 32, 128, 0,
		        2, 2, 4, 0 };

	int ans2[N]={ 0, 0, 128, 4,
				0, 4, 8, 2,
				0, 0, 32, 128,
				0, 0, 4, 4 };

	setByNum(&x, b);
	setByNum(&y, ans2);
	av.boards[Center] = x;
	moveRight(&av);
	assertEqualsInt(isEquals(&av.boards[Right] ,&y), 1);


	int	c[N]= { 2, 4, 2, 2,
			    0, 4, 0, 2,
			    0, 16, 0, 16,
		        2, 2, 2, 2 };

	int ans3[N]={ 0, 2, 4, 4,
				0, 0, 4, 2,
				0, 0, 0, 32,
				0, 0, 4, 4 };

	setByNum(&x, c);
	setByNum(&y, ans3);
	av.boards[Center] = x;
	moveRight(&av);
	assertEqualsInt(isEquals(&av.boards[Right] ,&y), 1);


	int	d[N]= { 2, 2, 16, 16,
			    0, 4, 0, 2,
			    0, 4, 8, 0,
		        2, 2, 4, 0 };

	int ans4[N]={ 0, 0, 4, 32,
				0, 0, 4, 2,
				0, 0, 4, 8,
				0, 0, 4, 4 };
	
	setByNum(&x, d);
	setByNum(&y, ans4);
	av.boards[Center] = x;
	moveRight(&av);
	assertEqualsInt(isEquals(&av.boards[Right] ,&y), 1);
}
