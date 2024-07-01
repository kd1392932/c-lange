#include<stdio.h>
main()
{
	int a=0;
	while (a < 20) {
		a += 1;
		printf("%d ", a);
		if (a % 10 == 0) {
			printf("\n");
		}
	}
}