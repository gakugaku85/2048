#include <stdio.h>
#include "2048.h"
#include "test2048.h"
#include "testCommon.h"

int main() {
    printf("##### Test start #####\n");
    // ここから下は 43ww WWWW が記述

    // ここから下は 4327 對馬勇太 が記述
    testSetByNum();
    testMakeBoard();
    testMoveRight();
    testDisplayBoard();
    // ここから下は 4332 林ハル が記述
    testisEquals();
    testMoveLeft();
    testInMove();
    // ここから下は 4336 丸山悠大 が記述
    testAppearNum();
    testInitBoard();
    testCheckFinish();
    testMoveLine();
    testMoveNum();
    testMoveUp();
    testMoveDown();
    // 最終エラー統計処理
    testErrorCheck(); // この行は絶対に消さないこと
    printf("##### Test finish #####\n");
    return 0;
}
