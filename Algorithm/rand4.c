#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,un;
	srand(time(0));
	un = rand() % 5+1;
	printf("�����̂��Ȃ��̉^���́A");
	for (i = 0; i < un; i++) {
		printf("�� ");
	}
	printf("�ł��B");
}