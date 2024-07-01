#include<stdio.h>
main()
{
	int a,i, j;
	char day[7][10] = { "sunday","monday","tuseday","wednesday","thursday","friday","saturday" };
	printf("”’l‚ÍH(0~6)");
	scanf("%d", &a);
	for (i = 0; i < 7; i++) {
		if (i == a) {
			for (j = 0; j < 10; j++) {
				putchar(day[i][j]);
			}
		}	
	}
}