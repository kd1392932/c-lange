#include<stdio.h>
main()
{
	int a=0, to=0;
	printf("��������:");
	scanf("%d", &a);
	do {
		to += a;
		printf("��������:");
		scanf("%d", &a);
		if (a == -999)break;
	} while (a != -999);
	printf("���v=%d", to);
}