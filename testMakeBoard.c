#include "test2048.h"
#include "testCommon.h"
#include "2048.h"
#include <stdio.h>

void testMakeBoard(){
virb myboard;
	board c;
	board u;
	board d;
	board l;
	board r;

	makeBoard(&myboard);

int count1 = 0;
int count2 = 0;
int count3 = 0;
int count4 = 0;
int count5 = 0;


c = myboard.boards[Center];
u = myboard.boards[Up];
d = myboard.boards[Down];
l = myboard.boards[Left];
r = myboard.boards[Right];

testStart("makeBoard");
	for(int i = 0; i < N ; i++){
		if(c.place[i] != 0){
			count1++;
		}
	}

	for(int i = 0; i < N ; i++){
		if(u.place[i] != 0){
			count2++;
	}

}

	for(int i = 0; i < N ; i++){
		if(d.place[i] != 0){
			count3++;
	}

}

	for(int i = 0; i < N ; i++){
		if(l.place[i] != 0){
			count4++;
	}

}


	for(int i = 0; i < N ; i++){
		if(r.place[i] != 0){
			count5++;
	}

}

assertEqualsInt(count1, 2);
assertEqualsInt(count2, 0);
assertEqualsInt(count3, 0);
assertEqualsInt(count4, 0);
assertEqualsInt(count5, 0);




}
