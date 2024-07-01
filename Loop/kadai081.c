#include<stdio.h>
main()
{
	int a = 0,to=0,ave=0;
	printf("整数(-999で終了)？");
	scanf("%d", &a);
	do {
		to += a;
		ave += 1;
		printf("整数(-999で終了)？");
		scanf("%d", &a);
		if (a ==  -999)break;
	} while (a != -999);
	printf("合計=%d", to);
	printf("平均=%8.3f", (float)to / ave);
}
