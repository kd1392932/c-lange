#include<stdio.h>
main()
{
	int yy;
	printf("��������:");
	scanf("%d", &yy);
	if (yy >= 1989) {
		printf("�������܂�ł�\n");
	}
	else if(yy<1926) {
		printf("�吳���܂�ł�\n");
	}
	else {
		printf("���a���܂�ł�\n");
	}
}