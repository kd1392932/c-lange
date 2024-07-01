#include<stdio.h>
main()
{
	int a,b;
	printf("”‚ÍH");
	scanf("%d", &a);
	do {
		b = 0;
		do {
			printf("*");
			b += 1;
		} while (b < 5);
		printf("\n");
		a -= 1;
	} while (a > 0);
}