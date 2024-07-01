#include<stdio.h>
main()
{
	char deta[10] = "Orange";
	char *p_deta;
	char *p = "Apple";
	p_deta = deta;
	printf("deta[]=");
	while (*p_deta) {
		putchar(*p_deta++);
	}
	printf("\n*p=");
	while (*p) {
		putchar(*p++);
	}
	putchar('\n');
}