#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("�����l�P�H");
	scanf("%lf", &a);
	printf("�����l�Q�H");
	scanf("%lf", &b);
	if (a > b) {
		printf("�傫���ق�=%f", *p_a);
	}
	else {
		printf("�傫���ق�=%f", *p_b);
	}
}