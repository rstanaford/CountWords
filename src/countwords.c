#include <stdio.h>

#define WORD 1
#define NOWORD 0

int main()
{
	int c, nc, nw, nl, state;

	c = nc = nw = nl = 0;
	state = NOWORD;

	while ((c = getchar())  != EOF) {
		putchar(c);
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

	printf("The number of chars entered was: %d\n", nc);
	printf("The number of words entered was: %d\n", nw);
	printf("The number of lines entered was: %d\n", nl);

	return 0;
}

