#include<stdio.h>
main()
{
	int ia, to, ave;
	ia = 0;
	to = 0;
	ave = 0;
	printf("��������:");
	scanf("%d", &ia);
	while (ia != -999) {
		to += ia;
		ave += 1;
		printf("��������:");
		scanf("%d", &ia);
	}
	printf("���v=%d\n", to);
	printf("����=%8.2f\n", (float)to / ave);
}