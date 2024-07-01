#include<stdio.h>
void sumavg(int *a,int *b,int *to, float *ave);
main()
{
	int a, b, to;
	float ave;
	printf("®”‚ğ“ñ‚Â“ü—Í:");
	scanf("%d%d", &a, &b);
	sumavg(&a, &b,&to, &ave);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", to, ave);
}

void sumavg(int *a, int *b, int *to, float *ave)
{
	*to = *a + *b;
	*ave = (float)*to / 2;
	return;
}