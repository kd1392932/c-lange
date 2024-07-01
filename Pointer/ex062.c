#include<stdio.h>
main()
{
	int i=0;
	char *p = "peach";
	char deta1[10] = "banana", *p_deta1;
	char deta2[10], *p_deta2;
	p_deta1 = p;
	p_deta2 = deta1;
	printf("deta1[]=");
	while (*p_deta1) {
		putchar(*p_deta1++);
	}
	printf("\ndeta2[]=");
	while (*p_deta2) {
		putchar(*p_deta2++);
	}
}