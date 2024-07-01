#include<stdio.h>
main()
{
	int i;
	float box[3],to=0,ave=0;
	box[0] = printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[0]);
	box[1] = printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[1]);
	box[2] = printf("À”‚ğ“ü—Í:");
	scanf("%f", &box[2]);
	for (i = 0; i <= 2; i++) {
		to += box[i];
		ave += 1;
	}
		printf("‡Œv=%8.2f\n", to);
		printf("•½‹Ï=%8.2f\n", to / ave);
}