#include<stdio.h>
main()
{
	int k, a, b;
	printf("���Z�q�����:");
	scanf("%d", &k);
	printf("��̐��������:");
	scanf("%d%d", &a, &b);
	if (k == 1) {
		printf("%d", a+b);
	}
	else if(k==2){
		printf("%d",a-b);
	}
	else if (k == 3) {
		printf("%d", a * b);
	}
	else if (k == 4) {
		printf("%d", a / b);
	}
	else {
		printf("error");
	}
}