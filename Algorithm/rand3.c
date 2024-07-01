#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int k;
	printf("* ○○の攻撃！\n");
	srand(time(0));
	rand();
	k = rand() % 100;
	if (k <= 30) {
		printf("* 会心の一撃！\n");
		printf("* 敵に%dのダメージ！\n", k * k*100);
		printf("* YOU WIN!!!");
	}
	else if (k >= 80) {
		printf("* MISS!\n");
		printf("* YOU LOSE...");
	}
	else {
		printf("* HIT!\n");
		printf("* 敵に%dのダメージ！\n", k);
		printf("* YOU WIN");
	}
}