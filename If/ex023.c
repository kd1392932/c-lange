#include<stdio.h>
main()
{
	int s;
	printf("•b”‚ğ“ü—Í:");
	scanf("%d", &s);
	if (s <= 5000) {
		printf("%dŠÔ%d•ª%d•b‚Å‚·\n", s / 60 / 60, s / 60 % 60, s % 60 % 60);
	}
	else {
		printf("ERROR\n");
	}
}