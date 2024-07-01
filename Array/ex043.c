#include<stdio.h>
main()
{
	int i;
	char box[]="orange";
	for (i = 0; box[i] != '\0'; i++);
	printf("•¶š—ñ:%s\n", &box[0]);
	printf("•¶š”‚Í%d•¶š", i);
}