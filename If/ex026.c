#include<stdio.h>
main()
{
	int mo;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d", &mo);
	if (mo == 1|| mo==3 || mo== 5 || mo== 7 || mo== 8 || mo==10 || mo==12) {
		printf("ÅI“ú‚Í31“ú‚Å‚·");
	}
	else if(mo==2){
		printf("ÅI“ú‚Í28“ú‚Å‚·");
	}
	else {
		printf("ÅI“ú‚Í30“ú‚Å‚·");
	}
}