#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5a || 0x61 <= moji && moji <= 0x7a) {
		printf("�A���t�@�x�b�g�ł�");
	}
	else if (0x30 <= moji && moji <= 0x39) {
		printf("�����ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}