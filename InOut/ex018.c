#include<stdio.h>
main()
{
	float a, b, c,wa;
	printf("�������R����:");
	scanf("%f %f %f", &a,& b,& c);
	wa = a + b + c;
	printf("���v=%d", (int)wa);
	printf("���� = % 8.2f",wa / 3);
}