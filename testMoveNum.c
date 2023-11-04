#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testMoveNum(){
	board x, y;

	int c1[N]={ 2, 0, 0, 0,
			    2, 0, 0, 8,
			    2, 0, 4, 4,
			    0, 2, 2, 0 };

	int ansU1[N]={ 2, 2, 4, 8,
			       2, 0, 2, 4,
			       2, 0, 0, 0,
			       0, 0, 0, 0 };

	int ansD1[N]={ 0, 0, 0, 0,
			       2, 0, 0, 0,
			       2, 0, 4, 8,
			       2, 2, 2, 4 };

	int ansL1[N]={ 2, 0, 0, 0,
			       2, 8, 0, 0,
			       2, 4, 4, 0,
			       2, 2, 0, 0 };

	int ansR1[N]={ 0, 0, 0, 2,
			       0, 0, 2, 8,
			       0, 2, 4, 4,
			       0, 0, 2, 2};

	testStart("moveNum");

	setByNum(&x, c1);
	setByNum(&y, ansU1);
	moveNum(&x, 0, 1, 4);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c1);
	setByNum(&y, ansD1);
	moveNum(&x, 15, -1, -4);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c1);
	setByNum(&y, ansL1);
	moveNum(&x, 0, 4, 1);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c1);
	setByNum(&y, ansR1);
	moveNum(&x, 15, -4, -1);
	assertEqualsInt(isEquals(&x, &y), 1);

	int c2[N]={ 16, 8, 4, 8,
			   	 8, 0, 4, 8,
			   	 8, 8, 4, 4,
			   	 2, 0, 2, 0};

	int ansU2[N]={ 16,  8, 4,  8,
			   	    8,  8, 4,  8,
			   	    8,  0, 4,  4,
			   	    2,  0, 2,  0};

	int ansD2[N]={ 16,  0, 4,  0,
			   	    8,  0, 4,  8,
			   	    8,  8, 4,  8,
			   	    2,  8, 2,  4};

	int ansL2[N]={ 16, 8, 4, 8,
			   	    8, 4, 8, 0,
			   	    8, 8, 4, 4,
			   	    2, 2, 0, 0};

	int ansR2[N]={ 16,  8, 4, 8,
			   	    0,  8, 4, 8,
			   	    8,  8, 4, 4,
			   	    0,  0, 2, 2};

	setByNum(&x, c2);
	setByNum(&y, ansU2);
	moveNum(&x, 0, 1, 4);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c2);
	setByNum(&y, ansD2);
	moveNum(&x, 15, -1, -4);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c2);
	setByNum(&y, ansL2);
	moveNum(&x, 0, 4, 1);
	assertEqualsInt(isEquals(&x, &y), 1);

	setByNum(&x, c2);
	setByNum(&y, ansR2);
	moveNum(&x, 15, -4, -1);
	assertEqualsInt(isEquals(&x, &y), 1);


}
