#include<stdio.h>
main()
{
	int noX,noY;
	printf("   1  2  3  4  5  6  7  8  9\n============================\n");
	for (noY = 1; noY <= 9; noY++) {
		printf("%d |", noY);
		for (noX=1; noX <= 9; noX++) {
			printf("%d ", noX * noY);
			if (noX * noY < 10) {
				printf(" ");
			}
		}
		printf("\n");
	}
}