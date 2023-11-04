#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testMoveLeft(){
    virb xv;
	board x, y;

	int c1[N]={2, 0, 0, 0,
			   2, 0, 0, 8,
			   2, 0, 4, 4,
	           0, 2, 2, 0 };

	int ans1[N]={2, 0, 0, 0,
			     2, 8, 0, 0,
			     2, 8, 0, 0,
			     4, 0, 0, 0 };

    int c2[N]={2, 0, 0, 0,
			   2, 0, 2, 0,
			   4, 0, 4, 4,
	           0, 2, 2, 0 };

	int ans2[N]={2, 0, 0, 0,
			     4, 0, 0, 0,
			     8, 4, 0, 0,
			     4, 0, 0, 0 };

    
    int c3[N]={2, 0, 0, 0,
			   2, 0, 2, 0,
			   4, 0, 4, 4,
	           0, 2, 2, 0 };

	int ans3[N]={2, 0, 0, 0,
			     4, 0, 0, 0,
			     8, 4, 0, 0,
			     4, 0, 0, 0 };

    
    int c4[N]={4, 0, 0, 0,
			   2, 0, 4, 0,
			   0, 16,0, 16,
	           0, 2, 2, 0 };

	int ans4[N]={4, 0, 0, 0,
			     2, 4, 0, 0,
			     32,0, 0, 0,
			     4, 0, 0, 0 };


    testStart("moveLeft");
  
    setByNum(&x, c1);
	setByNum(&y, ans1);
    xv.boards[Center] = x;
    moveLeft(&xv);
    assertEqualsInt(isEquals(&xv.boards[Left],&y), 1);

    setByNum(&x, c2);
	setByNum(&y, ans2);
    xv.boards[Center] = x;
    moveLeft(&xv);
    assertEqualsInt(isEquals(&xv.boards[Left],&y), 1);

    setByNum(&x, c3);
	setByNum(&y, ans3);
    xv.boards[Center] = x;
    moveLeft(&xv);
    assertEqualsInt(isEquals(&xv.boards[Left],&y), 1);

    setByNum(&x, c4);
	setByNum(&y, ans4);
    xv.boards[Center] = x;
    moveLeft(&xv);
    assertEqualsInt(isEquals(&xv.boards[Left],&y), 1);


}
