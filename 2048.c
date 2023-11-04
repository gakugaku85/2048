#ifdef __CYGWIN__
#include <ncurses.h>
#elif _WIN64
#include "curses.h"
#elif _WIN32
#include "curses.h"
#else
#include <ncurses.h>
#endif

#include <stdio.h>
#include "2048.h"
#include <unistd.h>
#include <locale.h>

int main(){

  setlocale(LC_ALL, "");
  virb bob;
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);

  int x, y, w, h, key;

  int a[N] = {1024, 1024, 2, 4,
          32, 64, 128, 256,
          2, 2, 64, 32,
          8, 16, 256, 512};

  int b[N] = {16, 32, 2, 4,
          32, 64, 128, 256,
          2, 2, 128, 32,
          8, 16, 256, 512};

  getmaxyx(stdscr, h, w);
  x = h/3;
  y = w/3;

  while(1){
    print2048();
    mvprintw(x+8, y+18, "通常モード[n]");
    mvprintw(x+9, y+18, "完成モード[s]");
    mvprintw(x+10, y+18, "終了モード[e]");
    mvprintw(x+11, y+18, "終了[q]");
    key = getch();
    clear();
    if (key == 'q'){
      break;
    }else if(key == 'n'){
      makeBoard(&bob);
    }else if(key == 's'){
      initBoard(&bob);
      setByNum(&bob.boards[Center], a);
    }else if(key == 'e'){
      initBoard(&bob);
      setByNum(&bob.boards[Center], b);
    }else{
      continue;
    }

    displayBoard(&bob);

    while(1){
      int Flag = 0;
      if(checkFinish(&bob) == 1){
        mvaddstr(x+15, y+30, "ゲームオーバー");
        refresh();
        sleep(2);
        break;
      }

      if(checkFinish(&bob) == 2 && Flag == 0){
        mvaddstr(x+15, y+30, "2048完成！");
        refresh();
        Flag = 1;
      }

      key = getch();
    if (key == 'q'){
      break;
    }
      moveAll(&bob);
      if(key == KEY_UP &&
        isEquals(&bob.boards[Center], &bob.boards[Up]) == 0){
        inMove(&bob, Up);
      }else if(key == KEY_DOWN &&
        isEquals(&bob.boards[Center], &bob.boards[Down]) == 0){
        inMove(&bob, Down);
      }else if(key == KEY_LEFT &&
        isEquals(&bob.boards[Center], &bob.boards[Left]) == 0){
        inMove(&bob, Left);  
      }else if(key == KEY_RIGHT &&
        isEquals(&bob.boards[Center], &bob.boards[Right]) == 0){
        inMove(&bob, Right);
      }else{
        mvaddstr(x+15, y+30, "その入力は無効です");
        continue;
      }
      appearNum(&bob);
      displayBoard(&bob);
    }
  } 
  echo();
  nocbreak();
  endwin();
  return 0;
}