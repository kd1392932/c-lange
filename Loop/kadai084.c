#include<stdio.h>
main()
{
	int a=0, b=0;
	while (a != -999 || b != -999) {
		printf("整数1(-999で終了)？");
		scanf("%d", &a);
		printf("整数2(-999で終了)？");
		scanf("%d", &b);
		if (a == -999 || b == -999)break;
		if (b == 0)continue;
		printf("%d/%d=%d あまり%d\n", a, b, a / b, a % b);
	}
}