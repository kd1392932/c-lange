#include<stdio.h>
main()
{
	char moji;
	printf("���������:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji<= 0x5a) {
		printf("�啶���ł�");
	}
	else {
		printf("���̑��̕����ł�");
	}
}