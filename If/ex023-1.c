#include<stdio.h>
main()
{
	int s;
	printf("秒数を入力:");
	scanf("%d", &s);
	if (s > 5000) {
		printf("ERROR!\n");
	}
	else if(s>=0) {
		printf("%d時間%d分%d秒です\n", s / 60 / 60, s / 60 % 60, s % 60 % 60);
	}
	else {
		printf("マイナスはエラーです\n");
	}
}