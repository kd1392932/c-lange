#include<stdio.h>
int goukei(int a, int b, int c);
float heikin(int to, int co);
main()
{
	int a, b, c, to,co;
	float ave;
	printf("�������R����:");
	co = scanf("%d%d%d", &a, &b, &c);
	to = goukei(a, b, c);
	ave = heikin(to, co);
 	printf("���v��%d�A���ς�%.2f", to,ave);
}

int goukei(int a, int b, int c)
{
	int goukei;
	goukei = a + b + c;
	return goukei;
}
float heikin(int to, int co)
{
	float ave;
	ave =(float) to / co;
	return ave;
}