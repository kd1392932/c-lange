#include<stdio.h>
main()
{
	float a, b;
	printf("2�̎����l�H");
	scanf("%f%f", &a, &b);
	if (a > b) {
		printf("�傫���ق���=%f", a);
	}
	else if(a=b){
		printf("�����傫���ł�");
	}
	else {
		printf("�傫���ق���=%f", b);
	}
}