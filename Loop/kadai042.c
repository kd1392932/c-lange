#include<stdio.h>
main()
{
	int a,b;
	a = 1;
	b = 1;
	printf("%d", a);
	while (b< 300) {
		a += 1;
		b += a;
		printf("+%d", a);
	}
	a += 1;
	b += a;
	printf("+%d",a );
	printf("=%d",b);
}