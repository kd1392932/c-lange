#include<stdio.h>
main()
{
	int a, i = 0,to=0;
	printf("����:");
	while (scanf("%d",&a)!=EOF)
	{
		printf("����:");
		to += a;
		i++;
	}
	printf("���v=%d ����=%.3f", to, (float)to / i);
}