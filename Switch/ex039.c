#include<stdio.h>
main()
{
	char co;
	int a=0, b=0, c=0;
	printf("処理を入力:");
	scanf("%c", &co);
	printf("整数を入力:");
	scanf("%d%d%d", &a, &b, &c);
	switch (co) {
	case 0x44:
	case 0x64:
		if (a >= b && a >= c ) {
			printf("最大値は%dです", a);
		}
		else if (b >= c) {
			printf("最大値は%dです", b);
		}
		else {
			printf("最大値は%dです", c);
		}
		break;
	case 0x53:
	case 0x73:
		if (a <= b && a <= c) {
			printf("最小値は%dです", a);
		}
		else if (b <= c) {
			printf("最小値は%dです", b);
		}
		else {
			printf("最小値は%dです", c);
		}
		break;
	case 0x47:
	case 0x67:
		printf("合計は%dです", a + b + c);
		break;
	case 0x48:
	case 0x68:
		printf("平均は%8.2fです", (float)(a + b + c) / 3);
		break;
	default:
		printf("FITAL ERROR!");
		break;
	}
}