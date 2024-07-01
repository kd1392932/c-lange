#include<stdio.h>
main()
{
	char co;
	printf("アルファベッド大文字？:");
	scanf("%c", &co);
	for (co; co <= 90; co++) {
		printf("%c", co);
	}
}