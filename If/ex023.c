#include<stdio.h>
main()
{
	int s;
	printf("�b�������:");
	scanf("%d", &s);
	if (s <= 5000) {
		printf("%d����%d��%d�b�ł�\n", s / 60 / 60, s / 60 % 60, s % 60 % 60);
	}
	else {
		printf("ERROR\n");
	}
}