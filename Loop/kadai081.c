#include<stdio.h>
main()
{
	int a = 0,to=0,ave=0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &a);
	do {
		to += a;
		ave += 1;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &a);
		if (a ==  -999)break;
	} while (a != -999);
	printf("���v=%d", to);
	printf("����=%8.3f", (float)to / ave);
}
