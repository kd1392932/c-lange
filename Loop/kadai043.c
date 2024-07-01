#include<stdio.h>
main()
{
	int num;
	char co;
	num = 0;
	co = 0;
	while (num != -1) {
		printf("文字コード(-1で入力終了)？");
		scanf("%d", &num);
		co = num;
		if (num != -1) {
			printf("%c\n", co);
		}
	}
}