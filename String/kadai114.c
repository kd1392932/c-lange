#include<stdio.h>
main()
{
	char txt[80];
	int i;
	printf("������́H");
	scanf("%s", &txt[0]);
	printf("������:%s ", &txt[0]);
	for (i = 0; txt[i] != '\0'; i++);
	printf("������=%d", i);
}