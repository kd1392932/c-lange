#include<stdio.h>
main()
{
	float a, b, c;
	printf("��ڂ̎���:");
	scanf("%f", &a);
	printf("�Q�ڂ̎���:");
	scanf("%f", &b);
	printf("�R�ڂ̎���:");
	scanf("%f", &c);
	printf("���v=%8.2f ����=%8.2f", a+b+c,(a+b+c)/3);
}