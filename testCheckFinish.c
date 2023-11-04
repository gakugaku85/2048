#include <stdio.h>
#include "test2048.h"
#include "2048.h"
#include "testCommon.h"

void testCheckFinish(){
	int ca[N]={ 2, 4, 6, 8,
			    1, 3, 5, 7,
			    4, 6, 8, 10,
			    3, 5, 7, 9  };

	int ua[N]={ 2, 4, 6, 8,
			    1, 3, 5, 7,
			    4, 6, 8, 10,
			    3, 5, 7, 9  };

	int da[N]={ 2, 4, 6, 8,
			    1, 3, 5, 7,
			    4, 6, 8, 10,
			    3, 5, 7, 9  };

	int la[N]={ 2, 4, 6, 8,
			    1, 3, 5, 7,
			    4, 6, 8, 10,
			    3, 5, 7, 9  };

	int ra[N]={ 2, 4, 6, 8,
			    1, 3, 5, 7,
			    4, 6, 8, 10,
			    3, 5, 7, 9  };

	int xa[N]={ 1, 3, 5, 7, 
			    2, 4, 6, 8,
			    3, 5, 7, 9,
			    4, 6, 8, 10 };

	virb myboard;
	board c;
	board u;
	board d;
	board l;
	board r;

	setByNum(&c, ca);
	setByNum(&u, ua);
	setByNum(&d, da);
	setByNum(&l, la);
	setByNum(&r, ra);

	myboard.boards[Center] = c;
	myboard.boards[Up] = u;
	myboard.boards[Down] = d;
	myboard.boards[Left] = l;
	myboard.boards[Right] = r;

	testStart("checkFinish");
	assertEqualsInt(checkFinish(&myboard), 1);

	setByNum(&c, xa);
	myboard.boards[Center] = c;
	assertEqualsInt(checkFinish(&myboard), 0);

	setByNum(&c, ca);
	myboard.boards[Center] = c;
	setByNum(&u, xa);
	myboard.boards[Up] = u;
	setByNum(&d, xa);
	myboard.boards[Down] = d;

	assertEqualsInt(checkFinish(&myboard), 0);

	setByNum(&c, xa);
	myboard.boards[Center] = c;
	setByNum(&l, xa);
	myboard.boards[Left] = l;
	setByNum(&r, xa);
	myboard.boards[Right] = r;
	assertEqualsInt(checkFinish(&myboard), 1);


}
