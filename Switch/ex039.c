#include<stdio.h>
main()
{
	char co;
	int a=0, b=0, c=0;
	printf("���������:");
	scanf("%c", &co);
	printf("���������:");
	scanf("%d%d%d", &a, &b, &c);
	switch (co) {
	case 0x44:
	case 0x64:
		if (a >= b && a >= c ) {
			printf("�ő�l��%d�ł�", a);
		}
		else if (b >= c) {
			printf("�ő�l��%d�ł�", b);
		}
		else {
			printf("�ő�l��%d�ł�", c);
		}
		break;
	case 0x53:
	case 0x73:
		if (a <= b && a <= c) {
			printf("�ŏ��l��%d�ł�", a);
		}
		else if (b <= c) {
			printf("�ŏ��l��%d�ł�", b);
		}
		else {
			printf("�ŏ��l��%d�ł�", c);
		}
		break;
	case 0x47:
	case 0x67:
		printf("���v��%d�ł�", a + b + c);
		break;
	case 0x48:
	case 0x68:
		printf("���ς�%8.2f�ł�", (float)(a + b + c) / 3);
		break;
	default:
		printf("FITAL ERROR!");
		break;
	}
}