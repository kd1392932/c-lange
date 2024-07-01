#include<stdio.h>
main()
{
	int a;
	a = 1;
	do {
		do{
			printf("%d ", a);
		} while (a++ % 10 != 0);
		printf("\n");
	} while (a < 20);
}