#include<stdio.h>
main()
{
	char co;
	printf("���Z�q������:");
	scanf("%c", &co);
	switch (co) {
	case 0x2b:
		printf("���Z�ł�");
		break;
	case 0x2d:
		printf("���Z�ł�");
		break;
	case 0x2a:
		printf("��Z�ł�");
		break;
	case 0x2f:
		printf("���Z�ł�");
		break; 
	case 0x25:
		printf("���܂�ł�");
		break;
	default:
		printf("���̑��ł�");
		break;
	}
}