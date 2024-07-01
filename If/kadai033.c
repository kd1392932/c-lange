#include<stdio.h>
main()
{
	char en;
	printf("アルファベット？");
	scanf("%c", &en);
	if (0x61<=en && en<=0x7a) {
		printf("その文字は「小文字」です");
	}
	else if (0x41<= en && en<=0x5a) {
		printf("その文字は「大文字」です");
	}
	else {
		printf("error!");
	}
}