#include<stdio.h>
main()
{
	int a = 100, b = 200;
	int * p_a = &a, * p_b = &b,*w;
	printf("���s�O:*p_a=%d  *p_b=%d\n", a, b);
	printf("���s�O:&p_a=%p  &p_b=%p\n", &p_a, &p_b);
	printf("���s�O:p_a=%p  p_b=%p\n\n", p_a, p_b);
	  w = p_a;
	p_a = p_b;
	p_b = w;
	printf("���s��:*p_a=%d  *p_b=%d\n", *p_a, *p_b);
	printf("���s��:&p_a=%p  &p_b=%p\n", &p_a, &p_b);
	printf("���s��:p_a=%p  p_b=%p", p_a, p_b);
}