#include<stdio.h>
main()
{
	int i=0;
	char box[]= "Apple";
	printf("1�������\��\n");
	while (box[i]!='\0') {
		printf("%c", box[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s\n", &box[0]);
}