#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji <= 0x5a) {
		printf("•ÏŠ·‚·‚é‚Æ%c", moji + 0x20);
	}
	else if (0x61 <= moji && moji <= 0x7a) {
		printf("•ÏŠ·‚·‚é‚Æ%c", moji - 0x20);
	}
	else {
		printf("“ü—ÍƒGƒ‰[\n•ÏŠ·‚Å‚«‚Ü‚¹‚ñ\n");
	}
}