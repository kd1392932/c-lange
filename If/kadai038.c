#include<stdio.h>
main()
{
	char en;
	printf("�ꕶ�����́H");
	scanf("%c", &en);
	if (0x41 <= en && en <= 0x5a) {
		printf("�ϊ����ʂ�%c", en + 0x20);
	}
	else if (0x61 <= en && en <= 0x7a) {
		printf("�ϊ����ʂ�%c", en - 0x20);
	}
	else {
		printf("�ϊ����ʂ�%c", en);
	}
}