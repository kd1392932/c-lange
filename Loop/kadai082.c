#include<stdio.h>
main()
{
	int a = 0, to = 0, ave = 0;
	while (a != -999) {
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a == -999)break;
		if (a < 0)continue;
		to += a;
		ave += 1;
	}

	printf("���v=%d", to);
	printf("����=%8.3f", (float)to / ave);
}