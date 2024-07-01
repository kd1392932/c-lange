#include<stdio.h>
main()
{
	int a=0, to=0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &a);
	do {
		to += a;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &a);
		if (a == -999)break;
	} while (a != -999);
	printf("‡Œv=%d", to);
}