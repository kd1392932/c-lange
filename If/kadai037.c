#include<stdio.h>
main()
{
	int num;
	printf("0から100までの整数？");
	scanf("%d", &num);
	if (90 <= num && num <= 100) {
		printf("その数値の判定結果は「5」です");
	}
	else if (80 <= num && num < 90) {
		printf("その数値の判定結果は「4」です");
	}
	else if (50 <= num && num < 80) {
		printf("その数値の判定結果は「3」です");
	}
	else if (30 <= num && num < 50) {
		printf("その数値の判定結果は「2」です");
	}
	else {
		printf("その数値の判定結果は「1」です");
	}
}