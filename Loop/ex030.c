#include<stdio.h>
main()
{
	int a,nu;
	printf("��������:");
	scanf("%d", &nu);
	a = 0;
	while (a <= 10) {
		printf("%d+%d=%d\n", nu, a, nu + a);
		a += 1;
	}
}