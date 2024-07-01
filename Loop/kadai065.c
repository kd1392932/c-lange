#include<stdio.h>
main()
{
	int ia = 0, to = 0, ave = 0;
	printf("整数(-999で終了)？");
	scanf("%d", &ia);
	do {
		to += ia;
		ave += 1;
		printf("整数(-999で終了)？");
		scanf("%d", &ia);
	} while (ia != -999);
	printf("合計=%d\n", to);
	printf("平均=%f\n", (float)to / ave);
}