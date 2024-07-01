#include<stdio.h>
main()
{
	char co;
	printf("‰‰Zq‚ğ“ü‚ê‚Ä:");
	scanf("%c", &co);
	switch (co) {
	case 0x2b:
		printf("‰ÁZ‚Å‚·");
		break;
	case 0x2d:
		printf("Œ¸Z‚Å‚·");
		break;
	case 0x2a:
		printf("æZ‚Å‚·");
		break;
	case 0x2f:
		printf("œZ‚Å‚·");
		break; 
	case 0x25:
		printf("‚ ‚Ü‚è‚Å‚·");
		break;
	default:
		printf("‚»‚Ì‘¼‚Å‚·");
		break;
	}
}