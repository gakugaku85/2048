#include "2048.h"
#ifdef __CYGWIN__
#include "curses.h"
#elif _WIN64
#include "curses.h"
#elif _WIN32
#include "curses.h"
#else
#include <ncurses.h>
#endif
#include <locale.h>

void displayBoard(virb *vbp){
    initscr();
    setlocale(LC_ALL, "");
    start_color();
    init_pair(1, COLOR_BLUE, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);
    init_pair(3, COLOR_GREEN, COLOR_BLACK);
    init_pair(4, COLOR_YELLOW, COLOR_BLACK);
    init_pair(5, COLOR_WHITE, COLOR_BLACK);
    init_pair(6, COLOR_WHITE, COLOR_BLACK);
    init_pair(7, COLOR_MAGENTA, COLOR_BLACK); 

    board *bp;
    bp = vbp -> boards;
    int x, y, w, h, b, c;
    getmaxyx(stdscr, h, w);
    y = w/3 + 4;
    x = h/3 - 1;
    int a[C][C];
    int k = 0;
    clear();
    
    mvprintw(x-3,y, "****************************************");
    mvprintw(x-2,y, "*         *         *         *        *");
    mvprintw(x-1,y, "*         *         *         *        *");
    mvprintw(x  ,y, "*         *         *         *        *");
    mvprintw(x+1,y, "****************************************");
    mvprintw(x+2,y, "*         *         *         *        *");
    mvprintw(x+3,y, "*         *         *         *        *");
    mvprintw(x+4,y, "*         *         *         *        *");
    mvprintw(x+5,y, "****************************************");
    mvprintw(x+6,y, "*         *         *         *        *");
    mvprintw(x+7,y, "*         *         *         *        *");
    mvprintw(x+8,y, "*         *         *         *        *");
    mvprintw(x+9,y, "****************************************");
    mvprintw(x+10,y,"*         *         *         *        *");
    mvprintw(x+11,y,"*         *         *         *        *");
    mvprintw(x+12,y,"*         *         *         *        *");
    mvprintw(x+13,y,"****************************************");
    for (int i = 0; i < C; i++){
        for(int j = 0; j < C; j++){
            a[i][j] = bp -> place[k++];
        }
    }
    for (int i = 0; i < C; i++){
        for(int j = 0; j < C; j++){
            if (a[i][j] == 2){
                attrset(COLOR_PAIR(1));
            }else if(a[i][j] == 4){
                attrset(COLOR_PAIR(2));
            }else if(a[i][j] == 8){
                attrset(COLOR_PAIR(3));
            }else if(a[i][j] == 16){
                attrset(COLOR_PAIR(4));
            }else if(a[i][j] == 32){
                attrset(COLOR_PAIR(5));
            }else if(a[i][j] == 64){
                attrset(COLOR_PAIR(1));
            }else if(a[i][j] == 128){
                attrset(COLOR_PAIR(2));
            }else if(a[i][j] == 256){
                attrset(COLOR_PAIR(3));
            }else if(a[i][j] == 512){
                attrset(COLOR_PAIR(4));
            }else if(a[i][j] == 1028){
                attrset(COLOR_PAIR(5));
            }else if(a[i][j] == 2048){
                attrset(COLOR_PAIR(7));
            }
            b = x - 1 + 4*i;
            c = y + 4 + 10*j;
            if(a[i][j] != 0){
                mvprintw(b, c, "%d", a[i][j]);
            }else{
                mvprintw(b, c, " ", a[i][j]);
            }
            attrset(COLOR_PAIR(6));
        }
    }
}   
