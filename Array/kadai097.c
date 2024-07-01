#include<stdio.h>
main()
{
	int i, a[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int c[10];
	printf("”z—ña= ");
	for (i = 0; i <= 9; i++) {
		printf("%d ", a[i]);
	}
	i = 0;
	while (i != 10) {
		c[i] = a[9 - i];
		i++;
	}
	printf("”z—ñc=");
	for (i = 0; i <= 9; i++) {
		printf("%d ", c[i]);
	}
}