#include<stdio.h>
void sumavg(int *a,int *b,int *to, float *ave);
main()
{
	int a, b, to;
	float ave;
	printf("����������:");
	scanf("%d%d", &a, &b);
	sumavg(&a, &b,&to, &ave);
	printf("���v��%d�A���ς�%.2f", to, ave);
}

void sumavg(int *a, int *b, int *to, float *ave)
{
	*to = *a + *b;
	*ave = (float)*to / 2;
	return;
}