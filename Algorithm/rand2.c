#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int dice;

	srand(time(0));
	rand();
	dice = rand() % 301-100;//0~5����1~6��
	printf("�T�C�R����%d�ł�\n", dice);
}