#include<stdio.h>
main()
{
	int a = 1, b = 1;
	printf("%d", a);
	do {
		a++;
		b += a;
		printf("+%d", a);
	} while (b < 300);
	a++;
	b += a;
	printf("+%d", a);
	printf("=%d", b);
}