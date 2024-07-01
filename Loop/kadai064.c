#include<stdio.h>
main()
{
	int a = 20;
	while (a > 0) {
		printf("%d ", a);
		a -= 1;
		if (a % 10 == 0) {
			printf("\n");
		}
	}
}