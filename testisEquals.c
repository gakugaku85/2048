#include <stdio.h>
#include <math.h>
#include "testCommon.h"
#include "2048.h"

int testisEquals(){
    board a, b, c;

    a.place[0] = 1;
    a.place[1] = 0;
    a.place[2] = 0;
    a.place[3] = 0;
    a.place[4] = 0;
    a.place[5] = 1;
    a.place[6] = 0;
    a.place[7] = 0;
    a.place[8] = 0;
    a.place[9] = 0;
    a.place[10] = 1;
    a.place[11] = 0;
    a.place[12] = 0;
    a.place[13] = 0;
    a.place[14] = 0;
    a.place[15] = 1;
    b.place[0] = 1;
    b.place[1] = 0;
    b.place[2] = 0;
    b.place[3] = 0;
    b.place[4] = 0;
    b.place[5] = 1;
    b.place[6] = 0;
    b.place[7] = 0;
    b.place[8] = 0;
    b.place[9] = 0;
    b.place[10] = 1;
    b.place[11] = 0;
    b.place[12] = 0;
    b.place[13] = 0;
    b.place[14] = 0;
    b.place[15] = 1;
    c.place[0] = 1;
    c.place[1] = 0;
    c.place[2] = 0;
    c.place[3] = 0;
    c.place[4] = 0;
    c.place[5] = 1;
    c.place[6] = 0;
    c.place[7] = 0;
    c.place[8] = 0;
    c.place[9] = 0;
    c.place[10] = 1;
    c.place[11] = 0;
    c.place[12] = 0;
    c.place[13] = 0;
    c.place[14] = 0;
    c.place[15] = 9;

    testStart("isEquals");
    assertEqualsInt(isEquals(&a, &b), 1);
    assertEqualsInt(isEquals(&a, &c), 0);

    return 0;
}