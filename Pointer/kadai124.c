#include<stdio.h>
main()
{
	char c, * p_c = &c;
	printf("�ꕶ�����́H");
	scanf("%c", &c);
	printf("���̕�����%c", *p_c + 0x01);
}