#include<stdio.h>
main()
{
	int ia, to, ave;
	ia = 0;
	to = 0;
	ave = 0;
	printf("”‚ğ“ü‚ê‚Ä:");
	scanf("%d", &ia);
	while (ia != -999) {
		to += ia;
		ave += 1;
		printf("”‚ğ“ü‚ê‚Ä:");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d\n", to);
	printf("•½‹Ï=%8.2f\n", (float)to / ave);
}