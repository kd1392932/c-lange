#include<stdio.h>
main()
{
	char en;
	printf("�ꕶ�����́H");
	scanf("%c", &en);
	if (0x41 <= en && en <= 0x5a || 0x61 <= en && en <= 0x7a) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else {
		printf("ERROR!");
	}
}