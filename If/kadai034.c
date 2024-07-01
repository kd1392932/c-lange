#include<stdio.h>
main()
{
	char en;
	printf("一文字入力？");
	scanf("%c", &en);
	if (0x41 <= en && en <= 0x5a || 0x61 <= en && en <= 0x7a) {
		printf("アルファベットです");
	}
	else {
		printf("ERROR!");
	}
}