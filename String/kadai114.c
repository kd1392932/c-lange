#include<stdio.h>
main()
{
	char txt[80];
	int i;
	printf("•¶š—ñ‚ÍH");
	scanf("%s", &txt[0]);
	printf("•¶š—ñ:%s ", &txt[0]);
	for (i = 0; txt[i] != '\0'; i++);
	printf("•¶š”=%d", i);
}