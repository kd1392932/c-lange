#include<stdio.h>
main()
{
	int yy;
	printf("��������:");
	scanf("%d", &yy);
	if (yy % 100 == 0&& yy%400!=0) {
		printf("���N�ł�");
	}
	else if(yy % 4==0) {
		printf("���邤�N�ł�");
	}
	else {
		printf("���N�ł�");
	}
}