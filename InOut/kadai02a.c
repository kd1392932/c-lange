#include<stdio.h>
int main()
{
	double a, b;
	printf("��̎����l:");
	scanf("%lf%lf", &a, &b);
	printf("�a=%f",a + b);
	printf("��=%f",a - b);
	printf("��=%f",a * b);
	printf("��=%f",a / b);
}