#include<stdio.h>
main()
{
	char en;
	printf("ˆê•¶š“ü—ÍH");
	scanf("%c", &en);
	if (0x41 <= en && en <= 0x5a) {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", en + 0x20);
	}
	else if (0x61 <= en && en <= 0x7a) {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", en - 0x20);
	}
	else {
		printf("•ÏŠ·Œ‹‰Ê‚Í%c", en);
	}
}