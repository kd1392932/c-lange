#include<stdio.h>
main()
{
	int i=0;
	char mo[80];
	printf("������́H");
	scanf("%s", &mo[0]);
	while (mo[i]) {
		putchar(mo[i]);
		printf("\n");
		i++;
	}
}