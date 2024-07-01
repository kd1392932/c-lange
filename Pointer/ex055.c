#include<stdio.h>
main()
{
	int to=0,i=0,a[6] = { 11,22,33,44,55,66 };
	int *p_a;
	float tob=0, b[4] = { 11.1,22.2,33.3,44.4 };
	float *p_b;

	p_a = a;
	for ( i = 0; i <= 5; i++) {
		to += *p_a;
		p_a++;
	}
	printf("配列a 合計=%d 平均=%.3f\n", to, (float)to /  i);

	p_b = b;
	for ( i = 0; i <= 3; i++) {
		tob += *p_b;
		p_b++;
	}
	printf("配列b 合計=%.3f 平均=%.3f", tob, tob / i);
}