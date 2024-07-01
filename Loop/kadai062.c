#include<stdio.h>
main()
{
	int a = 20;
	do {
		do {
			printf("%d ",a);
		} while (a-- % 10 != 1);
		printf("\n");
	} while (a > 1);
}