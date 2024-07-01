#include<stdio.h>
main()
{
	char *p_ride[3] = { "car","bus","shinkansen" };
	int i=0;
	while (i<3) {
		printf("%s\n", p_ride[i]);
		i++;
	}
}