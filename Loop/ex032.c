#include<stdio.h>
main()
{
	int a,b;
	printf("��������:");
	scanf("%d", &b);
	for (a = 1; a <= 5; a++) {
		printf("%d ", a * b);
	}
}