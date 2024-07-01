#include<stdio.h>
main()
{
	int i, j;
	char day[7][10] = { "sunday","monday","tuseday","wednesday","thursday","friday","saturday" };
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 10; j++) {
			if (day[i][0] == 's') {
				putchar(day[i][j]);
			}
		}
		printf("\n");
	}
}