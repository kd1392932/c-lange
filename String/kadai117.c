#include<stdio.h>
main()
{
	char day[7][10] = { "sunday","monday","tuseday","wednesday","thursday","friday","saturday" };
	int i,j;

	for (i = 0; i < 7; i++){
		puts(day[i]);
		printf("\n");
	}
}