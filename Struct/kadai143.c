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
	printf("¤•i–¼: %s\n", fruit.name);
	printf("‰¿Ši:	%d‰~\n", fruit.price);
	printf("‚¨‘E‚ß“x:");
	for (int i = 0; i < fruit.point; i++) {
		printf("š ");
	}
	printf("\nŒÂ”:	%dŒÂ\n", fruit.number);
	printf("‹àŠz:	\\%d-", fruit.total);
}