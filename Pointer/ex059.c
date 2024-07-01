#include<stdio.h>
main()
{
	char deta[15] = "C Language";
	char deta2[15];
	char *p_deta, *p_deta2;
	p_deta = deta;
	p_deta2 = deta2;
	printf("deta[]=%s\n", p_deta);
	while (*p_deta2++ = *p_deta++);
	p_deta2 = deta2;
	printf("deta2[]=%s\n", p_deta2);
	while (*p_deta2) {
		putchar(*p_deta2++);
	}
	putchar('\n');
}