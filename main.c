#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LOWER 0
#define UPPER 99
#define RANDSEL rand() % (UPPER + 1 - LOWER) + LOWER

unsigned int Table[100] = {
	0, 0, 0, 0, 0, 0,	// --
	1, 1, 1, 1, 1,		// B3
	2, 2, 2, 2, 2, 2,	// --
	3, 3, 3, 3, 3,		// B1
	4, 4, 4, 4, 4, 		// --
	5, 5, 5, 5, 5,		// B2
	6, 6, 6, 6, 6, 		// --
	7, 7, 7, 7, 7,		// W7
	8, 8, 8, 8, 8,		// --
	9, 9, 9, 9, 9,  	// B3
	10, 10, 10, 10,		// --
	11, 11, 11, 11,		// B2
	12, 12, 12, 12,		// --
	13, 13, 13, 13,		// R7
	14, 14, 14, 14,		// --
	15, 15, 15, 15,		// B2
	16, 16, 16, 16,		// --
	17, 17, 17, 17,		// B1
	18, 18, 18, 18,		// --
	19, 19, 19, 19,		// B2
	20, 20, 20, 20,		// --
	21, 21, 21, 21,		// W7
};

const char *Reel[22] = {
	"--",
	"B3",
	"--",
	"B1",
	"--",
	"B2",
	"--",
	"W7",
	"--",
	"B3",
	"--",
	"B2",
	"--",
	"R7",
	"--",
	"B2",
	"--",
	"B1",
	"--",
	"B2",
	"--",
	"W7",
};

int main() {
	srand(time(NULL));
	int select = RANDSEL;
	int value = Table[select];

	printf("Select key: %u\n", select);
	printf("Select value: %u\n", value);
	printf("Select stop: %s\n", Reel[value]);

	return 0;
}
