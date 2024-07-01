#include<stdio.h>
main()
{
	int a, i = 0,to=0;
	printf("®”:");
	while (scanf("%d",&a)!=EOF)
	{
		printf("®”:");
		to += a;
		i++;
	}
	printf("‡Œv=%d •½‹Ï=%.3f", to, (float)to / i);
}