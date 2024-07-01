#include<stdio.h>
main()
{
	char co;
	printf("アルファベッド小文字？:");
	scanf("%c", &co);
	for (co; co <= 122; co++) {
		printf("%c", co);
	}
}