#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int i,* p_a = a, * p_b = b;
	printf("”z—ñb[]=");
	for (i = 0; b[i] != 0; i++) {
		b[i] = a[i] + b[i];
		printf("%d,", b[i]);
	}
}