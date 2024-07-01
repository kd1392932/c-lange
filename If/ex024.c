#include<stdio.h>
main()
{
	char moji;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c", &moji);
	if (0x41 <= moji && moji<= 0x5a) {
		printf("‘å•¶Žš‚Å‚·");
	}
	else {
		printf("‚»‚Ì‘¼‚Ì•¶Žš‚Å‚·");
	}
}