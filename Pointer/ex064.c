#include<stdio.h>
main()
{
	char *p_ride1[3] = { "car","bus","shinkansen" };
	char *p_ride2;
	int i;
	for (i = 0; i < 3; i++) 
	{
		p_ride2 = p_ride1[i];
		while (*p_ride2) {
			printf("%c",*p_ride2++);
		}
		printf("\n");
	}

}