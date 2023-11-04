#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testInMove(){
    virb xv;
	board x, y;

   int c[N]={2, 0, 0, 0,
			 2, 0, 0, 8,
		     2, 0, 4, 4,
        	 0, 2, 2, 0 };

   int u[N]={4, 2, 4, 8,
			 2, 0, 2, 4,
			 0, 0, 0, 0,
		     0, 0, 0, 0 };

   int d[N]={0, 0, 0, 0,
			 0, 0, 0, 0,
			 2, 0, 4, 8,
		     4, 2, 2, 4 };

   int r[N]={0, 0, 0, 2,
		     0, 0, 2, 8,
		     0, 0, 2, 8,
		     0, 0, 0, 4 };

   int l[N]={2, 0, 0, 0,
			 2, 8, 0, 0,
			 2, 8, 0, 0,
		     4, 0, 0, 0 };

   int c2[N]={0, 4, 0, 0,
			  2, 0, 0, 2,
		      2, 0, 2, 16,
        	  0, 4, 4, 0 };

   int u2[N]={4, 8, 2, 2,
			  0, 0, 4, 16,
			  0, 0, 0, 0,
		      0, 0, 0, 0 };

   int d2[N]={0, 0, 0, 0,
			  0, 0, 0, 0,
			  0, 0, 2, 2,
		      4, 8, 4, 16 };

   int r2[N]={0, 0, 0, 4,
		      0, 0, 0, 4,
		      0, 0, 4, 16,
		      0, 0, 0, 8 };

   int l2[N]={4, 0, 0, 0,
			  4, 0, 0, 0,
			  4, 16, 0, 0,
		      8, 0, 0, 0 };
		 

     testStart("inMove");
    
    
    setByNum(&x, c);
	setByNum(&y, u);
    xv.boards[Center] = x;
    xv.boards[Up] = y;
    inMove(&xv,Up);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c);
	setByNum(&y, d);
    xv.boards[Center] = x;
    xv.boards[Down] = y;
    inMove(&xv,Down);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c);
	setByNum(&y, r);
    xv.boards[Center] = x;
    xv.boards[Right] = y;
    inMove(&xv,Right);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c);
	setByNum(&y, l);
    xv.boards[Center] = x;
    xv.boards[Left] = y;
    inMove(&xv,Left);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c2);
	setByNum(&y, u2);
    xv.boards[Center] = x;
    xv.boards[Up] = y;
    inMove(&xv,Up);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c2);
	setByNum(&y, d2);
    xv.boards[Center] = x;
    xv.boards[Down] = y;
    inMove(&xv,Down);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c2);
	setByNum(&y, r2);
    xv.boards[Center] = x;
    xv.boards[Right] = y;
    inMove(&xv,Right);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);

	setByNum(&x, c2);
	setByNum(&y, l2);
    xv.boards[Center] = x;
    xv.boards[Left] = y;
    inMove(&xv,Left);
	assertEqualsInt(isEquals(&xv.boards[Center], &y), 1);


}
