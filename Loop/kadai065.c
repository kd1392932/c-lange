#include<stdio.h>
main()
{
	int ia = 0, to = 0, ave = 0;
	printf("����(-999�ŏI��)�H");
	scanf("%d", &ia);
	do {
		to += ia;
		ave += 1;
		printf("����(-999�ŏI��)�H");
		scanf("%d", &ia);
	} while (ia != -999);
	printf("���v=%d\n", to);
	printf("����=%f\n", (float)to / ave);
}