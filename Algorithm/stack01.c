#include<stdio.h>

#define STACKSIZE 8
int stack[STACKSIZE];
int sp = 0;

void display(void);
int push(int d);
int pop(int* pd);

main()
{
	int key, deta, result;

	do {
		printf("\n\n◇プッシュはi、ポップはoを入力して＞");
		key = getche();
		printf("\n");

		if (key == 'i') {
			printf("データ入力＞");
			scanf("%d", &deta);
			result = push(deta);
			if (result == -1) {
				printf("\n※※※スタックがいっぱいです※※※");
			}
			else {
				display();
			}
		}

		if (key == 'o') {
			result = pop(&deta);
			if (result == -1) {
				printf("※※※スタックが空です※※※");
			}
			else {
				printf("スタックからデータ(%d)を取り出しました\n", deta);
				display();
			}
		}
	} while (key != 'e');

}

//スタック表示関数
void display(void)
{
	int i;
	printf("\n===現在のスタックの内容===\n");
	for (i = 0; i < STACKSIZE; i++) {
		printf("stack[%2d]は%5d", i, stack[i]);
		if (i == sp) {
			printf("←spが示している所(現在spは%d)", sp);
		}
		printf("\n");
	}
	return;
}

//スタックにデータを積む(プッシュする)関数
int push(int d)
{
	if (sp >= STACKSIZE) { return - 1; }
	stack[sp] = d;
	sp++;
	return 0;
}

int pop(int* pd)
{
	if (sp <= 0) { return -1; }
	sp--;
	*pd= stack[sp];
	stack[sp] = 0;
	return 0;
}