#include<stdio.h>
#include<string.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};

main()
{
	struct fruit fruit;
	strcpy(fruit.name,"peach");
	fruit.price = 300;
	fruit.point = 5;
	fruit.number = 3;
	fruit.total = 0;
	fruit.total = fruit.price * fruit.number;
	printf("���i��: %s\n", fruit.name);
	printf("���i:	%d�~\n", fruit.price);
	printf("���E�ߓx:");
	for (int i = 0; i < fruit.point; i++) {
		printf("�� ");
	}
	printf("\n��:	%d��\n", fruit.number);
	printf("���z:	\\%d-", fruit.total);
}