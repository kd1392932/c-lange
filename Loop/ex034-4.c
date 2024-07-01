#include<stdio.h>
main()
{
	int a, b, c;
	b = 0;
	printf("êîÇÕÅH");
	scanf("%d", &a);
	do {
		c = a;
		do {
			printf(" ");
			c-=1;
		} while (c != b);
		c = -1;
		do {
			printf("*");
			c += 1;
		} while (c != b);
		printf("\n");
		b += 1;
	} while (b != a);
}