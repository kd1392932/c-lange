#include<stdio.h>
main()
{
	int a[30] = { 3,5,7,9,11,13,15,17,19,21,0 };
	int b[30] = { 4,8,12,16,20,24,28,32,38,42,0 };
	int w;
	int i, * p_a = a, * p_b = b;
	printf("ーーー実行前ーーー\n");
	printf("配列a[]=");
	for (i = 0; a[i] != 0; i++) {
		printf("%d ", a[i]);
	}
	printf("\n配列b[]=");
	for (i = 0; b[i] != 0; i++) {
		printf("%d ", b[i]);
	}
	printf("\nーーー実行後ーーー\n");
	printf("配列a[]=");
	for (i = 0; a[i] != 0; i++) {
		w = p_a[i];
		p_a[i] = p_b[i];
		p_b[i] = w;
		printf("%d ", a[i]);
	}
	printf("\n配列b[]=");
	for (i = 0; b[i] != 0; i++) {
		printf("%d ", b[i]);
	}
}