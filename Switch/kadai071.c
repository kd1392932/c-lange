#include<stdio.h>
main()
{
	int a, b;
	char co;
	printf("®”‚PH");
	scanf("%d", &a);
	printf("®”‚QH");
	scanf("%d", &b);
	scanf("%c", &co);
	printf("‰‰ZqH");
	scanf("%c", &co);

	switch (co) {
	case 0x2b:
		printf("%d%c%d=%d", a, co, b, a + b);
		break;
	case 0x2d:
		printf("%d%c%d=%d", a, co, b, a - b);
		break;
	case 0x2a:
		printf("%d%c%d=%d", a, co, b, a * b);
		break;
	case 0x2f:
		printf("%d%c%d=%8.2f", a, co, b, (float)a / b);
		break;
	case 0x25:
		printf("%d%c%d=%d ‚ ‚Ü‚è%d", a, co, b, a / b, a % b);
		break;
	default:
		printf("ERROR");
	}
}