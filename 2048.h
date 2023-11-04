// header file for 2048
#ifndef __2048
#define __2048
#define N 16
#define C 4

// **** 構造体の定義 4336 丸山悠大 が記述
typedef struct{
	int place[N];
}board;

typedef struct{
	board boards[5];
}virb;

enum direction{
	Center,
	Up,
	Down,
	Left,
	Right
};

// **** プロトタイプ宣言集
// ここから下は 4323 関口樂 が記述

// ここから下は 4327 對馬勇太 が記述
void setByNum(board *bp, int *sp);
void makeBoard(virb *vbp);
void moveRight(virb *vbp);
void displayBoard(virb *vbp);
// ここから下は 4332 林ハル が記述
int isEquals(board *ap, board *bp);
void moveLeft(virb *vbp);
void inMove(virb *vbp, int direction);
void moveAll(virb *vbp);
void print2048();
// ここから下は 4336 丸山悠大 が記述
void appearNum(virb *vbp);
void initBoard(virb *vbp);
int checkFinish(virb *vbp);
void moveLine(board *bp, int start, int interval, int offset);
void moveNum(board *bp, int start, int interval, int offset);
void moveUp(virb *vbp);
void moveDown(virb *vbp);

#endif // __2048