#include<stdio.h>
main()
{
	int num;
	char co;
	num = 0;
	co = 0;
	while (num != -1) {
		printf("�����R�[�h(-1�œ��͏I��)�H");
		scanf("%d", &num);
		co = num;
		if (num != -1) {
			printf("%c\n", co);
		}
	}
}