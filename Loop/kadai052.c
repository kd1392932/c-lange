#include<stdio.h>
main()
{
	int a, b;
	for (a = 1; a <= 60; a++) {
		printf("%d ", a);
		if (a % 20 == 0) {
			printf("\n");
		}
	}
}