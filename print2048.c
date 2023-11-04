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

void print2048()
{
	int x, y, w, h;
	getmaxyx(stdscr, h, w);
	y = w/3 + 4;
	x = h/3 - 1;
	clear();
	mvprintw(x-3, y,"2222     OOOO           4      88888  ");
	mvprintw(x-2, y,"    2   O    O        4 4      8   8  ");
	mvprintw(x-1, y,"    2   O    O      4   4       8 8   ");
	mvprintw(x  , y,"2222    O    O     4    4        8    ");
	mvprintw(x+1, y,"2       O    O    4     4       8 8   ");
	mvprintw(x+2, y,"2       O    O   4444444444    8   8  ");
	mvprintw(x+3, y,"2       O    O          4     8     8 ");
	mvprintw(x+4, y,"22222    OOOO           4      88888  ");
}