#include<stdio.h>
main()
{
	char en;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &en);
	if (0x61<=en && en<=0x7a) {
		printf("���̕����́u�������v�ł�");
	}
	else if (0x41<= en && en<=0x5a) {
		printf("���̕����́u�啶���v�ł�");
	}
	else {
		printf("error!");
	}
}