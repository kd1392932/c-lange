#include<stdio.h>
main()
{
	char deta1[] = "abcde";
	char deta2[5];
	int i;
	printf("(コピー元)配列　deta1[]=");
	for (i = 0; deta1[i] != '\0'; i++) {
		printf("%c", deta1[i]);
	}
	printf("\n(コピー先)配列　deta2[]=");
	for (i = 0; deta2[i] != '\0'; i++) {
		printf("%c", deta2[i] = deta1[i]);
	}
}