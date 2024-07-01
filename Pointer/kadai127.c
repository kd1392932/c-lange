#include<stdio.h>
main()
{
	double deta[5] = { 10.8,20.3,30.6,40.4,50.5 };
	double* p_deta = deta;
	float sum=0;
	int i;
	for (i = 0; i < 5; i++) {
		sum += *p_deta;
		p_deta++;
	}
	printf("‡Œv=%.3f\n•½‹Ï=%.3f", sum, sum /i);

}