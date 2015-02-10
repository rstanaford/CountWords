#include <stdio.h>
#include <curses.h>

#define WORD 1
#define NOWORD 0

int main()
{
	int c, nc, nw, nl, state;

	c = nc = nw = nl = 0;
	state = NOWORD;

	initscr();
        getmaxyx(stdscr,row,col);
	

	while ((c = getchar())  != EOF) {
		nc++;

		if (c == '\n')
			++nl;
		
		if (c == ' ' || c == '\n' || c == '\t')
			state = NOWORD;
		else if (state == NOWORD) {
			state = WORD;
			nw++;
		}
	}


	return 0;
}

