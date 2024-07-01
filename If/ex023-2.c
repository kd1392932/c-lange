#include<stdio.h>
main()
{
	int yy;
	printf("¼—ï‚ğ“ü—Í:");
	scanf("%d", &yy);
	if (yy % 100 == 0&& yy%400!=0) {
		printf("•½”N‚Å‚·");
	}
	else if(yy % 4==0) {
		printf("‚¤‚é‚¤”N‚Å‚·");
	}
	else {
		printf("•½”N‚Å‚·");
	}
}