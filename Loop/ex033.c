#include<stdio.h>
main()
{
	int c, to, ave;
	c = 0;
	ave = 0;
	printf("”‚ÍH");
	scanf("%d", &c);
	for (to = 0; c != -999; ave++) {
		to += c;
		printf("”‚ÍH:");
		scanf("%d", &c);
	}
	printf("‡Œv‚Í=%d •½‹Ï‚Í=%.2f", to,(float) to / ave);
}