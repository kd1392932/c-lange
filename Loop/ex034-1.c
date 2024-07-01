#include<stdio.h>
main()
{
	int a;
	printf("”‚ÍH:");
	scanf("%d", &a);
	do {
		printf("*****\n");
		a -= 1;
	} while (a > 0);
}