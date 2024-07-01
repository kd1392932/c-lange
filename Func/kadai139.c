#include<stdio.h>
void display(int num, char moji);
main()
{
	char moji;
	int num;
	printf("•¶šH:");
	scanf("%c", &moji);
	printf("®”H:");
	scanf("%d", &num);
	display(num, moji);
}

void display(int num, char moji)
{
	while ( num ) {
		printf("%c", moji);
		num--;
	}
}