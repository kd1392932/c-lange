#include<stdio.h>
main()
{
	int c, to, ave;
	c = 0;
	ave = 0;
	printf("���́H");
	scanf("%d", &c);
	for (to = 0; c != -999; ave++) {
		to += c;
		printf("���́H:");
		scanf("%d", &c);
	}
	printf("���v��=%d ���ς�=%.2f", to,(float) to / ave);
}