#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5a) {
		printf("�ϊ������%c", moji + 0x20);
	}
	else if (0x61 <= moji && moji <= 0x7a) {
		printf("�ϊ������%c", moji - 0x20);
	}
	else {
		printf("���̓G���[\n�ϊ��ł��܂���\n");
	}
}