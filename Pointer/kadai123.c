#include<stdio.h>
main()
{
	double a, b;
	double* p_a = &a, * p_b = &b;
	printf("ŽÀ”’l‚PH");
	scanf("%lf", &a);
	printf("ŽÀ”’l‚QH");
	scanf("%lf", &b);
	if (a > b) {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *p_a);
	}
	else {
		printf("‘å‚«‚¢‚Ù‚¤=%f", *p_b);
	}
}