#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("実数値１？");
	scanf("%lf", &a);
	printf("実数値２？");
	scanf("%lf", &b);
	if (a > b) {
		printf("大きいほう=%f", *p_a);
	}
	else {
		printf("大きいほう=%f", *p_b);
	}
}